#include "libft.h"

//Allocates fresh memory but creating space in ram but filling them with 0s.
void	*ft_memalloc(size_t size)
{
	unsigned char	*new_array;
	int		i;
	
	//checks if the size is just empty
	if (!size)
		return (NULL);
	//checks if the space allocations went wrong
	if (!(new_array = (unsigned char *)malloc(size + 1)))
		return NULL;
	i = 0;
	//inseering 0s where the space was allocated.
	while (i < size)
	{
		new_array[i] = 0;
	       	i++;	
	}
	return ((void *)new_array);
}

