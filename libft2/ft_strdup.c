/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icarolus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 17:21:02 by icarolus          #+#    #+#             */
/*   Updated: 2019/06/12 17:21:48 by icarolus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *str)
{
	char	*dup;
	int		len;

	len = 0;
	while (str[len])
	{
		len++;
	}
	if (!(dup = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	while (len >= 0)
	{
		dup[len] = str[len];
		len--;
	}
	return (dup);
}
