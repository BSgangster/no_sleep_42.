/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icarolus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 18:38:14 by icarolus          #+#    #+#             */
/*   Updated: 2019/06/12 18:38:56 by icarolus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(const char *str, char (*f)(char))
{
	size_t	i;
	size_t	len;
	char	*new_str;

	if (!str)
		return (NULL);
	i = 0;
	len = ft_strlen(str);
	new_str = malloc(len * sizeof(char) + 1);
	if (!new_str)
		return (NULL);
	while (i < len)
	{
		new_str[i] = f(str[i]);
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}
