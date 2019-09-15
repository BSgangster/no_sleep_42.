/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icarolus <icarolus@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 21:10:46 by icarolus          #+#    #+#             */
/*   Updated: 2019/09/15 20:00:03 by icarolus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

static int		ft_check_spec(char *s, char *f, t_arg arg)
{
	int z;

	z = 0;
	if (*s != 0)
	{
		ft_putstr_fd(f, arg.fd);
		z = ft_printf_putchr(*s, &arg);
	}
	else
		ft_putstr_fd(f, arg.fd);
	return (z);
}

static t_arg	ft_check_flags_format(char **s, va_list ap)
{
	t_arg arg;

	arg = ft_printf_new_arg(&arg);
	s[0]++;
	while (**s)
	{
		if (ft_strchr(g_conv, **s) || ft_isdigit(**s))
		{
			*s = ft_check_flags(*s, &arg);
			*s = ft_check_field_with(ap, *s, &arg);
			*s = ft_check_precision(ap, *s, &arg);
			*s = ft_check_length(*s, &arg);
		}
		else
			break ;
	}
	return (arg);
}

static char		*ft_printf_flags(va_list ap, char *s, int *cnt, char *f)
{
	t_arg	arg;
	int		z;

	arg = ft_check_flags_format(&s, ap);
	if (*s == 'i' || *s == 'd' || *s == 'D')
		z = conv_int(ap, &arg, *s, f);
	else if (*s == 'u' || *s == 'U' || *s == 'x' ||
			*s == 'X' || *s == 'o' || *s == 'O' || *s == 'b')
		z = conv_unsigned_int(ap, &arg, *s, f);
	else if (*s == 'p')
		z = conv_void(ap, &arg, *s, f);
	else if (*s == 'c' && arg.lenght != 'l')
		z = conv_char(ap, &arg, f);
	else if (*s == 'C' || (*s == 'c' && arg.lenght == 'l'))
		z = conv_utf_8(ap, &arg, f);
	else if (*s == 's' && arg.lenght != 'l')
		z = conv_str(ap, &arg, f);
	else if (*s == 'S' || (*s == 's' && arg.lenght == 'l'))
		z = conv_str_utf_8(ap, &arg, f);
	else
		z = ft_check_spec_case(s, f, arg);
	if (z == -1)
		return (NULL);
	*cnt += z;
	return (s + 1);
}

int				ft_printf(const char *restrict format, ...)
{
	char	*tmp;
	char	*f;
	va_list	ap;
	int		cnt;

	cnt = 0;
	f = NULL;
	tmp = (char *)format;
	va_start(ap, format);
	while (*tmp)
	{
		if ((tmp = ft_pf_copy_until(tmp, &cnt, &f)) == NULL)
			break ;
		if (*tmp == '%')
		{
			if ((tmp = ft_printf_flags(ap, tmp, &cnt, f)) == NULL)
				return (-1);
		}
		else
			ft_putstr(f);
		ft_strdel(&f);
	}
	va_end(ap);
	return (cnt);
}
