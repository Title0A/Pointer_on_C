
char *transform(char *string)
{
	int i;

	for(i = 0; string[i] ; i++ )
	{
		if((string[i] >= 'A')&&(string[i] <= 'Z'))
			string[i] = (string[i] - 'A' +'a') ;
		else
			;
	}
	return string;


}
