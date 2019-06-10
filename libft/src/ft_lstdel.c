#include "libft.h"

//this deletes the node you're at and everything that is linked to it. unlike delone, this will take out everything from the node. Very Destructive.
void	ft_lstdel(t_list *alst,void (*del)(void *,size_t))
{
	t_list *acopy;
	t_list *anext_copy;
	
	acopy = *alst;
	while(acopy)
	{
		anext = alst -> next;
		del((acopy -> content),(acopy -> content_size));
		free(alst);
		acopy = anext;
	}
	*alst = NULL;	
}
