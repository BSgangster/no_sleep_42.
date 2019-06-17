/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icarolus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 16:38:03 by icarolus          #+#    #+#             */
/*   Updated: 2019/06/12 16:39:15 by icarolus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*fresh_list;

	if (!lst || !f)
		return (NULL);
	if (lst->next)
	{
		fresh_list = ft_lstmap(lst->next, f);
		ft_lstadd(&fresh_list, f(lst));
	}
	else
		fresh_list = f(lst);
	return (fresh_list);
}
