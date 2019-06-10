#include "libft.h"

void	lstiter(t_list *lst,void (*f)(t_list *elem))
{
	//safe guarding
	if (!lst || !f)
		return (NULL);
	//checking there is always a next node, if there isnt stop traversing through the linked list. As you traverse though you apply the function f to every node.
	while(lst -> next)
		{
			f(lst);
			lst = lst -> next;
		}
}
