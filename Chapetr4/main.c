
#include "main.h"
#include "square.h"
#include "prime.h"
#include "copy.h"
#include "judge_tri.h"
#include "chose_repeat_line.h"
int substr(char dst[],char src[],int start ,int len);
int deblank(char string[]);


int main(){
	int i = 0;
	double p;
	char dst[d_nu];
	char src[s_nu] = "i love C very much";
	char *d = dst;
	char dst2[100];
	char src2[] = "this _  is   _substr_test ";
	
	printf("double's sizeof is :%d\n",sizeof(double));
	printf("float's sizeof is :%d\n\n",sizeof(float));
	printf("char * sizeof is :%d\n",sizeof(char *));
	printf("/square.c---------------------------------------\n");
	//printf("please input a num for you want to square:");
	//scanf("%d",&i);
	p = square(567);
	printf("\n the end result is %lf\n",p);
	printf("/prime.c---------------------------------------\n");
	prime(100);
	printf("/judge_tri.c------------------------------------\n");
	judge_tri(12,13,14);
	printf("/copy_n.c---------------------------------------\n");
	copy_n(dst,src,5);
	//测出数组中元素的多少
	while(*d++ != '\0')
	{
		i= i + sizeof(char );
	}
	i = i/sizeof(char); 
	
	printf("main printf dst is :%s,src is :%s,copy %d char\n",dst,src,i);
	printf("/substr.c---------------------------------------\n");
	printf("sizeof src2 is :%d\n",sizeof(src2));
	substr(dst2,src2,5,5);
	printf("/chose_repeat_line.c---------------------------------------\n");
	//chose_repeat_line();
	printf("/deblank.c---------------------------------------\n");
	deblank(src2);


	return 0;

}

