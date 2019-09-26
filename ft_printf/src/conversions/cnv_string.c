/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icarolus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 09:21:40 by icarolus          #+#    #+#             */
/*   Updated: 2019/09/26 15:52:30 by icarolus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../printflibr.h"

int		cnv_string(va_list ap, t_arg *arg, char *f)
{
	char	*s;

	s = va_arg(ap, char *);
	if (arg->precision < 0)
		arg->precision *= -1;
	ft_putstr_fd(f, arg->fd);
	if (s == NULL)
		return (ft_prnf_putstr("(null)", arg));
	return (ft_prnf_putstr(s, arg));
}
