/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icarolus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 17:45:25 by icarolus          #+#    #+#             */
/*   Updated: 2019/06/12 17:47:19 by icarolus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(const char *str, char c)
{
	size_t	x;
	size_t	y;
	size_t	z;
	char	**arr_array;

	x = 0;
	z = 0;
	if (!str || !(arr_array = \
				(char **)malloc(ft_splitcount(str, c) * sizeof(char *) + 1)))
		return (NULL);
	while (x < ft_splitcount(str, c))
	{
		if (!(arr_array[x] = \
			(char *)malloc(ft_split_len(&str[z], c) * sizeof(char) + 1)))
			return (NULL);
		y = 0;
		while (str[z] == c)
			z += 1;
		while (str[z] != c && str[z])
			arr_array[x][y++] = str[z++];
		arr_array[x][y] = '\0';
		x += 1;
	}
	arr_array[x] = NULL;
	return (arr_array);
}
