#include <stdio.h>
#define MAX 10000
//������Ӧ��ÿ���±��Ӧһ������,ʵ����n = 2i+1
int Eratosthenes_2th(void )
{
	//�Ƚ����������ʼ��
	char list[MAX];
	for(int i = 0 ;i < MAX;i++)
		list[i] = 'T';
	int i = 1 ; //��Ϊ�����±�
	int n  ;//�����Ŷ�Ӧ����
	long int t ;//����j,��Ϊn���ʺϱ���
	printf("sizeof int :%d,sizeof long int :%d\n",sizeof(int),sizeof(long int));
	//���������б����в���������������Ӧ��λ��Ϊ'F'
	while((MAX - i)>0)
	{
		if(list[i] == 'T')
		{
			n = 2*i+1; //ÿ��iʵ�ʶ�Ӧ����
			//n�ķ�ż������Ҫ'F',n��ż������Ӧ�ı��Ϊ(j*n - 1)/2
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



