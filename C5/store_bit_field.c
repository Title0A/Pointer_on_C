
int store_bit_field(int original_value , int value_to_store , unsigned starting_bit,unsigned ending_bit)
{
	unsigned int mask ;
	for(int i = 0 ; i <= (starting_bit - ending_bit);i++)
	{
		mask |= (1 << (ending_bit + i));
		
		//clear bit by bit
		original_value &= ~mask;
		
		//store bit by bit
		original_value |=( (value_to_store & 1) << (ending_bit + i));
		value_to_store >>= 1;
		
		//clear mask for next cycle
		mask = 0;

	}
	return original_value;

}
