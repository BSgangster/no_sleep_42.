#include "libft.h"

void	ft_lstiter(t_list *lst,void (*f)(t_list *elem))
{
	//checking there is always a next node, if there isnt stop traversing through the linked list. As you traverse though you apply the function f to every node.
	if(!lst || !f)
		return ;
	while(lst)
		{
			f(lst);
			lst = lst -> next;
		}
}
