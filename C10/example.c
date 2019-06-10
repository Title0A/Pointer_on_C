
#include <stdio.h>

#define PRODUCT_SIZE 20

typedef struct Transaction{

		char product[PRODUCT_SIZE];
		int quantity;
		float unit_price;
		float total_amount;
		struct Transaction *pi;

	}Transaction;


void practice_one(unsigned int test )
{

	int size;
	int *p;
	char *c;
	int i;
	
	typedef struct{
		int a;
		short b[2];
	}Ex2;
	typedef struct Ex{
		int a;
		char b[3];
		Ex2 c;
		struct Ex *d;
		
	}Ex;

	
	Ex x = {10,"Hi",{5,{-1,25}},0};
	Ex *px = &x;
	Ex e ;
	Ex y ;

	e = *px;
	//p =(int *)px;
	p = &px->a; //px->a是一个整型值
	c = px->b;//px->b是一个指针常量，因为b为指针常量
	
	size = sizeof(x);
	x.d = &y;

	y.a= 15;
	printf("unsigned int test :d\n",test);

}

void print_receipt(Transaction const *trans)
{
#if 0
	printf("%s\n",trans.product);
	printf("%d @ %.2f total %.2f\n",trans.quantity,trans.unit_price,trans.total_amount);

#else 

	
	printf("%s\n",trans->product);
	printf("%d @ %.2f total %.2f\n",trans->quantity,trans->unit_price,trans->total_amount);


#endif
}
void  compute_total_amount(Transaction *trans)
{
	
	trans->total_amount = trans->quantity * trans->unit_price;

}
void practice_two(void)
{
	char str[100] ;
	Transaction current_trans = {"xxxx-xxx",100,1.23,2.34,0};
	Transaction current_trans2 = {"xxxx-xxx",100,1.23,2.34,0};
	union{
		float f;
		int i;
	}fi;
	
	//current_trans.pi = &current_trans2;

	fi.f = 3.1415;
	print_receipt(&current_trans);
	compute_total_amount(&current_trans);
	print_receipt(&current_trans);
	printf("union fi.i: %f\n",fi.f);


}

int example(void )
{
	
	
	typedef struct test{

		int *i;
		char *p;
		unsigned int *t;
		char c;

	}test,*p_test;

	int init_i = 15;
	char *init_p  = "test";
	unsigned int init_t = 13;

	test test_one = {

		.i = &init_i,
		.p = init_p,
		.t = &init_t,
		.c = 'A',

	};//结构体初始化
	printf("test_one : *i :%d,*p : %s,*t :%d,c: %c\n",*test_one.i,test_one.p,*test_one.t,test_one.c);

}
#if 0
struct practice_controller C10_practice = {
	.practice_one = practice_one,
	.practice_two = practice_two,
};

#endif

