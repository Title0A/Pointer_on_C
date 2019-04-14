//#define NULL ((void *)0)
#include <stdio.h> //因为C语言各个文件是分开编译的，所以要对不太常用的声明包含头文件，比如NULL指针，要不然会报未声明错误


char *find_char(char const *source, char const *chars)
{
#if 1 //用下标引用版
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
	
#else  //完全指针版

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
		src =(char *)source; //指针要指回source头进行下一次判断
		
	}

	return NULL;
		




#endif
	



}





