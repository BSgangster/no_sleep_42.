/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icarolus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 16:44:33 by icarolus          #+#    #+#             */
/*   Updated: 2019/06/12 16:45:38 by icarolus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*s;
	unsigned char	*usrc;
	int				i;

	i = 0;
	s = (unsigned char *)dest;
	usrc = (unsigned char *)src;
	while (n--)
	{
		s[i] = usrc[i];
		if (usrc[i] == (unsigned char)c)
			return (&s[i + 1]);
		i++;
	}
	return (NULL);
}
