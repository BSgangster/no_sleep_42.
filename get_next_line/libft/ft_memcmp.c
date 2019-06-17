/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icarolus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 18:25:47 by icarolus          #+#    #+#             */
/*   Updated: 2019/06/12 18:28:30 by icarolus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *str, const void *str2, size_t n)
{
	size_t			i;
	unsigned char	*ustr;
	unsigned char	*ustr2;

	i = 0;
	ustr = (unsigned char *)str;
	ustr2 = (unsigned char *)str2;
	while (i < n && ustr[i] == ustr2[i])
	{
		i++;
	}
	if (i == n)
	{
		return (0);
	}
	return (ustr[i] - ustr2[i]);
}
