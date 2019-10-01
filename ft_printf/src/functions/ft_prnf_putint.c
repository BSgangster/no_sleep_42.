/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prnf_putint.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icarolus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 12:35:37 by icarolus          #+#    #+#             */
/*   Updated: 2019/09/30 13:32:05 by icarolus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../printflibr.h"

static int	ft_int_write(char *n, t_arg *arg, int cnt)
{
	if (arg->left_justify == 0)
	{
		if (arg->filed_width > 0 && arg->pad_zero == 0 && (arg->prefix))
			cnt += ft_pf_write_until(' ', arg->filed_width, arg->fd);
		if (arg->force_positive)
			cnt += ft_pf_putchar(arg->force_positive, arg->fd);
		if (arg->filed_width > 0 && arg->prefix)
			cnt += ft_pf_write_until('0', arg->filed_width, arg->fd);
		if (arg->precision > 0)
			cnt += ft_pf_write_until('0', arg->precision, arg->fd);
		cnt += ft_pf_putstr(n, arg->fd);
	}
	else
	{
		if (arg->force_positive)
			cnt += ft_pf_putchar(arg->force_positive, arg->fd);
		if (arg->precision > 0)
			cnt += ft_pf_write_until('0', arg->precision, arg->fd);
		cnt += ft_pf_putstr(n, arg->fd);
		if (arg->filed_width > 0)
			cnt += ft_pf_write_until(' ', arg->filed_width, arg->fd);
	}
	if (*n)
		ft_strdel(&n);
	return (cnt);
}

int			ft_prnf_putint(intmax_t num, t_arg *arg)
{
	char	*n;
	int		len;
	int		cnt;

	cnt = 0;
	if (num == 0 && arg->p_switch && arg->precision == 0)
		return (ft_int_write("", arg, cnt));
	n = ft_prnf_itoa(num);
	len = ft_strlen(n);
	arg->precision -= len;
	if (arg->precision > 0)
		arg->filed_width -= (arg->precision + len);
	else if (arg->precision <= 0)
		arg->filed_width -= len;
	if (arg->force_positive)
		arg->filed_width -= 1;
	return (ft_int_write(n, arg, cnt));
}
