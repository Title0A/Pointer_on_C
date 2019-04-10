#include <stdio.h>
#define INPUT_MAX  100
char *transform(char *string);

int main()
{
	
	char str[INPUT_MAX];
	gets(str);
	printf("transform.c---------------\n");
	printf("src       is : %s\n",str);
	printf("transform is : %s\n",transform(str));
	return 0;


}
