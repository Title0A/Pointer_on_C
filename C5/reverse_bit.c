
unsigned int revers_bit(unsigned int value)
{
	unsigned int n = 0;
	int i, t;
	t = 8*(sizeof(unsigned int));

	for(i = 0 ; i <t;i++)
	{
		if((value & 1) != 0)
			n |= (1<<(t - i-1));
		else
			n |= (0<<(t - i-1));
		
		value >>= 1;
		
		if(value == 0)
			break;
			
	}

	
	return n;

//注意在调用的时候使用%u而不是%d，%d就是有符号的整型数

}



