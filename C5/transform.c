//ת���Ҳ��ı�Դ��������
char *transform(const char  *string)
{
	int i;
	static char p[1000];
	/*
	**����Ϊ��̬����,��Ϊ�������ص�ַ���ǲ���ȫ��
	**���������󣬺����������ڴ涼����ͷţ������ַ�������ó���Ҳ�����õ��ᱻ�޸�
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
	**����Ϊ��̬����,��Ϊ�������ص�ַ���ǲ���ȫ��
	**���������󣬺����������ڴ涼����ͷţ������ַ�������ó���Ҳ�����õ��ᱻ�޸�
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