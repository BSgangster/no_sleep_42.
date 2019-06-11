#include "libft.h"

long long int	ft_atoi_base(const char *str, size_t base, const char *format)
{
	int		sign;
	long long int val;
	sign = 1;
	val = 0;
	while (ft_checkifspace(*str))
		++str;
	if (*str == format[0] || *str == format[1])
	{
		if (*str == format[0])
			sign = -1;
		++str;
	}
	while (ft_memchr(&format[2], *str, base) && *str)
	{
		val *= base;
		val += ((char *)ft_memchr(&format[2], *str, base) - &format[2]);
		++str;
	}
	if (val < -2147483648)
		return (0);
	if(val < -9223372036854775807)
		return (0);
	if(val >= 9223372036854775807)
		return (-1);
	return (sign * val);
}
