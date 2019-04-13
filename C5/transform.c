//转换且不改变源数组内容
char *transform(const char  *string)
{
	int i;
	static char p[1000];
	/*
	**声明为静态变量,因为函数返回地址都是不安全的
	**函数结束后，函数变量的内存都会变释放，这个地址其他运用程序也可以用到会被修改
	*/

	for(i = 0 ; string[i];i++)
	{
		p[i] = string[i];
	}
	p[i] = '\0';

	for(i = 0; p[i] ; i++ )
	{
		if((p[i] >= 'A')&&(p[i] <= 'Z'))
			p[i] = (p[i] - 'A' +'a') ;
		else
			;
	}
	return p;
}

char *transform2(const char * string)
{
	int i;
	static char p[1000];
	/*
	**声明为静态变量,因为函数返回地址都是不安全的
	**函数结束后，函数变量的内存都会变释放，这个地址其他运用程序也可以用到会被修改
	*/

	for(i = 0 ; string[i];i++)
	{
		p[i] = string[i];
	}
	p[i] = '\0';
	
	for(i = 0;p[i];i++)
	{
		if(((p[i] >= 'A')&&(p[i] <= 'Z'))||\
			((p[i]>='a') &&( p[i]<='z')))
			p[i] += 3;
		else
			;
	}
	return p;

}