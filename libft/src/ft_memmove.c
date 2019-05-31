#include <stdlib.h>
#include "libft.h"
//memmove is basically memcpy but it handles the cases of an overlap happening.
void *ft_memmove(void *dest,const void *src, size_t n)
{
	unsigned int	i;

	i = 0;
	//check if src does not overlap dest
	if((unsigned char *)src < (unsigned char *)dest)
	{
		//if it doesnt then just copy the corresponding values of src to dest
		while(n-- > 0)
		{
			(unsigned char *)dest[n] = (unsigned char *)src[n];
		}
	}
	//if it does overlap however , do eitherwise
	else
	{
		//copy whatever us in src into dest, but stop as soon as you reach n amount.
		while(i < n)
		{
			(unsigned char *)dest[i] = (unsigned char *)src[i];
			i++;
		}
	}
	return ((unsigned char *)dest);
}
