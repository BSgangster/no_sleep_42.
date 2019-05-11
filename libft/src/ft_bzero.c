#include "libft.h"

//bzero is basically memset but , we don't replace space with any type of int , we just replace it with zeros.
//ver basic stuff.
void ft_bzero(void *s, size_t n)
{
    int i;
    unsigned char *start;
    
    i = 0;
    start = (unsigned char *)s;
    while(n--)
    {
        start[i++] = 0;
    }
}
