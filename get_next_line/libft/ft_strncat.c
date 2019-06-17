/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icarolus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 18:36:51 by icarolus          #+#    #+#             */
/*   Updated: 2019/06/12 18:37:50 by icarolus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dest[i])
	{
		i++;
	}
	while ((n > 0) && src[j])
	{
		dest[i + j] = src[j];
		j++;
		n--;
	}
	dest[i + j] = '\0';
	return (dest);
}
