#include "libft.h"

//very simple function, just trims out all the whitespaces in the beginning or end of a string.
char	*ft_strtrim(const char *s)
{
	char *newstring;
	size_t newstring_len;
	size_t i;
	size_t x;
	
	x = 0;
	i = 0;
	if(!s)
		return (NULL);
 	//let's get the white spaces infront of the string
	while(ft_iswhitespace(s[i]))
		i++;
		//if the input is only blank then return this
		if(s[i] == '\0')
			return ("");
	//let's erase the spaces at the end of the string
	newstring_len = ft_strlen(s);
	while(ft_iswhitespace(s[--newstring_len]))	
		continue;
	if(!(newstring = ft_strnew((newstring_len - i + 1))))
		return (NULL);
	//let's get the on empty space stuff
	while(i < newstring_len + 1)
	{
		newstring[x] = s[i];
		x++;
		i++;
	}
	newstring[x] = '\0';
	return (newstring);
}
