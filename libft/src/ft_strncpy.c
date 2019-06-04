#include "libft.h"
//okay this is basically ft_strcopy, but instead of copying everything from the source array, we just copy an n amount of of shit.
char *ft_strncpy(char *dest, char *src,size_t n)
{
	char *start = dest;//same as we what we did in ft_strcopy
	
	//run the loop until we hit the end of the source string, but if we ever reach a point where n is sorry stop running the loop.
	//that is how this loop runs
	while(*src && n > 0)
	{
		*dest = *src;//copying what we can from src
		dest++;
		src++;
		n--;//decrementing n, because it's the value of that decides when this loop should end too
	}
	while(n > 0)
	{
		*dest = '\0';//make string end
		dest++;
		n--;
	}
	return start;//return copied string arrays header address. 
}
