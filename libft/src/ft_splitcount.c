#include "libft.h"

//won't reeally be useful for other funxtions, will only really be useful for ft_strsplit.c, as it counts how many strings can be split, using the delimeter c.
size_t ft_splitcount(const char *str,char c)
{
    size_t x;
    size_t y;
    
    x = 0;
    y = 0;
    while(str[x])
    {
        if(str[x] != c)
            y+=1;
        while(str[x] != c && str[x + 1])
            x++;
        x++;
    }
    return y;
}
