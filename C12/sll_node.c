#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "sll_node.h"

#define TRUE    1
#define FALSE   0


Node *root;
int printf_sll(Node *p_root)
{
	int i = 0;
	do{		
		printf("root->%d :%d\n",i,p_root->value);
		p_root = p_root->link;
		i++;
	}while(p_root->link);
	printf("root->%d :%d\n",i,p_root->value);
	return 0;

}


int creat_ll(int n_value,...)
{
	int i;
	Node *next;
	Node *previous;

	va_list var_arg;	
	va_start(var_arg,n_value);
	
	printf("waiting for creat......\n");
	/*��ָ��ָ��new*/
	next = (Node *)malloc(sizeof(Node));
	root = next;
	
	next->value = va_arg(var_arg,int); //��������б�ĵ�һ��ֵ��
	if(n_value == 1)  //���ֻ��Ҫ���һ���ڵ�
	{
		return 0;
	}
	for(i = 0;i< n_value -1;i++)
	{
		previous = next;
		next = (Node *)malloc(sizeof(Node));
		if(next != NULL)
		{		
			previous->link = next;
			next->value = va_arg(var_arg,int) ;		
		}
	}
	next->link = NULL;
	printf("creat finnsh!\n");
}
#if 0
/*��˳�����*/
int sll_insert(Node *current, int new_value)
{
	Node *previous;
	Node *next;

	

	/*
	**Ѱ����ȷ�Ĳ���λ��,�����ǰ�˳���������,ֱ��������ֵ���ڻ��ߵ���
	*/
	while(current != NULL && current->value < new_value)
	{
		previous = current;
		current = current->link;
	}

	/*
	*Ϊ�½ڵ�����ڴ棬������ֵ���浽�½ڵ��У�����ڴ����ʧ��
	**��������FALSE
	*/
	next = (Node *)malloc(sizeof(Node));
	if(next == NULL)
		return FALSE;
	next->value = new_value;

	next->link = current;
	previous->link = next;

	printf_sll(root);

	return TRUE;
	

}
#else 
int sll_insert(Node **rootp, int new_value)
{
	Node *current;
	Node *previous;
	Node *next;

	current = *rootp;
	previous = NULL;

	while(current != NULL && current->value < new_value)
	{
		previous = current;
		current = current->link;
	}

	/*
	**Ϊ�½ڵ�����ڴ�
	*/
	next = (Node *)malloc(sizeof(Node));
	if(next == NULL)
		return FALSE;
	next->value = new_value;

	next->link = current;
	if(previous == NULL)
		*rootp = next;
	else
		previous->link = next;
	
	printf_sll(*rootp);
	//printf_sll(root);
	return TRUE;

}




#endif

