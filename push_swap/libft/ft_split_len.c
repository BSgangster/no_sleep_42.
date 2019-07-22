/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_len.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icarolus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 17:08:52 by icarolus          #+#    #+#             */
/*   Updated: 2019/06/12 17:09:40 by icarolus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_split_len(const char *str, char c)
{
	size_t	x;
	size_t	len;

	x = 0;
	len = 0;
	while (str[x] == c)
		x += 1;
	while (str[x] != c && str[x++])
		len += 1;
	return (len);
}
