/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icarolus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 16:55:05 by icarolus          #+#    #+#             */
/*   Updated: 2019/06/12 16:56:52 by icarolus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned int	i;
	unsigned char	*udest;
	unsigned char	*usrc;

	i = 0;
	udest = (unsigned char *)dest;
	usrc = (unsigned char *)src;
	if (!dest && !src)
		return (NULL);
	if (usrc < udest)
	{
		while (n-- > 0)
		{
			udest[n] = usrc[n];
		}
	}
	else
	{
		while (i < n)
		{
			udest[i] = usrc[i];
			i++;
		}
	}
	return ((unsigned char *)dest);
}
