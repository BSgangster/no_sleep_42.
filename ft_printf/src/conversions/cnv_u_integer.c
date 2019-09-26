/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv_unsigned_int.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icarolus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 09:23:24 by icarolus          #+#    #+#             */
/*   Updated: 2019/09/26 15:51:51 by icarolus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../printflibr.h"

static uintmax_t	ft_check_l(uintmax_t num, t_arg *arg)
{
	if (arg->length == 104104)
		num = (unsigned char)num;
	else if (arg->length == 108108)
		num = (unsigned long long)num;
	else if (arg->length == 104)
		num = (unsigned short)num;
	else if (arg->length == 108)
		num = (unsigned long)num;
	else if (arg->length == 106)
		num = (uintmax_t)num;
	else if (arg->length == 122)
		num = (size_t)num;
	else if (arg->length == 116)
		num = (ptrdiff_t)num;
	else if (arg->length == 0)
		num = (unsigned int)num;
	return (num);
}

int					cnv_u_integer(va_list ap, t_arg *arg, int conv, char *f)
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
	return (ft_prnf_putuint(num, arg, conv));
}
