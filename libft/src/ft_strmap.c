#include "libft.h"
//maps out an array that has function f, applied to every single character in the source array.
char	*ft_strmap(const char *str,char (*f)(char))
{
	size_t	i;
	size_t	len;
	char	*new_str;

	if(!str)
		return (NULL);
	i = 0;
	len = ft_strlen(str);
	new_str = malloc(len * sizeof(char) + 1);
	if(!new_str)
		return (NULL);
	while(i < len)
	{
		new_str[i] = f(str[i]);
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}
