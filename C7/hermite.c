#include <stdio.h>



long hermite(int n , int x)
{

#if 0
	if(n <= 0)
		return 1;
	else if (n == 1)
		return 2*x;
	else if (n>=2)
		return (2*x*hermite(n-1,x) - 2*(n-1)*hermite(n-2,x));

#else 
	long resultN1; //储存上上次的结果
	long resultN2;//储存上一次迭代的结果
	long resultN3;//储存每次迭代的最新结果
	int  i = 0;
	
	resultN3 = resultN2 = 1;

	while(n >= 1)
	{
		n -= 1;
		resultN1 = resultN2;
		resultN2 = resultN3;
		resultN3 = 2*x*resultN2 - 2*i*resultN1;
		i++;
	}
	return resultN3;

#endif

	


}
