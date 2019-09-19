/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv_unsigned_int.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icarolus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 09:23:24 by icarolus          #+#    #+#             */
/*   Updated: 2019/09/19 19:38:50 by icarolus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printflib.h"

static uintmax_t	ft_check_l(uintmax_t num, t_arg *arg)
{
	if (arg->lenght == 104104)
		num = (unsigned char)num;
	else if (arg->lenght == 108108)
		num = (unsigned long long)num;
	else if (arg->lenght == 104)
		num = (unsigned short)num;
	else if (arg->lenght == 108)
		num = (unsigned long)num;
	else if (arg->lenght == 106)
		num = (uintmax_t)num;
	else if (arg->lenght == 122)
		num = (size_t)num;
	else if (arg->lenght == 116)
		num = (ptrdiff_t)num;
	else if (arg->lenght == 0)
		num = (unsigned int)num;
	return (num);
}

int					conv_unsigned_int(va_list ap, t_arg *arg, int conv, char *f)
{
	uintmax_t num;

	num = va_arg(ap, uintmax_t);
	if (arg->p_switch && arg->precision >= 0)
		arg->pad_zero = 0;
	if (conv != 79 && conv != 85)
		num = ft_check_l(num, arg);
	if (conv == 'u' || conv == 'U' || conv == 'b')
		arg->prefix = 0;
	if (arg->prefix > 0)
	{
		if (conv == 'X')
			arg->prefix = 88;
		if (conv == 'x')
			arg->prefix = 120;
	}
	if (conv == 'p')
		arg->prefix = 112;
	if (conv != 'o' && conv != 'O' && num == 0)
		arg->prefix = 0;
	ft_putstr_fd(f, arg->fd);
	return (ft_printf_putuint(num, arg, conv));
}
