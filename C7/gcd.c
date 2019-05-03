#include  <stdio.h>

int gcd(int M, int N)
{
	
	if((N<0)||(M<0))
	{	
		printf("please confirm input nu both > 0\n");
		return 0;
	}
	else
	{
		if(M%N == 0)
			return N;
		else
			return gcd(N,M%N);
	}
	


}

