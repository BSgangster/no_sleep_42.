/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icarolus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 16:20:57 by icarolus          #+#    #+#             */
/*   Updated: 2019/06/12 16:25:15 by icarolus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int		len;
	char	*str;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = ft_int_len(n);
	if (!(str = (char *)malloc((len + 1) * sizeof(char))))
		return (NULL);
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
	}
	str[len--] = '\0';
	while (len > 0)
	{
		str[len] = (n % 10) + '0';
		n /= 10;
		len--;
	}
	if (str[0] != '-')
		str[len] = n % 10 + '0';
	return (str);
}
