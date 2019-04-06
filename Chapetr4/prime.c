#include "main.h"
#include "prime.h"


void prime(int MAX){
	int p ;
	int nu = 0; 
	for(int i = 1;i<= MAX;i++)
	{
		p = 0;
		for(int j = 1 ; j <= i ; j++)
		{
			if(i % j == 0)
				p++;
		}
		if(p == 2)
		{
			nu++;
			printf("this is %d prime :%d\n",nu,i);
		}
	}

}



