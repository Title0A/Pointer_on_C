#include "copy.h"
#include "main.h"


void copy_n(char const dst[],char src[],int n){

	/*
	**算出数组大小
	**由测试可知，当dst数组作为实时参数传递到copy_n中时，
	**sizeof(dst)只能测出dst指针的大小，而不是数组的长度
	*/
	int n_dst = ((&dst[d_nu] - dst)/sizeof(dst[0]));
	int n_src = ((&src[s_nu] - src)/sizeof(src[0]));
	char test[] = "test sizeof array";

	
	char *d =(char *)dst;
	char *s = src;
	int i = 0;
	printf("sizeof dst = %d:sizeof src = %d\n",n_dst,n_src);
	printf("test sizeof array : %d\n",sizeof(test));

	//如果要复制的长度比源数组长时，复制完源数组后，在后面填空字符
	if(n_src < n)
	{
		for(i = 0 ; i < n_src;i++)
		{
			*d = *s;
			d = d + sizeof(char);
			s = s + sizeof(char);
			//printf("d = %p;*d =%c\n ",d,*d);
			
		}
		while(i <= n)
		{	
			*d = '\0';
			d = d + sizeof(char);
			i++;
			//printf("d = %p;*d =%c\n ",d,*d);
		}
		
	}//否则
	else
	{
		for(i = 0 ; i< n ; i++ )
		{	
			*d = *s;
			d = d + sizeof(char);
			s = s + sizeof(char);
			//printf("d = %p;*d =%c\n ",d,*d);
		}
		*d = '\0';
		//printf("d = %p;*d =%c\n ",d,*d);
	}

	

}





