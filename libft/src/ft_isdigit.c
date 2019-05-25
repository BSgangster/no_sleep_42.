#include "libft.h"

//easy stuff
int ft_isdigit(int c)
{
    if(c >= '0' && c <= '9') //Just use the one statment saying c >= 0 && c <= 9 is redundant to c >= '0' && c <= '9', as '0' and '9' are actually just the integers 0 and 9.
    {
        return(1);
    }
    return(0);
}
