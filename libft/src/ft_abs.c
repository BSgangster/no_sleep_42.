#include "libft.h"

//mathematical function to get the absolute value of a long number. Meaning a number that is always positive.
long	ft_abs(long n)
{
	if (n < 0)
		return (-n);
	return (n);
}
