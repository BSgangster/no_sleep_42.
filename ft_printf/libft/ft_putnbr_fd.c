/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icarolus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 17:06:03 by icarolus          #+#    #+#             */
/*   Updated: 2019/06/12 19:19:46 by icarolus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int n1;

	n1 = (long int)n;
	if (n1 < 0)
	{
		ft_putchar_fd('-', fd);
		n1 *= -1;
	}
	if (n1 > 9)
		ft_putnbr_fd(n1 / 10, fd);
	ft_putchar_fd((n1 % 10) + '0', fd);
}
