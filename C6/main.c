#include <stdio.h>

int del_substr(char * str,char const *substr);



void  reverse_string(char *string);


char *find_char(char const *source, char const *chars);
int Eratosthenes(void );


int main()
{
	char source[] = "ABCDCDEFCDEGHIJ";
	char *chars = "XRCQEF";
	char *substr = "CDE";
	int i;
	printf("*find char.c------------------------\n");
	printf("source string : %s\nchars  string : %s\nreturn        : %c\n",\
						source,              chars,*find_char(source,chars));
	printf("del_substr.c------------------------\n");
	i = del_substr(source,substr);
	printf("source string %s\nsubchar string %s\n,return value %d\n",source,substr,i);
	printf("reverse_string.c------------------------\n");
	printf("source string :%s ",source);
	reverse_string(source);
	printf("reverse_string :%s\n",source);

	printf("Eratosthenes.c------------------------\n");
	Eratosthenes();
	return 0;
}
