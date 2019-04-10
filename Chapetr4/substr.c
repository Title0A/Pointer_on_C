#include <stdio.h>
int substr(char dst[],char const src[],int start ,int len)
{
	int i , a_nu ,cp_l;
	char *p = dst;
	char *s = (char *)src;
	while(*s++)
		;
	a_nu =(s - src)/sizeof(src[0]);

	
	printf("sizeof src %d\n",a_nu);
	if((start < a_nu) && (len > 0))
	{
		if(start + len < a_nu)
			cp_l = len;
		else
			cp_l = a_nu - start;
		
		for(i = 0;i<cp_l;i++)
		{
			*p++ = src[i+start];
		}
		*p = '\0';
	}
	else
		*p = '\0';
	printf("src is    :%s\n",src);
	printf("substr is :%s\n",dst);
	printf("sizeof dst %d\n",((p - dst)/sizeof(dst[0])));
	return 0;
	
	

}



