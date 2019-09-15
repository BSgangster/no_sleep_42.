/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv_void.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icarolus <icarolus@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 20:13:21 by icarolus          #+#    #+#             */
/*   Updated: 2019/09/15 20:13:25 by icarolus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libprintf.h"

int				conv_void(va_list ap, t_arg *arg, int conv, char *f)
{
	void	*num;

	if (arg->precision)
		arg->pad_zero = 0;
	num = va_arg(ap, void *);
	arg->prefix = 120;
	ft_putstr_fd(f, arg->fd);
	return (ft_printf_putuint((uintmax_t)num, arg, conv));
}