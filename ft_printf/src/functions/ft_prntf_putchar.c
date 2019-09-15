/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prntf_putchar.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icarolus <icarolus@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 19:57:23 by icarolus          #+#    #+#             */
/*   Updated: 2019/09/15 19:59:57 by icarolus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

int			ft_prnf_putchar(char c, t_arg *arg)
{
	int cnt;

	cnt = 0;
	arg->filed_width -= 1;
	if (arg->left_justify == 0)
	{
		if (arg->filed_width > 0 && arg->pad_zero > 0)
			cnt += ft_pf_write_until('0', arg->filed_width, arg->fd);
		else if (arg->filed_width > 0)
			cnt += ft_pf_write_until(' ', arg->filed_width, arg->fd);
		cnt += ft_pf_putchar(c, arg->fd);
	}
	else
	{
		cnt += ft_pf_putchar(c, arg->fd);
		if (arg->filed_width > 0)
			cnt += ft_pf_write_until(' ', arg->filed_width, arg->fd);
	}
	return (cnt);
}