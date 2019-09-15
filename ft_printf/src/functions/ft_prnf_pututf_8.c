/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prnf_pututf_8.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icarolus <icarolus@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 20:06:55 by icarolus          #+#    #+#             */
/*   Updated: 2019/09/15 20:07:10 by icarolus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

int			ft_printf_pututf_8(char *c, t_arg *arg)
{
	int	cnt;

	cnt = 0;
	if (c[0] == 0)
		cnt += 1;
	if (arg->left_justify == 0)
	{
		if (arg->filed_width > 0)
			cnt += ft_pf_write_until(' ', arg->filed_width, arg->fd);
		cnt += write(arg->fd, c, ft_strlen(c));
	}
	else
	{
		cnt += write(arg->fd, c, ft_strlen(c));
		if (arg->filed_width > 0)
			cnt += ft_pf_write_until(' ', arg->filed_width, arg->fd);
	}
	ft_strdel(&c);
	return (cnt);
}