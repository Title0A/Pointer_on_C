#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_INPUT   1000
#define MAX_COLS    20

void rearrange(char *output ,char const *input ,int n_columns ,int const columns[]);
int read_colum_numbers(int colums[],int max);

int main(void){

	int n_columns ; 
	int columns[MAX_COLS];
	char input[MAX_INPUT];
	char output[MAX_INPUT];

	n_columns = read_colum_numbers(columns,MAX_COLS);

	while(gets(input) != NULL)
	{
		printf("Original input : %s\n",input);
		rearrange(output,input,n_columns,columns);
		printf("Rearrange line : %s\n",output);
		

	}
	return EXIT_SUCCESS;



}

//读取列标号，如果超出规定范围则不予理会
int read_colum_numbers(int colums[],int max)
{
	int num = 0;
	int ch;

	while(num < max && scanf("%d",&colums[num])== 1 && colums[num] >= 0)
		num += 1;
	
	//确认已读取的标号为偶数个，因为它们是以成对形式出现的
	if(num % 2 != 0)
	{
		puts("Last column number is not paired.");
		exit(EXIT_FAILURE);
	}
	
	//丢弃该行中包含最后一个数字的那一部分
	while((ch = getchar()) != EOF && ch != '\n')
		;
	return num;
}

//处理输入行，将指定的字符连接在一起
void rearrange(char *output ,char const *input ,int n_columns ,int const columns[])
{
	int col;          //columns数组下标
	int output_col;   //输出列计数器
	int len;          //输出行长度

	len = strlen(input);
	output_col = 0;

	for(col = 0 ;col < n_columns ;col += 2)
	{
		int nchars = columns[col + 1] - columns[col] + 1;

		// 如果输入行结束或输出行数组已满，就结束任务
		if(columns[col] >= len || output_col == MAX_INPUT -1)
			break;
		if(output_col + nchars > MAX_INPUT -1)
			nchars = MAX_INPUT - output_col - 1;
		//复制相关数据
		strncpy(output + output_col, input + columns[col],nchars);
		output_col += nchars;

	}
	output[output_col] = '\0';




}

