/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icarolus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 09:58:47 by icarolus          #+#    #+#             */
/*   Updated: 2019/09/19 19:57:43 by icarolus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printflibr.h"

static int		ft_check_spec_case(char *s, char *f, t_arg arg)
{
	int z;

	z = 0;
	if (*s != 0)
	{
		ft_putstr_fd(f, arg.fd);
		z = ft_printf_putchar(*s, &arg);
	}
	else
		ft_putstr_fd(f, arg.fd);
	return (z);
}

static t_arg	ft_check_format(char **s, va_list ap, int fd)
{
	t_arg arg;

	arg = ft_printf_new_arg(&arg);
	s[0]++;
	arg.fd = fd;
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

static int		ft_printf_flgs(va_list ap, char **s, char *f, int fd)
{
	t_arg	arg;
	int		z;

	arg = ft_check_format(s, ap, fd);
	if (*s[0] == 'i' || *s[0] == 'd' || *s[0] == 'D')
		z = conv_int(ap, &arg, *s[0], f);
	else if (*s[0] == 'u' || *s[0] == 'U' || *s[0] == 'x' ||
			*s[0] == 'X' || *s[0] == 'o' || *s[0] == 'O' || *s[0] == 'b')
		z = conv_unsigned_int(ap, &arg, *s[0], f);
	else if (*s[0] == 'p')
		z = conv_void(ap, &arg, *s[0], f);
	else if (*s[0] == 'c' && arg.lenght != 'l')
		z = conv_char(ap, &arg, f);
	else if (*s[0] == 'C' || (*s[0] == 'c' && arg.lenght == 'l'))
		z = conv_utf_8(ap, &arg, f);
	else if (*s[0] == 's' && arg.lenght != 'l')
		z = conv_str(ap, &arg, f);
	else if (*s[0] == 'S' || (*s[0] == 's' && arg.lenght == 'l'))
		z = conv_str_utf_8(ap, &arg, f);
	else
		z = ft_check_spec_case(*s, f, arg);
	if (z == -1)
		return (-1);
	*s += 1;
	return (z);
}

int				ft_des_printf(int fd, const char *restrict format, ...)
{
	char	*tmp;
	char	*f;
	va_list	ap;
	int		cnt;
	int		i;

	cnt = 0;
	f = NULL;
	tmp = (char *)format;
	va_start(ap, format);
	while (*tmp && (tmp = ft_pf_copy_until(tmp, &cnt, &f)) != NULL)
	{
		if (*tmp == '%')
		{
			if ((i = ft_printf_flgs(ap, &tmp, f, fd)) == -1)
				return (-1);
			cnt += i;
		}
		else
			ft_putstr_fd(f, fd);
		ft_strdel(&f);
	}
	va_end(ap);
	return (cnt);
}
