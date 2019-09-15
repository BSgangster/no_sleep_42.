/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icarolus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 16:04:33 by icarolus          #+#    #+#             */
/*   Updated: 2019/06/24 09:46:12 by icarolus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_bzero(void *s, size_t n)
{
	int				i;
	unsigned char	*start;

	i = 0;
	start = (unsigned char *)s;
	while (n--)
	{
		start[i++] = 0;
	}
	return (start);
}
