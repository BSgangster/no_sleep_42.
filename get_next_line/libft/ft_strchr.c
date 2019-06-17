/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icarolus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 17:13:17 by icarolus          #+#    #+#             */
/*   Updated: 2019/06/12 17:43:17 by icarolus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int		index;

	index = 0;
	while (str[index] != c && str[index] != '\0')
	{
		index += 1;
	}
	if (str[index] == c)
	{
		return ((char *)&str[index]);
	}
	return (NULL);
}
