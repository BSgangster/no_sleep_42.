/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icarolus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 17:16:49 by icarolus          #+#    #+#             */
/*   Updated: 2019/06/24 11:47:26 by icarolus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	while (*s1 == *s2)
	{
		if (!(*s1 && *s2))
			return (0);
		s1++;
		s2++;
	}
	if ((unsigned char)*s1 - (unsigned char)*s2 < 0)
		return (-1);
	else
		return (1);
}
