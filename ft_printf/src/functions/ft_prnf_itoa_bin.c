/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prnf_itoa_bin.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icarolus <icarolus@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 19:48:42 by icarolus          #+#    #+#             */
/*   Updated: 2019/09/15 20:07:28 by icarolus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

static char	*ft_delate_zero(char *s)
{
	char *tmp;

	tmp = s;
	while (*s == '0')
		s++;
	s = ft_strdup(s);
	ft_strdel(&tmp);
	return (s);
}

char		*ft_prnf_itoa_bin(uintmax_t num)
{
	char	*s;
	int		i;

	i = 64;
	s = (char *)malloc(sizeof(uintmax_t) * 8 + 1);
	ft_strcpy(s, "0");
	while (i > 0)
	{
		s[i--] = ((num & 0x1) + '0');
		num >>= 1;
	}
	return (ft_delate_zero(s));
}