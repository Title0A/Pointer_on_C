#include <stdio.h>
void practice_one(void);
int sort(void);
char *strdup(char const *string);
void creat_node(void);


void main()
{
	//practice_one();
	char *string = "this is a test";
	

	//sort();
	printf("orgin str :%s,strdup :%s\n",string,strdup(string));
	printf("-----------------------------------------------------\n");
	creat_node();
}
