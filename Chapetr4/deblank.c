
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
		{	//当下一个字符还是空格时，后面全体字符向前移动一位
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
