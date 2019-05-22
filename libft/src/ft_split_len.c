#include "libft.h"

//very simple, gets the size of the strings between the delimeters.
size_t ft_split_len(char *str,char c)
{
    size_t x;
    size_t len;
    
    x = 0;
    len = 0;
    while(str[x])
    {
        if(str[x] == c)
            x++;
        else
           len++
           x++;
    }
    return len;
}
