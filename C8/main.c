#include <stdio.h>


void array(void);
int lookup_keyword(char const * const desired_word, char const *keyword_table[],int const size );
int practice_one(void );
float single_tax(float income);


int main()
{

	float income = 300000;

	
	printf("arry------------------------------------------------\n");
	array();
	printf("practice_one----------------------------------------\n");
	practice_one();
	printf("single_tax------------------------------------------\n");
	//printf("entry your income:");
	//scanf("%f",&income);
	single_tax(income);

	return 0;


}
