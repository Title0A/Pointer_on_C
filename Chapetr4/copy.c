
#include "main.h"

#define d_nu   50
#define s_nu   25

void copy_n(char const dst[],char src[],int n){

	/*
	**��������С
	**�ɲ��Կ�֪����dst������Ϊʵʱ�������ݵ�copy_n��ʱ��
	**sizeof(dst)ֻ�ܲ��dstָ��Ĵ�С������������ĳ���
	*/
	int n_dst = ((&dst[d_nu] - dst)/sizeof(dst[0]));
	int n_src = ((&src[s_nu] - src)/sizeof(src[0]));
	char test[] = "test sizeof array";

	
	char *d =(char *)dst;
	char *s = src;
	int i = 0;
	printf("sizeof dst = %d:sizeof src = %d\n",n_dst,n_src);
	printf("test sizeof array : %d\n",sizeof(test));

	//���Ҫ���Ƶĳ��ȱ�Դ���鳤ʱ��������Դ������ں�������ַ�
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
		
	}//����
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





