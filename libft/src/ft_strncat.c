//Well i think this function just concatenates the n amount chars from the source, correct me if i'm wrong too lazy to check
char *strncat(char *dest, const char *src, size_t n)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;

	while(dest[i])
	{
		i++;
	}

	while((n > 0) && src[j]) //remember we want n amount characters
	{
		dest[i + j] = src[j]; //start adding things to the end of the destination string.  
		j++;
		n--;
	}
	dest[i + j] = '\0'; //ending the string
	return dest;
}
