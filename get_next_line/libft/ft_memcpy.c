/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icarolus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 16:49:15 by icarolus          #+#    #+#             */
/*   Updated: 2019/06/12 16:54:00 by icarolus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*udest;
	unsigned char	*usrc;

	i = 0;
	udest = (unsigned char *)dest;
	usrc = (unsigned char *)src;
	while (i < n)
	{
		if (dest == '\0' && src == '\0')
			break ;
		udest[i] = usrc[i];
		i += 1;
	}
	return (dest);
}
