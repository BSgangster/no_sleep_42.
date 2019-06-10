#include "libft.h"

t_list *ft_lstmap(t_list *lst, t_list * (*f)(t_list elem))
{
	t_list *fresh_lst;

	//safe guarding
	if(!lst || !f)
		return(NULL);
	//iteration with recursion and applying f
	if(lst -> next)
	{
		fresh_list = ft_lstmap(lst->next,f);
		ft_lstadd(&fresh_list,f(lst));
	}
	else
		fresh_list = f(lst);
	return (fresh_list);
}
