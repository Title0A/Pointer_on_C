
#include "main.h"
#define  val   0.00000 //阈值，根据需要设置差值体现精度
#define   C   1

double square(int i){
	/*第二题，平方根函数*/
	double a1= 1;
	double a2,p;
	int n = i;
	a2 = a1;
	int nu = 0; 
#if   C
	do
	{
		//进行公式运算
		nu++;
		a1 = a2;
		a2 = (a1 + n/a1)/2;
		printf("this is %d loop,result%d  is :%lf\n",nu,nu,a2);
		//判断a1/a2大小并计算出差值
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



