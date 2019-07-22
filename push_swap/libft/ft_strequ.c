/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icarolus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 17:22:00 by icarolus          #+#    #+#             */
/*   Updated: 2019/06/12 17:22:43 by icarolus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strequ(const char *str, const char *str1)
{
	int		i;

	i = 0;
	if (!str || !str1)
		return (0);
	if (ft_strlen(str) != ft_strlen(str1))
		return (0);
	while (str[i])
	{
		if (str[i] == str1[i])
			i++;
		else
			return (0);
	}
	return (1);
}
