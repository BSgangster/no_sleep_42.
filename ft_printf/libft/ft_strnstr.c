/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icarolus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 17:32:06 by icarolus          #+#    #+#             */
/*   Updated: 2019/06/12 17:34:05 by icarolus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *substr, size_t n)
{
	size_t	x;
	size_t	y;

	x = 0;
	y = 0;
	if (!substr[0])
	{
		return ((char *)&str[x]);
	}
	while (str[x] && (x < n))
	{
		while ((str[x + y] == substr[y]) && substr[y] && (x + y < n))
			y++;
		if (substr[y] == '\0')
		{
			return ((char *)&str[x]);
		}
		y = 0;
		x++;
	}
	return (NULL);
}
