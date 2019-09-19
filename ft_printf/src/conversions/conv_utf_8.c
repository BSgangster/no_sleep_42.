/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv_utf_8.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icarolus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 09:22:06 by icarolus          #+#    #+#             */
/*   Updated: 2019/09/19 19:33:20 by icarolus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printflibr.h"

int			conv_utf_8(va_list ap, t_arg *arg, char *f)
{
	int		c;
	char	*a;

	a = NULL;
	if ((c = va_arg(ap, wchar_t)) < 0 ||
			(c >= 0xd800 && c < 0xe000) || c > 0x81000)
		return (-1);
	ft_putstr_fd(f, arg->fd);
	if (c == 0)
		return (ft_printf_putchar(0, arg));
	a = ft_printf_from_int_to_utf_8(c, arg);
	return (ft_printf_pututf_8(a, arg));
}
