/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_flags.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icarolus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 09:56:23 by icarolus          #+#    #+#             */
/*   Updated: 2019/09/30 13:22:30 by icarolus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../printflibr.h"
#include <stdio.h>

char	*ft_check_flags(char *str, t_arg *arg)
{
	while (*str == '#' || *str == '0' || *str == '-' || *str == '+'
			|| *str == ' ' || *str == 39)
	{
		if (*str == '0')
			arg->prefix = 1;
		if (*str == '#')
			arg->pad_zero = 48;
		if (*str == '-')
			arg->left_justify = 1;
		if (*str == ' ' && arg->force_positive == 0)
			arg->force_positive = 32;
		if (*str == '+')
			arg->force_positive = 1;
		str++;
	}
	if (arg->left_justify)
		arg->pad_zero = 0;
	return (str);
}

char	*ft_check_field_with(va_list ap, char *s, t_arg *arg)
{
	while (*s == '*' || ft_isdigit(*s))
	{
		if (ft_isdigit(*s))
		{
			arg->filed_width = 0;
			while (ft_isdigit(*s))
			{
				arg->filed_width = arg->filed_width * 10 + (*s - '0');
				s++;
			}
		}
		if (*s == '*')
		{
			if ((arg->filed_width = va_arg(ap, int)) < 0)
			{
				arg->left_justify = 1;
				arg->filed_width *= -1;
			}
			s++;
		}
	}
	return (s);
}

char	*ft_check_precision(va_list ap, char *s, t_arg *arg)
{
	if (*s == '.')
	{
		arg->p_switch = 1;
		s++;
		if (*s == '*')
		{
			s++;
			arg->precision = va_arg(ap, int);
			return (s);
		}
		else
		{
			while (ft_isdigit(*s))
			{
				arg->precision = arg->precision * 10 + (*s - '0');
				s++;
			}
			return (s);
		}
	}
	return (s);
}

char	*ft_check_length(char *str, t_arg *arg)
{
	if (*str == 'h' && str[1] == 'h')
	{
		arg->length = 104104;
		return (str + 2);
	}
	else if (*str == 'l' && str[1] == 'l')
	{
		arg->length = 108108;
		return (str + 2);
	}
	else if (*str == 'l' || *str == 'h' || *str == 'j'
			|| *str == 'z' || *str == 't' || *str == 'L')
	{
		arg->length = *str + 0;
		return (str + 1);
	}
	return (str);
}
