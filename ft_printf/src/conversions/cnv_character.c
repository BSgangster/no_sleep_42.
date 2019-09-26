/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv_char.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icarolus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 09:20:25 by icarolus          #+#    #+#             */
/*   Updated: 2019/09/26 15:39:27 by icarolus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../printflibr.h"

int		cnv_character(va_list ap, t_arg *arg, char *f)
{
	char	c;

	c = va_arg(ap, int);
	ft_putstr_fd(f, arg->fd);
	return (ft_prnf_putchar(c, arg));
}
