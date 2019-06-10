#include "libft.h"

//very simple function, seems to just delete just one node
void	ft_listdelone(t_list **alst,void (*del)(void,size_t))
{
	t_list *ac;
	
	ac = *alst;
	del((ac -> content),del(ac -> content_size));
	free(alst);
	*alst = NULL;
}
