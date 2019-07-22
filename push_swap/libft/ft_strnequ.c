/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icarolus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 18:28:52 by icarolus          #+#    #+#             */
/*   Updated: 2019/06/12 19:14:23 by icarolus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(const char *str, const char *str1, size_t n)
{
	if (!str || !str1)
		return (0);
	if (ft_strncmp(str, str1, n) == 0)
		return (1);
	return (0);
}
