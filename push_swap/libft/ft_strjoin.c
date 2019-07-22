/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icarolus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 17:26:58 by icarolus          #+#    #+#             */
/*   Updated: 2019/06/24 11:46:40 by icarolus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *str, const char *str1)
{
	char	*fresh_string;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!str || !str1)
		return (NULL);
	if (!(fresh_string = malloc((ft_strlen(str) + \
		ft_strlen(str1) + 1) * sizeof(char))))
		return (NULL);
	while (str[i])
	{
		fresh_string[i] = str[i];
		i++;
	}
	while (str1[j])
	{
		fresh_string[i] = str1[j];
		j++;
		i++;
	}
	fresh_string[i] = '\0';
	return (fresh_string);
}
