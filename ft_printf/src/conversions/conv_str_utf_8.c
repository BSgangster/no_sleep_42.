/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv_str_utf_8.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icarolus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 09:20:47 by icarolus          #+#    #+#             */
/*   Updated: 2019/09/18 09:20:51 by icarolus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

static int		ft_nbrlen(int *nbr)
{
	int *n;
	int cnt;

	n = nbr;
	cnt = 0;
	while (*n)
	{
		if (*n <= 127)
			cnt += 1;
		else if (*n >= 128 && *n <= 2047)
			cnt += 2;
		else if (*n >= 2048 && *n <= 65534)
			cnt += 3;
		else if (*n >= 65535 && *n <= 2097150)
			cnt += 4;
		n++;
	}
	return (cnt);
}

static int		ft_check_n(int nbr)
{
	int n;
	int cnt;

	n = nbr;
	cnt = 0;
	if (n <= 127)
		cnt += 1;
	else if (n >= 128 && n <= 2047)
		cnt += 2;
	else if (n >= 2048 && n <= 65534)
		cnt += 3;
	else if (n >= 65535 && n <= 2097150)
		cnt += 4;
	return (cnt);
}

static int		ft_check_correct_arg(int *s)
{
	int i;

	i = 0;
	while (s[i++])
	{
		if (s[i] < 0 || (s[i] >= 0xd800 && s[i] < 0xe000) || s[i] > 0x81000)
			return (-1);
	}
	return (0);
}

static char		*ft_from_int_to_utf(int *s, t_arg *arg)
{
	char	*a;
	int		i;
	char	*x;
	char	*r;

	i = 0;
	if (s && ft_check_n(*s) <= arg->precision)
	{
		a = ft_printf_from_int_to_utf_8(*s, arg);
		s++;
	}
	else
		return (NULL);
	while (s[i])
	{
		x = a;
		if ((ft_strlen(a)) + ft_check_n(s[i]) > (unsigned long)arg->precision)
			break ;
		r = ft_printf_from_int_to_utf_8(s[i], arg);
		a = ft_strjoin(x, r);
		ft_strdel(&x);
		ft_strdel(&r);
		i++;
	}
	return (a);
}

int				conv_str_utf_8(va_list ap, t_arg *arg, char *f)
{
	int		*s;
	char	*a;

	s = va_arg(ap, int *);
	if (s != NULL && ft_check_correct_arg(s) == -1)
		return (-1);
	ft_putstr_fd(f, arg->fd);
	if (s == NULL)
		return (ft_printf_putstr("(null)", arg));
	if (arg->p_switch == 0)
		arg->precision = ft_nbrlen(s);
	if ((a = ft_from_int_to_utf(s, arg)) == NULL)
		return (ft_printf_putstr("", arg));
	return (ft_printf_putstr_utf_8(a, arg));
}
