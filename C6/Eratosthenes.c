#include <stdio.h>
#define MAX 1000
int Eratosthenes(void )
{
	//�Ƚ����������ʼ��
	char list[MAX];
	for(int i = 0 ;i < MAX;i++)
		list[i] = 'T';
	int prime = 2;  //��Ϊÿ������ѭ�������
	//���������б����в���������������Ӧ��λ��Ϊ'F'
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



