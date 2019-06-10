#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "example.h"
//#define malloc    do_not_call_malloc_directly 
#define MALLOC(num,type)  (type *)alloc(num *sizeof(type))  
#define EXIT_FALLURE 0
#define EXIT_STCCESS 1
extern void *alloc(size_t size);

p_node head ;

void *alloc(size_t size)
{
	void *new_mem;

	new_mem = malloc( size );
	
	if(new_mem == NULL)
	{
		printf("Out of memory!\n");
		exit(1);
	}
	return new_mem;


}


void practice_one(void)
{
#if 0

	int *p;
	int i;
	int *pi;
	p = malloc(100*sizeof(int));
	if(p == NULL)
	{
		printf("Out of memory\n");
		exit(1);
	}
	else
	{
		pi = p;
		for(i = 0;i<100;i++)
		{
			*pi++ = i;
			printf("pi[%d] = %d\n",i,*(pi-1));
			
		}

	}

#else

	int *new_memory;
	new_memory = MALLOC(25,int);



#endif
}

int compare_integer(void const *a,void const *b)
{

	register int const *pa = a;
	register int const *pb = b;

	return *pa > *pb ? 1: *pa < *pb ? -1 :0;
}

int sort(void)
{
	int *array;
	int n_values;
	int i;

	printf("How many values are there?\n");
	if(scanf("%d",&n_values) != 1 || n_values <= 0)
	{
		printf("illegal number of value. \n");
		exit(EXIT_FALLURE);
	}

	//分配内存，用于存储这些值

	array = malloc(n_values * sizeof(int));
	if(array == NULL)
	{
		printf("Can't get memory for that many value.\n");
		exit(EXIT_FALLURE);
	}

	//读取这些数值
	for(i = 0; i< n_values; i += 1)
	{
		printf("array[%d]:",i);
		if(scanf("%d",array + i ) != 1)
		{
			printf("Error reading value #%d\n",i);
			free(array);
			exit(EXIT_FALLURE);
		}
	}
	//对这些数值排序

	qsort(array,n_values,sizeof(int),compare_integer);

	for(i = 0;i<n_values;i += 1 )
		printf("%d ",array[i]);
	printf("\n");

	free(array);
	return EXIT_STCCESS;
	

}
char *strdup(char const *string)
{
	char *new_string;

	/*
	*请求足够长度的内存，用于储存字符串和它的结尾NULL字符
	*/
	new_string = malloc(strlen(string) + 1);

	if(new_string == NULL)
		exit(EXIT_FALLURE);
	else
		strcpy(new_string,string);

	return new_string;

}

/*
**用于创建装配件存货记录的函数
*/
Invrec *creat_subassy_record(int n_parts)
{
	Invrec *new_rec;
	
	/*
	**试图为Invrec部分分配内存
	*/
	new_rec = malloc(sizeof(Invrec));
	if(new_rec != NULL)
	{
		new_rec->info.subassy = malloc(sizeof(Subassyinfo));
		if(new_rec->info.subassy != NULL)
		{
			new_rec->info.subassy->SUB = malloc(n_parts *sizeof(SUBASSYPART));
			if(new_rec->info.subassy->SUB != NULL)
			{
				new_rec->type = SUBASSY;
				new_rec->info.subassy->n_parts = n_parts;
				return new_rec;
			}
			free(new_rec->info.subassy);
		}
		free(new_rec);
	}

	return NULL;

}

void discard_inventory_record(Invrec *record)
{
	switch(record->type)
	{
		case SUBASSY:
			free(record->info.subassy->SUB);
			free(record->info.subassy);
			break;
		case PART:
			free(record->info.part);
			break;
			

	}
	free(record);


}
/*
void creat_node(int n_value,int value)
{
	p_node new_node;
	
	new_node = malloc(sizeof(node));
	if(new_node != NULL)
	{
			
			new_node->i = value;
		
			printf("sizeof node :%d,sizeof p_node :%d,sizeof new_node :%d\n",sizeof(node),sizeof(p_node),sizeof(new_node));
	}
	else
	{
		printf("faile to malloc\n");
		exit(EXIT_FALLURE);
	}

}
*/




