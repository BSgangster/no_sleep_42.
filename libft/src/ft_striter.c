//applies f, to every char in the string str, changes will obiovusly be saved most likely or not. Depends on how f is constructed.
void	ft_striter(char *str, void (*f)(char *))
{
	int	i;

	i = 0;
	//check if str or f is null values or pointing to null values
	if (str && f)
		//apply f to all char's in str.
		while (str[i])
			f(&str[i++]);
}
