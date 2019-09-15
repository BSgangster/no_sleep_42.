/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prnf_int_to_utf_8.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icarolus <icarolus@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 19:47:22 by icarolus          #+#    #+#             */
/*   Updated: 2019/09/15 19:59:49 by icarolus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

static char	*from_int_to_utf_1(wchar_t c, t_arg *arg)
{
	char *a;

	arg->filed_width -= 1;
	a = ft_strnew(2);
	*a = (char)c;
	return (a);
}

static char	*from_int_to_utf_2(wchar_t c, t_arg *arg)
{
	char *a;

	arg->filed_width -= 2;
	a = ft_strnew(3);
	a[1] = c & 0x3f;
	a[1] = 0x80 | a[1];
	c >>= 6;
	a[0] = c & 0x1f;
	a[0] = 0xc0 | a[0];
	return (a);
}

static char	*from_int_to_utf_3(wchar_t c, t_arg *arg)
{
	char *a;

	arg->filed_width -= 3;
	a = ft_strnew(4);
	a[2] = c & 0x3f;
	a[2] = 0x80 | a[2];
	c >>= 6;
	a[1] = c & 0x3f;
	a[1] = 0x80 | a[1];
	c >>= 6;
	a[0] = c & 0xf;
	a[0] = 0xe0 | a[0];
	return (a);
}

static char	*from_int_to_utf_4(wchar_t c, t_arg *arg)
{
	char *a;

	arg->filed_width -= 4;
	a = ft_strnew(5);
	a[3] = c & 0x3f;
	a[3] = 0x80 | a[3];
	c >>= 6;
	a[2] = c & 0x3f;
	a[2] = 0x80 | a[2];
	c >>= 6;
	a[1] = c & 0x3f;
	a[1] = 0x80 | a[1];
	c >>= 6;
	a[0] = c & 0x7;
	a[0] = 0xf0 | a[0];
	return (a);
}

char		*ft_printf_from_int_to_utf_8(wchar_t c, t_arg *arg)
{
	char *a;

	a = NULL;
	if (c <= 127)
		a = from_int_to_utf_1(c, arg);
	else if (c >= 128 && c <= 2047)
		a = from_int_to_utf_2(c, arg);
	else if (c >= 2048 && c <= 65535)
		a = from_int_to_utf_3(c, arg);
	else if (c >= 65536 && c <= 2097150)
		a = from_int_to_utf_4(c, arg);
	return (a);
}