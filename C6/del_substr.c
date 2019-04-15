
#include <stdio.h>
#define   Global  0   //是否进行全局删除，或者只删除头一个符合的参数
int del_substr(char * str,char const *substr)//一定要注意str字符串是一个字符串数组，而不是字符串常量，否则无法更改
{
	int i = 0;//记录substr字符串的个数
	int j = 0;//记录substr在str字符串相同的个数
	int t = 0; //记录删除的次数
	char *sub = (char *)substr;
	char *source = (char *)str;
	while(*sub++)
		i++;
	sub = (char *)substr; 
	//判断substr字符串是否出现在str中
	while(*source)
	{
		if(*substr == *source)//如果子字符串的头一个字符与str的某个字符相等，就执行对比
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
			
			//在str中将substr后面的字符串复制到前面
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
