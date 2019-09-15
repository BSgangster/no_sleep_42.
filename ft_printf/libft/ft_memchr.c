/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icarolus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 16:47:14 by icarolus          #+#    #+#             */
/*   Updated: 2019/06/12 16:48:09 by icarolus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*usrc;
	unsigned char	uc;

	usrc = (unsigned char *)src;
	uc = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (*usrc == uc)
		{
			return (void *)&(*usrc);
		}
		i++;
		usrc++;
	}
	return (NULL);
}
