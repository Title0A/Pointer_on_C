#include <stdio.h>
#include <string.h>


void written_amount(unsigned int amount ,char *buffer)
{

	
	/*
	**把amount 表示的值转换为单词形式，并存储到buffer中
	*/
	unsigned int three_B ;  //十进制的每三位一读
	unsigned int hundred_b;//百位
	unsigned int lsb_b;    //十位、个位
	unsigned int vaule[100];
	int i = 0;
	
	char *table[] = {"zero ",   "one ",   "two ",   "three ",    "four ",   "five ",     "six ",    "seven ",   "eight ",    "nine ",\
				      "ten ","eleven ","twelve ","thirteen ","fourteen ","fifteen ","sixtenen ","seventeen ","eignteen ","nineteen ",\
				                     "twenty ",  "thirty ",   "forty ",  "fifty ",   "sixty ",  "seventy ",  "eighty ",  "ninety ",\
				                     "hundred ","thousand ","million ","billion "};

	printf("amount : %d\n",amount);
	/*将amount 的值从低到高每三个数字存到value中*/
	do
	{
		vaule[i++] = amount % 1000;
		amount = amount/1000;
	}while(amount);   
	
	while(i--)	
	{
		three_B = vaule[i];
		hundred_b = three_B /100;
		lsb_b = three_B % 100;
		if(hundred_b != 0)
		{	
			strcat(buffer,table[hundred_b]);  //选择百分位值
			strcat(buffer,table[28]);	     //后接 hundred单词
		}
		else 
			;
		if((lsb_b <= 20)&&(lsb_b != 0))  
		{
			strcat(buffer,table[lsb_b]);    //选择低两位对应的单词
		}
		else
		{
			strcat(buffer,table[lsb_b/10 + 18]);
			lsb_b= lsb_b % 10;
			if(lsb_b != 0)
			{
				strcat(buffer,table[lsb_b]);
			}
		}
		if(i != 0)
		{
			strcat(buffer,table[i+28]);
		}
		else
			;

	}
	
   printf("buffer : %s\n",buffer);

}
