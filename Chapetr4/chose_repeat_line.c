
#include "main.h"

#define line_MAX     20
#define row_MAX      1000

int chose_repeat_line(void){

	char input[line_MAX][row_MAX];
	char output[line_MAX][row_MAX];
	int i = 0,j= 1;
	char *p = "Finished!";
	//�����ַ���������input�ַ������飬����Finished!����
	while((gets(input[i++]) != NULL )&&((*(input[i-1])) != *p))
		;
	
	//��ӡ������ַ���
	for(i = 0;*input[i];i++)
	{
		if(i == 0)
			printf("input is :%s\n",input[0]);
		else
			printf("          %s\n",input[i]);
		
	}

	//���δ���ÿһ���ַ���
	for(i = 0;*input[i]; i++)
	{
		//�ж������Ƿ����?����ظ����ַ���
		if(strcmp(input[i],input[i+1]) == 0)
		{
				//�ж��ظ����ַ������Ѵ��ڵ���һ������ַ����Ƿ���ȣ�
				//�����д������ַ�����һ��
			   if(strcmp(input[i],output[j-1])!= 0)
				{
					strcpy(output[j],input[i]);
					j++;
				}
				else
					;
		}
		else
			;
	}
	//�ж�����ַ����Ƿ�Ϊ��
	//��Ϊ�ձ���û���ظ����ַ���
	if((*output[1])== '\0')
		printf("\nno repeat line\n");
	else
	{
		printf("\n");
		for(i = 1;*output[i];i++)
		{
			//����ظ����ַ���
			printf("%d repeat line  is : %s\n",i,output[i]);
		}
	}

	return 0;

}



