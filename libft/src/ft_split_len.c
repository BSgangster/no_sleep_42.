#include "libft.h"

//very simple, gets the size of the strings between the delimeters.
size_t ft_split_len(char *str,char c)
{
    size_t x;
    
    x = 0;
    while(str[x] != c)
    {
        x++;
    }
    return x;
}
