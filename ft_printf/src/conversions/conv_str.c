#include "libprintf.h"

int		conv_str(va_list ap, t_arg *arg, char *f)
{
	char	*s;

	s = va_arg(ap, char *);
	if (arg->precision < 0)
		arg->precision *= -1;
	ft_putstr_fd(f, arg->fd);
	if (s == NULL)
		return (ft_printf_putstr("(null)", arg));
	return (ft_printf_putstr(s, arg));
}