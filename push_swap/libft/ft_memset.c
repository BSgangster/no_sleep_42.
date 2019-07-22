/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icarolus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 16:57:37 by icarolus          #+#    #+#             */
/*   Updated: 2019/06/12 17:00:08 by icarolus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int x, size_t n)
{
	unsigned char	*ptr;
	size_t			count;

	ptr = str;
	count = 0;
	while (count < n)
	{
		ptr[count] = x;
		count++;
	}
	return (str);
}
