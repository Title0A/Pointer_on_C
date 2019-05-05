 
#include <stdio.h>


int practice_one(void )
{

#if  1
	static unsigned char char_value[3][6][4][5] = {

			{},// (0,,,)
			{
				{}, //(1,0,,)
				{
					{},//(1,1,0,)
					{0,' '},//(1,1,1,)
					
				}, //(1,1,,)
				{
					{},//(1,2,0,)
					{},//(1,2,1,)
					{0,0,0,'A'},//(1,2,2,)
					{0,0,0,0,'x'}//(1,2,3,)
				},//(1,2,,)
				{
					{},//(1,3,0,)
					{},//(1,3,1,)
					{0,0,0xf3},//(1,3,2,)
					{}//(1,3,3,)
				
				},//(1,3,,)
				{
					{},//(1,4,0,)
					{},//(1,4,1,)
					{0,0,0,'\n'}//(1,4,2,)

				}//(1,4,,)


			},// (1,,,)
			{
				{},//(2,0,,)
				{
					{},//(2,1,0,)
					{0,0,0320}//(2,1,1,)
				},//(2,1,,)
				{
					{},//(2,2,0,)
					{0,'0'},//(2,2,1,)
					{0,0,'\''},//(2,2,2,)
					{0,'\121'}//(2,2,3,)


				},//(2,2,,)
				{},//(2,3,,)
				{
					{},//(2,4,0,)
					{},//(2,4,1,)
					{},//(2,4,2,)
					{0,0,'3',3}//(2,4,3,)

				},//(2,4,,)
				{
					{}, //(2,5,0,)
					{}, //(2,5,1,)
					{}, //(2,5,2,)
					{0,0,0,0,125} //(2,5,3,)
				}//(2,5,,)
			}// (2,,,)

	};
	printf("char_value[1][2][2][3] : 0x%x\n",char_value[1][2][2][3]);
	printf("char_value[2][4][3][2] : 0x%x\n",char_value[2][4][3][2]);
	printf("char_value[2][4][3][3] : 0x%x\n",char_value[2][4][3][3]);
	printf("char_value[2][1][1][2] : 0x%x\n",char_value[2][1][1][2]);
	
	printf("char_value[1][1][1][1] : 0x%x\n",char_value[1][1][1][1]);
	printf("char_value[1][4][2][3] : 0x%x\n",char_value[1][4][2][3]);
	printf("char_value[2][5][3][4] : 0x%x\n",char_value[2][5][3][4]);
	printf("char_value[2][2][2][2] : 0x%x\n",char_value[2][2][2][2]);
	
	printf("char_value[1][3][2][2] : 0x%x\n",char_value[1][3][2][2]);
	printf("char_value[2][2][3][1] : 0x%x\n",char_value[2][2][3][1]);
	printf("char_value[1][2][3][4] : 0x%x\n",char_value[1][2][3][4]);
	printf("char_value[2][2][1][1] : 0x%x\n",char_value[2][2][1][1]);
	

	return 0;


#else

	static char str[3] = {0,'A'};



#endif
}
float single_tax(float income)
{

	float tax = 0; //税收
	int i = 0;
	int size ;    
	
	//税收范围与税率表
	float array_tax[][2] = {
			{23350 ,0.15},
			{56550 ,0.28},
			{117950,0.31},
			{256500,0.36},
			{0,0.396}
	};


	
	size = sizeof(array_tax)/sizeof(array_tax[0]);
	while((income > *array_tax[i])&&(i < size - 1))
			i++;
	*array_tax[i] = income;


	
	do
	{
		if(i == 0)
			tax += array_tax[i][0] * array_tax[i][1];
		else
			tax += (*array_tax[i] - *array_tax[i-1])*array_tax[i][1];
	}while(i--);
	printf("income :%f\ntax :%f\n",income,tax);
	return tax;


	
}



