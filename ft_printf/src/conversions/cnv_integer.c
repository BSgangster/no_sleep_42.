/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv_int.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icarolus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 09:21:26 by icarolus          #+#    #+#             */
/*   Updated: 2019/09/26 15:48:05 by icarolus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../printflibr.h"

static intmax_t	ft_int_check_length(intmax_t num, t_arg *arg)
{
	if (arg->length == 104104)
		num = (char)num;
	else if (arg->length == 108108)
		num = (long long)num;
	else if (arg->length == 104)
		num = (short)num;
	else if (arg->length == 108)
		num = (long)num;
	else if (arg->length == 122)
		num = (size_t)num;
	else if (arg->length == 116)
		num = (ptrdiff_t)num;
	else if (arg->length == 106)
		num = (intmax_t)num;
	else if (arg->length == 0)
		num = (int)num;
	return (num);
}

int				cnv_integer(va_list ap, t_arg *arg, int conv, char *f)
{
	intmax_t	num;
	t_arg		tmp;

	if (arg->p_switch && arg->precision >= 0)
		arg->pad_zero = 0;
	num = va_arg(ap, intmax_t);
	if (conv != 'D')
		num = ft_int_check_length(num, arg);
	if (arg->force_positive == 1 && num >= 0)
		arg->force_positive = 43;
	if (num < 0)
	{
		arg->force_positive = 45;
		num = -(num);
	}
	tmp = *arg;
	ft_putstr_fd(f, arg->fd);
	return (ft_prnf_putint(num, &tmp));
}
