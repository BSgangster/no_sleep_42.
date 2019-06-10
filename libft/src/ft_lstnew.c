#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *new;
	
	//create the struct object/linked list, if unsuccesful return NULL
	if (!(new = (*t_list)malloc(size_of(t_list) * content_size)))
	{
		return (NULL);
	}
	//if the input is null for content arg, then just give the new linked list a content value of NULL and therefore content size must be 0
	if (!content)
	{
		new -> content = NULL;
		new -> content_size = 0;
	}
	else
	{
		//so we by now succefully made the linked list object, now all we have to is give the content value space in memory, if it fails, return NULL
		if(!(new -> content = (void *)malloc(content_size)))
			return (NULL);
		//if you're lazy or wanna save line you can use memcpy to just add all of content to the linked lists content.
		ft_memcpy(new -> content, content,content_size);
		new -> content_size = content_size;
	}
	new -> NULL;
	return (new);
}
