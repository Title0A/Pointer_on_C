
#include <stdio.h>
extern int a_to_int_str[] ;   //������main���������ȫ�ֱ��������ڴ����ַ�������ת�������

int *ascii_to_integer(char *string)
{
	char *s = string;
	       
	int i = 0;			
	
	while(*string)
	{
		
		if((*string >= '0')&&(*string <= '9'))
		{
			s = string;
			while((*s >= '0')&&(*s <= '9'))
				a_to_int_str[i] = 10*a_to_int_str[i] + (*s++ - '0');
			i++;
			string = s;
		}
		else
			string++;
		
	}
	return a_to_int_str;
	//return 0;


}



