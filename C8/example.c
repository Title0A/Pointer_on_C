#include <stdio.h>
#include <string.h>
int func2(int mat[][5],int (*mat2)[5])
{
	int (*p)[5] = mat;
	int *pi  = &mat[0][0];
	int *pi2 = mat2[0];
	int i;
	for(i = 1;i<16;i++)
	{
		printf("%3d ",*pi++);
		if((i%5 == 0)&&(i != 0))
			printf("\n");
	}
	for(i = 1;i<16;i++)
	{
		printf("%3d ",*pi2++);
		if((i%5 == 0)&&(i != 0))
			printf("\n");			
	}
	return 1;


}
void array(void){
	//��ʼ����ά����
	int matrix[][5] = {
			{00,01,02,03,04},
			{10,11,12,13,14},
			{20,21,22,23,24}
	};
	//������һ��keyword���飬�����Ԫ����ָ���ַ�����ָ��,ָ������
	char const *keyword[] = {
		"do",
		"for",
		"if",
		"register",
		"return",
		"switch",
		"while",
		NULL
	};

	//��ʼ��ָ��ָ��
	int (*p)[] = matrix;/*�����ָ�����Ԫ�أ�������������
						**��ĳ���������������͵�ָ��ִ��ָ������ʱ�
						**����ֵ�����ݿ�����ĳ��Ƚ��е���
						**Ҳ������0���
						*/
	int (*p0)[5] = matrix; //���з��ʶ�ά����
	int      *p1 = &matrix[0][0];
	int      *p2 = matrix[0];
	
	char const **str = keyword;
	unsigned int value;
	int size = sizeof(keyword)/sizeof(keyword[0]);
	
	
	printf("**p  : %d\n",   **p);
	printf("**p0  :%d\n",  **p0);
	printf("**++p0:%d\n",**++p0);
	printf("*p1   :%d\n",   *p1);
	printf("*++p1 :%d\n", *++p1);
	printf("*p2   :%d\n",   *p2);
	printf("*++p2 :%d\n", *++p2);
	func2(matrix,matrix);
	
	printf("*str :%s\n",*str);
	printf("*str :%s\n,sizeof keyword :%d\n",*++str,(sizeof(keyword)/sizeof(keyword[0])));
	value = lookup_keyword("if",keyword,size);
	printf("lookup_keyword : %d\n",value);


}
int lookup_keyword(char const * desired_word, char const *keyword_table[],int const size )
{
	char const **kwp;

	/*
	**���ڱ��е�ÿ������...
	*/
	for( kwp = keyword_table;*kwp != NULL ; kwp++)
	{
		if(strcmp( desired_word ,*kwp) == 0)
			return kwp - keyword_table;
	}
	return -1;



}



