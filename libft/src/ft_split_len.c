#include "libft.h"

//very simple, gets the size of the strings between the delimeters.
size_t ft_split_len(const char *str,char c)
{
    size_t	x;
	size_t	len;

	x = 0;
	len = 0;
	while (str[x] == c)
		x += 1;
	while (str[x] != c && str[x++])
		len += 1;
	return (len);
}
