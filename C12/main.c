#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#include "sll_node.h"
int creat_ll(int n_value,...);
int printf_sll(Node *p_root);
//int sll_insert(Node *current, int new_value);
int sll_insert(Node **rootp, int new_value);

extern Node *root;
 
void main()
{
	int i;

	printf("creat_ll----------------------------------------------\n");
	creat_ll(3,5,10,15);
	printf("square print sll -------------------------------------\n");
	printf_sll(root);	
	printf("sll_insert -------------------------------------------\n");
	
	printf("enter value to insert:");
	scanf("%d",&i);
	sll_insert(&root,i);

}




