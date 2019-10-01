/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prnf_functions.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icarolus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 09:59:48 by icarolus          #+#    #+#             */
/*   Updated: 2019/09/30 13:23:32 by icarolus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../printflibr.h"

int		ft_pf_write_until(char c, int j, int fd)
{
	int i;

	i = j;
	while (i-- > 0)
		write(fd, &c, 1);
	return (j);
}

int		ft_pf_putstr(char *s, int fd)
{
	int i;

	i = 0;
	if (s != NULL)
	{
		while (s[i])
		{
			write(fd, &s[i], 1);
			i += 1;
		}
	}
	return (i);
}

int		ft_pf_putchar(char c, int fd)
{
	write(fd, &c, 1);
	return (1);
}

int		ft_pf_putstr_until(char *s, int j, int fd)
{
	int i;

	i = 0;
	if (s != NULL)
	{
		while (i < j && s[i])
		{
			write(fd, &s[i], 1);
			i++;
		}
	}
	return (j);
}

char	*ft_pf_copy_until(char *c, int *cnt, char **ret)
{
	int		i;
	char	*tmp;

	tmp = c;
	if (c == NULL)
		return (NULL);
	while (*c)
	{
		if (*c == '%' && c[1] != 0)
			break ;
		else if (*c == '%' && c[1] == 0)
			return (NULL);
		c++;
		*cnt += 1;
	}
	i = c - tmp;
	if (i > 0)
	{
		*ret = ft_strnew(i);
		*ret = ft_strncpy(*ret, tmp, i);
	}
	else
		*ret = 0;
	return (c);
}
