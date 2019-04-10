
#include "main.h"
int judge_tri(int a , int b, int c)
{
	if((a + b>c) && (a+c>b)&&(b+c>a))
	{
		if(a == b)
		{
			if(b == c)
				printf("this triangle is equilateral triangle\n");
			else
				printf("this triangle is isosceles triangle\n");
		}
		else if(b == c)
			printf("this triangle is isosceles triangle\n");
		else
			printf("this triangle is scalene triangle\n");
	}
	else
		printf("this three number can't be a triangle\n");

	return 0;




}

