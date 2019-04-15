
#include <stdio.h>

void reverse_string(char *string)
{
	char *str = string;
	char p ;
	while(*str++)
		;
	str--;
	
	while(str-- >= string)
	{
		
		 p = *string;
		 *string = *str;
		 *str = p;
		 string++;
	}
	


}





