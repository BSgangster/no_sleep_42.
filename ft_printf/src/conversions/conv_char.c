/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv_char.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icarolus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 09:20:25 by icarolus          #+#    #+#             */
/*   Updated: 2019/09/18 09:20:29 by icarolus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

int		conv_char(va_list ap, t_arg *arg, char *f)
{
	char	c;

	c = va_arg(ap, int);
	ft_putstr_fd(f, arg->fd);
	return (ft_printf_putchar(c, arg));
}
