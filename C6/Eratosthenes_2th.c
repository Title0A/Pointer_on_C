#include <stdio.h>
#define MAX 10000
//奇数对应，每个下标对应一个奇数,实际数n = 2i+1
int Eratosthenes_2th(void )
{
	//先将整个数组初始化
	char list[MAX];
	for(int i = 0 ;i < MAX;i++)
		list[i] = 'T';
	int i = 1 ; //作为数组下标
	int n  ;//数组标号对应的数
	long int t ;//调整j,作为n的适合倍数
	printf("sizeof int :%d,sizeof long int :%d\n",sizeof(int),sizeof(long int));
	//遍历整个列表将所有不是质数的整数对应的位设为'F'
	while((MAX - i)>0)
	{
		if(list[i] == 'T')
		{
			n = 2*i+1; //每个i实际对应的数
			//n的非偶数倍数要'F',n非偶数倍对应的标号为(j*n - 1)/2
			for(int j = 3,t = 1; (j*n - 1)/2<= MAX;j = 2*t+1)
			{
				list[(j*n - 1)/2]='F';
				t++;
			}
		}
		else
			;
		i++;
	}
	printf("prime : \n");
	for(i = 1 ; i <= MAX ; i++)
	{
		if(list[i] == 'T')
		
			printf("%6ld ",(2*i+1));
		else
			;
		if((i%20 == 0)&&(i >=20 )&&(i <= 1000))//
			printf("\n");
		else if((i%50 == 0))
			printf("\n");
			;
	}
	

	return 0;


}



