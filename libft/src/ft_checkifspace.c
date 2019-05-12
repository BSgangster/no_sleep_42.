#include "libft.h"

//very simple helper function. Just checks if the current character we're at is any space, newline, tab and a bunch of other white space stuff
int		ft_checkifspace(int character)
{
	if (character == '\v' || character == '\n' || character == '\t' || character == '\f' || character == ' ' \
		|| character == '\r')
    return (1);
	return (0);
}
