/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icarolus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 16:41:08 by icarolus          #+#    #+#             */
/*   Updated: 2019/06/12 16:44:08 by icarolus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	unsigned char	*new_array;
	size_t			i;

	if (!size)
		return (NULL);
	if (!(new_array = (unsigned char *)malloc(size)))
		return (NULL);
	i = 0;
	while (i < size)
	{
		new_array[i] = 0;
		i++;
	}
	return ((void *)new_array);
}
