/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prnf_new_arg.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icarolus <icarolus@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 19:53:42 by icarolus          #+#    #+#             */
/*   Updated: 2019/09/15 19:59:56 by icarolus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

t_arg	ft_prnf_new_arg(t_arg *arg)
{
	arg->fd = 1;
	arg->left_justify = 0;
	arg->force_positive = 0;
	arg->prefix = 0;
	arg->pad_zero = 0;
	arg->filed_width = 0;
	arg->precision = 0;
	arg->lenght = 0;
	arg->p_switch = 0;
	return (*arg);
}