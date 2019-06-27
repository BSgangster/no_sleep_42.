/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icarolus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 17:48:42 by icarolus          #+#    #+#             */
/*   Updated: 2019/06/12 17:50:12 by icarolus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *str, const char *substr)
{
	int		x;
	int		y;

	x = 0;
	y = 0;
	if (!substr[0])
	{
		return ((char *)&str[x]);
	}
	while (str[x])
	{
		while ((str[x + y] == substr[y]) && substr[y])
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
