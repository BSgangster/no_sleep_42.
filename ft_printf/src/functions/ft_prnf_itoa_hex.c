/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prnf_itoa_hex.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icarolus <icarolus@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 19:49:21 by icarolus          #+#    #+#             */
/*   Updated: 2019/09/15 19:59:52 by icarolus         ###   ########.fr       */
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

static char	*ft_up(uintmax_t num, char *up)
{
	int		i;
	char	*s;

	i = 16;
	s = ft_strnew(sizeof(uintmax_t) * 2 + 1);
	ft_strcpy(s, "0");
	while (i > 0)
	{
		s[i--] = up[(num & 0xF)];
		num >>= 4;
	}
	return (ft_delate_zero(s));
}

static char	*ft_down(uintmax_t num, char *down)
{
	int		i;
	char	*s;

	i = 16;
	s = ft_strnew(sizeof(uintmax_t) * 2 + 1);
	ft_strcpy(s, "0");
	while (i > 0)
	{
		s[i--] = down[(num & 0xF)];
		num >>= 4;
	}
	return (ft_delate_zero(s));
}

char		*ft_prnf_itoa_hex(uintmax_t num, int conv, t_arg *arg)
{
	char	*up;
	char	*down;
	char	*s;
	int		i;

	s = NULL;
	up = "0123456789ABCDEF";
	down = "0123456789abcdef";
	i = 16;
	if (num == 0 && arg->p_switch != 1)
		return (ft_strdup("0"));
	if (conv == 'X')
		s = ft_up(num, up);
	else
		s = ft_down(num, down);
	return (s);
}