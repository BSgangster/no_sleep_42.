/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prnf_new_arg.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icarolus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 12:29:16 by icarolus          #+#    #+#             */
/*   Updated: 2019/09/26 16:00:20 by icarolus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../printflibr.h"

t_arg	ft_prnf_new_arg(t_arg *arg)
{
	arg->fd = 1;
	arg->left_justify = 0;
	arg->force_positive = 0;
	arg->prefix = 0;
	arg->pad_zero = 0;
	arg->filed_width = 0;
	arg->precision = 0;
	arg->length = 0;
	arg->p_switch = 0;
	return (*arg);
}
