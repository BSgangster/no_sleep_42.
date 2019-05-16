#include "libft.h"

void *ft_memchr(const void *src,int c,size_t n)
{
    size_t i;
    unsigned char *usrc;//convert it into unsigned which is more convenient to work with.
    unsigned char uc;//same with the character.
    
    usrc = (unsigned char *)src;//here we do the actual casting
    uc = (unsigned char *)c;
    i = 0;
    while(i < n)//stop when we reach n.
    {
        if(*usrc == uc)//if the current value in the usrc equals uc then lets return the address of that value in usrc.
        {
            return (void *)&(*usrc);
        }
        i++;
        usrc++;
    }
    return NULL;//return NULL if nothing was found.
}
