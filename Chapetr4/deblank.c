
#include <stdio.h>


int deblank(char string[])
{
	char *p = string;
	int i ,j ,n=0;
	while(*p++)
		;
	int size = ((p - string)/sizeof(string[0]));
	printf("size of string is %d\n",size);
	p = string;
	
	for(i = 0 ; i<size ; )
	{
		if(string[i] == ' ')
		{	//����һ���ַ����ǿո�ʱ������ȫ���ַ���ǰ�ƶ�һλ
			if(string[i+1] == ' ' )
			{
					for(j = i; j < size;j++ )
					{
						p[j] = p[j+1];
						
					}
					size--;
					n++;
			}
			else
			{
				i++;
			}
		}
		else 
			i++;
		
	}
	printf("after deblank : %s\n ",string);
	printf("deblank nu is:%d\n ",n);
	return 0;



}
