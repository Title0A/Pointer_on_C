#include <stdio.h>






char *find_char(char const *source, char const *chars);


int main()
{
	char *source = "ABCDEF";
	char *chars = "XRCQEF";
	printf("*find char.c------------------------\n");
	printf("source string : %s\nchars  string : %s\nreturn        : %c\n",\
						source,              chars,*find_char(source,chars));
	return 0;
}
