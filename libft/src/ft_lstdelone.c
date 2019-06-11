#include "libft.h"

//very simple function, seems to just delete just one node
void	ft_lstdelone(t_list **alst,void (*del)(void *,size_t))
{
	if(!alst || !*alst || !del)
		return ;	
	del((*alst) -> content, (*alst) -> content_size);
	free(*alst);
	*alst = NULL;
}
