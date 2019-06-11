#include "libft.h"

void	ft_lstadd(t_list **alst,t_list *new)
{
	//adding the copy just to be safe but I am very sure you can just new it won't be destructive.
	t_list *acopy;
	
	//safe guarding.
	if(!(new) || !(alst))
		return ;
	//adding new to copy var, then to next pointer of new/copy u add the alst, then make alst point to new. basically to shorten this, we added new as a new node to the alst linked list.
	acopy = new;
	acopy -> next = *alst;
	*alst  = new;
}
