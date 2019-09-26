/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prnf_putuint.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icarolus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 12:36:33 by icarolus          #+#    #+#             */
/*   Updated: 2019/09/26 16:10:37 by icarolus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../printflibr.h"

static int	ft_uint_write_nonjust(char *n, t_arg *arg)
{
	int cnt;

	cnt = 0;
	if (arg->prefix == 'x' || arg->prefix == 'X')
		arg->filed_width -= 2;
	if (arg->filed_width > 0 && arg->pad_zero == 0)
		cnt += ft_pf_write_until(' ', arg->filed_width, arg->fd);
	if (arg->prefix > 0)
		cnt += ft_pf_putchar('0', arg->fd);
	if (arg->prefix == 'x' || arg->prefix == 'X')
		cnt += ft_pf_putchar(arg->prefix, arg->fd);
	if (arg->filed_width > 0 && arg->pad_zero)
		cnt += ft_pf_write_until('0', arg->filed_width, arg->fd);
	if (arg->precision > 0)
		cnt += ft_pf_write_until('0', arg->precision, arg->fd);
	cnt += ft_pf_putstr(n, arg->fd);
	return (cnt);
}

static int	ft_uint_write_just(char *n, t_arg *arg)
{
	int cnt;

	cnt = 0;
	if (arg->prefix == 'x' || arg->prefix == 'X')
		arg->filed_width -= 2;
	if (arg->prefix > 0)
		cnt += ft_pf_putchar('0', arg->fd);
	if (arg->prefix == 'x' || arg->prefix == 'X')
		cnt += ft_pf_putchar(arg->prefix, arg->fd);
	if (arg->precision > 0)
		cnt += ft_pf_write_until('0', arg->precision, arg->fd);
	cnt += ft_pf_putstr(n, arg->fd);
	if (arg->filed_width > 0)
		cnt += ft_pf_write_until(' ', arg->filed_width, arg->fd);
	return (cnt);
}

static char	*ft_check_conv(uintmax_t num, int conv, t_arg *arg, char *n)
{
	if (conv == 'x' || conv == 'X' || conv == 'p')
		n = ft_prnf_itoa_hex(num, conv, arg);
	else if (conv == 'o' || conv == 'O')
		n = ft_prnf_itoa_oct(num, arg);
	else if (conv == 'b')
		n = ft_prnf_itoa_bin(num);
	else
		n = ft_prnf_itoa(num);
	return (n);
}

int			ft_prnf_putuint(uintmax_t num, t_arg *arg, int conv)
{
	char	*n;
	int		len;
	int		cnt;

	n = NULL;
	cnt = 0;
	n = ft_check_conv(num, conv, arg, n);
	len = ft_strlen(n);
	if (num == 0 && arg->p_switch && arg->precision == 0)
		return (ft_uint_write_nonjust("", arg));
	arg->precision -= len;
	if (arg->precision > 0)
		arg->filed_width -= (arg->precision + len);
	else if (arg->precision <= 0)
		arg->filed_width -= len;
	if (arg->precision <= 0 && arg->prefix == '0')
		arg->filed_width -= 1;
	else if (arg->prefix == '0' && arg->precision > 0)
		arg->prefix = 0;
	if (arg->left_justify == 0)
		cnt += ft_uint_write_nonjust(n, arg);
	else
		cnt += ft_uint_write_just(n, arg);
	ft_strdel(&n);
	return (cnt);
}
