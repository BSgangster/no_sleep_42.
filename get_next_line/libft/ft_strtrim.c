/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icarolus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 18:07:56 by icarolus          #+#    #+#             */
/*   Updated: 2019/06/12 18:08:37 by icarolus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s)
{
	char	*newstring;
	size_t	newstring_len;
	size_t	i;
	size_t	x;

	x = 0;
	i = 0;
	if (!s)
		return (NULL);
	while (ft_iswhitespace(s[i]))
		i++;
	if (s[i] == '\0')
		return ("");
	newstring_len = ft_strlen(s);
	while (ft_iswhitespace(s[--newstring_len]))
		continue;
	if (!(newstring = ft_strnew((newstring_len - i + 1))))
		return (NULL);
	while (i < newstring_len + 1)
	{
		newstring[x++] = s[i++];
	}
	newstring[x] = '\0';
	return (newstring);
}
