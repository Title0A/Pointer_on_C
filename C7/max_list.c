
#include <stdio.h>
#include <stdarg.h>
int max_list(int value,...)
{
	va_list var_arg;
	int max = value;

	va_start(var_arg,value);
	for(int t = va_arg(var_arg,int);t != -1 ;)
	{
		if( t > max)
			max = t;
		else
			;
		t = va_arg(var_arg,int);
	}
	va_end(var_arg);
	return max;
}
void printf_integer(int i)
{
	printf("%d",i);
}
void printf_float(double f)
{
	printf("%lf",f);
}

int simple_printf(char *s,...)
{
	va_list var_arg;
	char *p = s;
	char *str; //放字符串
	int i;     //放置整形
	double f;  //放置浮点型
	char c;    //放置字符
	
	va_start(var_arg,s);
	while(*p)
	{
		if(*p == '%') //遇到需要转义的字符
		{
			
			switch(*++p)
			{
				case 'd':
					i = va_arg(var_arg,int);
					printf_integer(i);
					break;
				case 'f':
					f = va_arg(var_arg,double);
					printf_float(f);
					break;
				case 'c':
					c = va_arg(var_arg,int); //
					putchar(c);
					break;
				case 's':
					str = va_arg(var_arg,char *);
					while(*str)
					{
						putchar(*str++);
					}
					break;
				default :
					break;		
			}

		}
		else
				putchar(*p);
		p++;

	}
	va_end(var_arg);

}




