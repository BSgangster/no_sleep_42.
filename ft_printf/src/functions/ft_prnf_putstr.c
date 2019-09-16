/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prnf_putstr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icarolus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 12:28:32 by icarolus          #+#    #+#             */
/*   Updated: 2019/09/16 12:28:35 by icarolus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

int			ft_printf_putstr(char *s, t_arg *arg)
{
	int		cnt;

	cnt = 0;
	if (arg->p_switch == 0 || (int)ft_strlen(s) <= arg->precision)
	{
		arg->precision = ft_strlen(s);
		arg->filed_width -= ft_strlen(s);
	}
	else
		arg->filed_width -= arg->precision;
	if (arg->left_justify == 0)
	{
		if (arg->filed_width > 0 && arg->pad_zero > 0)
			cnt += ft_pf_write_until('0', arg->filed_width, arg->fd);
		else if (arg->filed_width > 0)
			cnt += ft_pf_write_until(' ', arg->filed_width, arg->fd);
		cnt += ft_pf_putstr_until(s, arg->precision, arg->fd);
	}
	else
	{
		cnt += ft_pf_putstr_until(s, arg->precision, arg->fd);
		if (arg->filed_width > 0)
			cnt += ft_pf_write_until(' ', arg->filed_width, arg->fd);
	}
	return (cnt);
}
