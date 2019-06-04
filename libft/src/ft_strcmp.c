
int    ft_strcmp(const char *s1,const char *s2)
{
	int	i;
	unsigned char	*us1;
	unsigned char	*us2;

	i = 0;
	us1 = (unsigned char *)s1;
	us2 = (unsigned char *)s2;
	while(us1[i] != '\0' && us2[i] !='\0')
	{
		if(us1[i] != us2[i]) //if the current character we're on isn't equal to the character we're comparing to
			return(us1[i] - us2[i]);//subtract the character with the character we're comparing to using their ascii values
        	i++; //incrementing the position we're on ..
	}
	return (us1[i] - us2[i]);
}
