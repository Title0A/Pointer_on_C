#include <stdio.h>
#include <string.h>


void written_amount(unsigned int amount ,char *buffer)
{

	
	/*
	**��amount ��ʾ��ֵת��Ϊ������ʽ�����洢��buffer��
	*/
	unsigned int three_B ;  //ʮ���Ƶ�ÿ��λһ��
	unsigned int hundred_b;//��λ
	unsigned int lsb_b;    //ʮλ����λ
	unsigned int vaule[100];
	int i = 0;
	
	char *table[] = {"zero ",   "one ",   "two ",   "three ",    "four ",   "five ",     "six ",    "seven ",   "eight ",    "nine ",\
				      "ten ","eleven ","twelve ","thirteen ","fourteen ","fifteen ","sixtenen ","seventeen ","eignteen ","nineteen ",\
				                     "twenty ",  "thirty ",   "forty ",  "fifty ",   "sixty ",  "seventy ",  "eighty ",  "ninety ",\
				                     "hundred ","thousand ","million ","billion "};

	printf("amount : %d\n",amount);
	/*��amount ��ֵ�ӵ͵���ÿ�������ִ浽value��*/
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
			strcat(buffer,table[hundred_b]);  //ѡ��ٷ�λֵ
			strcat(buffer,table[28]);	     //��� hundred����
		}
		else 
			;
		if((lsb_b <= 20)&&(lsb_b != 0))  
		{
			strcat(buffer,table[lsb_b]);    //ѡ�����λ��Ӧ�ĵ���
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
