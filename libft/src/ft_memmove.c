#include <stdlib.h>
#include "libft.h"

//memmove is like memcpy but instead of copying everything one by one, we copy them into a buffer , and then into our destination array.
//Why? Because this way we can deal with cases where addresses overlap.
void *ft_memmove(void *dest,const void *src, size_t n)
{
    unsigned char *bufferDest = NULL;//in this case we need a buffer because we'll deal with overlapping data
    
    unsigned char *udest;//once again we don't wanna work with void types so we cast to unsigned chars
    unsigned char *usrc;
    
    udest = (unsigned char *)dest;
    usrc = (unsigned char *)src;
    
    bufferDest = malloc(n * sizeof(unsigned char));//we allocate the space that should be used bufferDest
    
    if(bufferDest == NULL)//if bufferDest is still just a pointer pointing to NULL end this program now
    {
        return NULL;    
    }
    else{
    ft_memcpy(bufferDest, usrc,n);//copy the n amount of things from usrc, in order, into bufferDest
    ft_memcpy(udest,bufferDest,n);//then from there copy the things from bufferDest into ft_memcopy
    //remember that the reason bufferDest exists is because if we just used the two arrays udest and usrc we'd have a problem with overlapping addresses.
    free(bufferDest);
    }
    
    return dest;
}
