/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkifspace.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icarolus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 16:07:50 by icarolus          #+#    #+#             */
/*   Updated: 2019/06/12 16:10:41 by icarolus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_checkifspace(int character)
{
	if (character == '\v' || character == '\n' || character == '\t' \
		|| character == '\f' || character == ' ' || character == '\r')
		return (1);
	return (0);
}
