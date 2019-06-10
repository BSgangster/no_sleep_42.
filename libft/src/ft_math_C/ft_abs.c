#include "libft.h"
#include "ft_math_C.h"

long	ft_abs(long x)
{
	if(x < 0)
		return (x * -1);
	return (x);
}
