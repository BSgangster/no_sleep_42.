/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icarolus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 17:57:40 by icarolus          #+#    #+#             */
/*   Updated: 2019/06/12 18:05:35 by icarolus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(const char *str, unsigned int n, size_t len)
{
	size_t	i;
	char	*substr;

	i = 0;
	if (!str)
	{
		return (NULL);
	}
	if (!(substr = malloc(len * sizeof(char) + 1)))
		return (NULL);
	while (i < len)
	{
		substr[i] = str[n];
		i++;
		n++;
	}
	substr[i] = '\0';
	return (substr);
}
