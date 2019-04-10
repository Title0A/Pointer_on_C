
#include "main.h"

#define line_MAX     20
#define row_MAX      1000

int chose_repeat_line(void){

	char input[line_MAX][row_MAX];
	char output[line_MAX][row_MAX];
	int i = 0,j= 1;
	char *p = "Finished!";
	//输入字符串，放入input字符串数组，输入Finished!结束
	while((gets(input[i++]) != NULL )&&((*(input[i-1])) != *p))
		;
	
	//打印输入的字符串
	for(i = 0;*input[i];i++)
	{
		if(i == 0)
			printf("input is :%s\n",input[0]);
		else
			printf("          %s\n",input[i]);
		
	}

	//依次处理每一行字符串
	for(i = 0;*input[i]; i++)
	{
		//判断相邻是否相等?抽出重复的字符串
		if(strcmp(input[i],input[i+1]) == 0)
		{
				//判断重复的字符串与已存在的上一个输出字符串是否相等，
				//不相等写入输出字符串下一行
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
	//判断输出字符串是否为空
	//若为空表明没有重复的字符串
	if((*output[1])== '\0')
		printf("\nno repeat line\n");
	else
	{
		printf("\n");
		for(i = 1;*output[i];i++)
		{
			//输出重复的字符串
			printf("%d repeat line  is : %s\n",i,output[i]);
		}
	}

	return 0;

}



