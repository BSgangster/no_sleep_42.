#include "libft.h"

//basically this is just memcopy, however , we stop copying when reach either value c, or we get to the n size of bytes.
void *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
    unsigned char *s;
    unsigned char *usrc;
    int i;
    
    i = 0;
    s = (unsigned char *)dest;
    usrc = (unsigned char *)src;
    while(n--)
    {
        if(usrc[i] == (unsigned char)c)
        {
            s[i + 1] = c;
            return s;
        }
        s[i] = usrc[i];
        i++;
    }
    return NULL;
}

/* Just some test code below , use follwing libs , stdio.h and string.h
int main(void)
{
    char b[11] = "beczuseior";
    char a[20];
    
    ft_memccopy(a,b,'a',7 * sizeof(char));
    //memccopy(a,b,'a',7 * sizeof(char));
    printf("%s",a);
}
*/
