//#define NULL ((void *)0)
#include <stdio.h>


char *find_char(char const *source, char const *chars)
{
#if 1 //���±����ð�
	int j ;
	if(!(source[0]))
		return NULL;
	else
		;
	for(int i = 0 ; chars[i]; i++)
	{
		for(j = 0 ; source[j]; j++)
		{
			if(chars[i] == source[j])
				return ((char *)&source[j]);
			else 
				;
		}
	}
	return NULL;
	
#else  //��ȫָ���

	char *src =(char *)source;
	char *chr =(char *)chars;
	if(!(*src))
		return NULL;
	else
		;
	
	while(*chr++)
	{
		while(*src++)
		{
			if(*chr == *src)
				return src;
			else
				;
		}
		src =(char *)source; //ָ��Ҫָ��sourceͷ������һ���ж�
		
	}

	return NULL;
		




#endif
	



}





