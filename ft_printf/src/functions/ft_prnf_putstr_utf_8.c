/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prnf_putstr_utf_8.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icarolus <icarolus@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 20:04:52 by icarolus          #+#    #+#             */
/*   Updated: 2019/09/15 20:04:55 by icarolus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

static int	ft_left_justify(char *c, t_arg *arg)
{
	int		cnt;
	int		i;

	cnt = 0;
	i = 0;
	cnt += write(arg->fd, c, ft_strlen(c));
	if (arg->filed_width > 0 && arg->pad_zero == 0)
		cnt += ft_pf_write_until(' ', arg->filed_width, arg->fd);
	return (cnt);
}

static int	ft_non_justify(char *c, t_arg *arg)
{
	int		cnt;
	int		i;

	cnt = 0;
	i = 0;
	if (arg->filed_width > 0 && arg->pad_zero)
		cnt += ft_pf_write_until('0', arg->filed_width, arg->fd);
	if (arg->filed_width > 0 && arg->pad_zero == 0)
		cnt += ft_pf_write_until(' ', arg->filed_width, arg->fd);
	cnt += write(arg->fd, c, ft_strlen(c));
	return (cnt);
}

int			ft_printf_putstr_utf_8(char *c, t_arg *arg)
{
	int cnt;

	cnt = 0;
	if (arg->left_justify == 0)
		cnt = ft_non_justify(c, arg);
	else
		cnt = ft_left_justify(c, arg);
	ft_strdel(&c);
	return (cnt);
}