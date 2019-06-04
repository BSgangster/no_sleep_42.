#include "libft.h"

size_t ft_strlcat(char *dest, const char *src,size_t size)
{
	size_t i;
	size_t len;
    
	i = 0;
	len = 0;
	while(dest[len] && len < size)//loop through dest string until we reach the end.
        	len++;
    
    	i = len;//i, is going keep track of where we are in the src string, but subtracting it with len, so we start from position 0,1,2,3....etc
    
	while(src[len - i] && len + 1 < size)//loop until we get to the end of the source loop, or until we reach the size we wanna copy.
    	{
		dest[len] = src[len - i];
		len++;
	}
	if(i < size)//NUL-terminate the string just for safety.
		dest[len] = '\0';
	return(i + ft_strlen(src));//let's return the actaul size of the string we concat.
}
