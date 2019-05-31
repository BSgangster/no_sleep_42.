#include "libft.h"

//very simple function, just trims out all the whitespaces in the beginning or end of a string.
char	*ft_strtrim(const char *s)
{
	char *newstring;
	size_t newstring_len;
	size_t i;
	size_t x;
	
	x = 0;
	newstring_len = ft_strlen(s);
	if(!s)
	{
		return (NULL);
	}
	//let's get the white spaces infront of the string
	while(ft_iswhitespace(s[i]))
		i++;
	//let's erase the spaces at the end of the string.
	while(ft_iswhitespace(s[newstring_len--]))	
		continue;	
	newstring_len--;
	newstring = malloc(newstring_len * sizeof(char) + 1);
	//let's get the on empty space stuff
	while(s[i] && (i <= newstring_len))
	{
		newstring[x] = s[i];
		x++;
		i++;
	}
	newstring[x] = '\0';
	return (newstring);
}
