/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prnf_itoa_bin.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icarolus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 10:01:16 by icarolus          #+#    #+#             */
/*   Updated: 2019/09/26 15:24:42 by icarolus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../printflibr.h"

static char	*ft_delate_zero(char *str)
{
	char *tmp;

	tmp = str;
	while (*str == '0')
		str++;
	str = ft_strdup(s);
	ft_strdel(&tmp);
	return (str);
}

char		*ft_prnf_itoa_bin(uintmax_t num)
{
	char	*str;
	int		i;

	i = 64;
	str = (char *)malloc(sizeof(uintmax_t) * 8 + 1);
	ft_strcpy(str, "0");
	while (i > 0)
	{
		s[i--] = ((num & 0x1) + '0');
		num >>= 1;
	}
	return (ft_delate_zero(str));
}
