/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icarolus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 17:44:08 by icarolus          #+#    #+#             */
/*   Updated: 2019/06/12 17:44:09 by icarolus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	int		j;

	i = ft_strlen(s);
	j = 0;
	while (i >= j)
		if (s[i - j++] == c)
			return ((char *)&s[i - (j - 1)]);
	return (NULL);
}
