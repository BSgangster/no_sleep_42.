/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prnf_itoa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icarolus <icarolus@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 19:45:52 by icarolus          #+#    #+#             */
/*   Updated: 2019/09/15 19:59:54 by icarolus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

static int	ft_len(uintmax_t n)
{
	size_t len;

	len = 2;
	while (n /= 10)
		len++;
	return (len);
}

char		*ft_prnf_itoa(uintmax_t n)
{
	size_t	len;
	char	*s;

	len = ft_len(n);
	if (!(s = (char *)malloc(sizeof(char) * len)))
		return (NULL);
	s[--len] = '\0';
	while (len--)
	{
		s[len] = n % 10 + 48;
		n = n / 10;
	}
	return (s);
}