/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_splitcount.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icarolus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 17:09:59 by icarolus          #+#    #+#             */
/*   Updated: 2019/06/12 17:10:59 by icarolus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_splitcount(const char *str, char c)
{
	size_t	x;
	size_t	y;

	x = 0;
	y = 0;
	while (str[x])
	{
		if (str[x] != c)
			y += 1;
		while (str[x] != c && str[x + 1])
			x++;
		x++;
	}
	return (y);
}
