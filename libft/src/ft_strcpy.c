//this function copies the string array. And returns the copy array.
char* ft_strcopy(char *dest,const char *src)
{
	//get a variable to store first index of the dest array so that we iterate through it but still have the index address available
	char *start;

	start = dest;

	while(*src != '\0')
	{
		*dest = *src; //making the copy
		dest++;
		src++;
	}
	*dest = '\0';//Adding the null char to end of the string array dest, well all strings end with it. 
	return start;
}
