#include "square.h"
#include "main.h"
double square(int i){
	/*�ڶ��⣬ƽ��������*/
	double a1= 1;
	double a2,p;
	int n = i;
	a2 = a1;
	int nu = 0; 
#if   C
	do
	{
		//���й�ʽ����
		nu++;
		a1 = a2;
		a2 = (a1 + n/a1)/2;
		printf("this is %d loop,result%d  is :%lf\n",nu,nu,a2);
		//�ж�a1/a2��С���������ֵ
		if(a2 > a1)
			p = a2 - a1;
		else 
			p = a1 - a2;
		
	}while(p > val);
	return a2;
#else
	a2 = (a1 + n/a1)/2;
 	for(nu = 1 ;p >= val;a1 = a2)
		
	{
		a2 = (a1 + n/a1)/2;
		printf("this is %d loop,result%d  is :%lf\n",nu,nu,a2);
		nu++;
		if(a2 > a1)
			p = a2 - a1;
		else 
			p = a1 - a2;

	}
	return a2;
#endif
}



