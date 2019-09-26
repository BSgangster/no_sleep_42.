/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv_void.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icarolus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 09:21:06 by icarolus          #+#    #+#             */
/*   Updated: 2019/09/26 15:59:28 by icarolus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../printflibr.h"

int				cnv_voidtype(va_list ap, t_arg *arg, int conv, char *f)
{
	void	*num;

	if (arg->precision)
		arg->pad_zero = 0;
	num = va_arg(ap, void *);
	arg->prefix = 120;
	ft_putstr_fd(f, arg->fd);
	return (ft_prnf_putuint((uintmax_t)num, arg, conv));
}
