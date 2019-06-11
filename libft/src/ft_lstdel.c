#include "libft.h"

//this deletes the node you're at and everything that is linked to it. unlike delone, this will take out everything from the node. Very Destructive.
void	ft_lstdel(t_list **alst,void (*del)(void *, size_t))
{
	t_list *anext_copy;
	
	if(!alst || !(*alst) || !del)
		return ;
	while(*alst)
	{
		anext_copy = (*alst) -> next;
		del((*alst) -> content, (*alst) -> content_size);
		free(*alst);
		*alst = anext_copy;
	}
	free(*alst);
	*alst = NULL;	
}
