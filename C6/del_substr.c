
#include <stdio.h>
#define   Global  0   //�Ƿ����ȫ��ɾ��������ֻɾ��ͷһ�����ϵĲ���
int del_substr(char * str,char const *substr)//һ��Ҫע��str�ַ�����һ���ַ������飬�������ַ��������������޷�����
{
	int i = 0;//��¼substr�ַ����ĸ���
	int j = 0;//��¼substr��str�ַ�����ͬ�ĸ���
	int t = 0; //��¼ɾ���Ĵ���
	char *sub = (char *)substr;
	char *source = (char *)str;
	while(*sub++)
		i++;
	sub = (char *)substr; 
	//�ж�substr�ַ����Ƿ������str��
	while(*source)
	{
		if(*substr == *source)//������ַ�����ͷһ���ַ���str��ĳ���ַ���ȣ���ִ�жԱ�
		{
			str = source;
			while(*sub)
			{
				if(*sub++ == *source++)	
					j++;
				else
				{
					sub = (char *)substr;
					break;
				}
				
			}
			sub = (char *)substr;
			
			//��str�н�substr������ַ������Ƶ�ǰ��
			if(j == i)
			{
				t++;
				char *p = str;
				while(*source)
					*str++ = *source++;
				*str = '\0';
			
#if     !Global 
			return 1;

#else
			source = p;
			j = 0;
#endif 
			}
			else
			{
				source--;
				j=0;
			}
		}
		else
			source++;
	}
	

	return t;

	


}
