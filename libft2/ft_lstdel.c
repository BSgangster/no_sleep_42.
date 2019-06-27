/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icarolus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 16:30:28 by icarolus          #+#    #+#             */
/*   Updated: 2019/06/12 16:34:23 by icarolus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *anext_copy;

	if (!alst || !(*alst) || !del)
		return ;
	while (*alst)
	{
		anext_copy = (*alst)->next;
		del((*alst)->content, (*alst)->content_size);
		free(*alst);
		*alst = anext_copy;
	}
	free(*alst);
	*alst = NULL;
}
