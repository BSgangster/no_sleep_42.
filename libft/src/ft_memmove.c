#include <stdlib.h>
#include "libft.h"
//memmove is basically memcpy but it handles the cases of an overlap happening.
void *ft_memmove(void *dest,const void *src, size_t n)
{
	unsigned int	i;
	unsigned char *udest;
	unsigned char *usrc;
	
	i = 0;
	udest = (unsigned char *)dest;
	usrc = (unsigned char *)src;
	//check if src does not overlap dest
	if(usrc < udest)
	{
		//if it doesnt then just copy the corresponding values of src to dest
		while(n-- > 0)
		{
			udest[n] = usrc[n];
		}
	}
	//if it does overlap however , do eitherwise
	else
	{
		//copy whatever us in src into dest, but stop as soon as you reach n amount.
		while(i < n)
		{
			udest[i] = usrc[i];
			i++;
		}
	}
	return ((unsigned char *)dest);
}
