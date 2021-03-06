/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prnf_itoa_oct.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icarolus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 10:03:31 by icarolus          #+#    #+#             */
/*   Updated: 2019/09/30 13:22:46 by icarolus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../printflibr.h"

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

char		*ft_prnf_itoa_oct(uintmax_t num, t_arg *arg)
{
	char	*oct;
	char	*s;
	int		i;

	oct = "01234567";
	i = 22;
	if (num == 0 && arg->p_switch != 1 && arg->prefix != 48)
		return (ft_strdup("0"));
	s = ft_strnew(23);
	ft_strcpy(s, "0");
	while (i > 0)
	{
		s[i--] = oct[num & 07];
		num >>= 3;
	}
	return (ft_delate_zero(s));
}
