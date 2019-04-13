#include <stdio.h>
#define INPUT_MAX  100

char *transform(char *string);
char *transform2(char * string);
unsigned int revers_bit(unsigned int value);
int store_bit_field(int original_value , int value_to_store , unsigned int starting_bit,unsigned int ending_bit);


int main()
{
	int i = 0;
	int ch ;
	char str[INPUT_MAX] = "This is a test OPQ12332" ;
	
	printf("transform.c---------------\n");
	printf("Please input a string\n:");
	//scanf("%s",str);
	printf("src        is : %s\n",str);
	printf("transform  is : %s\n",transform(str));
	printf("transform2 is : %s\n",transform2(str));
	printf("reverse_bit.c---------------\n");
	printf("reverse bit %d :%u\n",25,revers_bit(25));
#if 0
	while((ch = getchar()) != EOF)
	{
		if(ch >= 'A'&& ch <= 'Z' )
			ch += 'a' - 'A';
		putchar(ch);
	}
#endif
	printf("store_bit_field.c-----------------------\n");
	printf("store_bit_field original_value : 0x%x \n\
		value_to_store : 0x%x \n\
		starting_bit   : %d   \n\
		ending_bit     : %d   \n\
		reslute is     : 0x%x \n\n",0xffff,0x123,15,4,store_bit_field(0xffff,0x123,15,4));
	printf("store_bit_field original_value : 0x%x \n\
		value_to_store : 0x%x \n\
		starting_bit   : %d   \n\
		ending_bit     : %d   \n\
		reslute is     : 0x%x \n",0xffff,0x123,13,9,store_bit_field(0xffff,0x123,13,9));


	
	return 0;


}
