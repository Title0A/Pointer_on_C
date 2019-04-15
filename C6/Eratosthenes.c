#include <stdio.h>
#define MAX 1000
int Eratosthenes(void )
{
	//先将整个数组初始化
	char list[MAX];
	for(int i = 0 ;i < MAX;i++)
		list[i] = 'T';
	int prime = 2;  //作为每次质数循环的起点
	//遍历整个列表将所有不是质数的整数对应的位设为'F'
	while( MAX - prime)
	{
		if(list[prime] == 'T')
		{
			
			for(int j =  2 ;j*prime <= MAX;j++)
				list[j*prime] = 'F';
		}
		else
			;
		prime++;
	}
	printf("prime : \n");
	for(int i = 2 ; i <= MAX ; i++)
	{
		if(list[i] == 'T')
			printf("%d ",i);
	}
	printf("\n");

	return 0;


}



