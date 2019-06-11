#include "libft.h"

long long	ft_atoi_base(const char *str, size_t base, const char *format)
{
	int		sign;
	long long		val;

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
		val += sign * ((char *)ft_memchr(&format[2], *str, base) - &format[2]);
		++str;
	}
	return (val);
}
