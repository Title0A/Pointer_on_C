#include <stdio.h>
int gcd(int M, int N);
int *ascii_to_integer(char *string);
long  hermite(int n , int x);
int max_list(int value,...);
int simple_printf(char *s,...);
void written_amount(unsigned int amount ,char *buffer);


int a_to_int_str[10] = {0};         //定义全局变量，用于储存ascii_to_integer中的转换后的数字

int main()
	
{
	int M = 45 , N =76;
	char input[100] = "576i loveC123very much";
	int i ;
	char buffer[1000];
	
	printf("hermite.c---------------------------------------\n");
	printf("int n :%d,int x :%d, hermite resulte %ld\n",7,10,hermite(7,10));
	printf("gcd.c-------------------------------------------\n");
	printf("enter two integer number :\n");
	//scanf("%d%d",&M,&N);
	printf("M :%d,N :%d,GCD :%d\n",M,N,gcd(M,N));
	printf("ascii_to_integer.c--------------------------------\n");
	//scanf("%s",input);
	i = 0;
	ascii_to_integer(input);
	printf("input :%s\n",input);
	printf("ascii_to_integer :");
	while(a_to_int_str[i])
		printf("%d ",a_to_int_str[i++]);
	printf("\n");
	printf("max_list.c-----------------------------------------\n");
	printf("max_list :%d\n",max_list(3,493,6,8,25,14,35,76,43,-1));
	printf("simple_printf.c--------------------------------\n");
	simple_printf("this is test simple_printf %d,%f,%c,%c,%s\n",123,3.15,'A','B',"the end");
	printf("written_amount.c--------------------------------\n");
	written_amount(1736716123,buffer);

}
