#include "libft.h"

long    ft_power(long num,long n)
{
    long ans;

    ans = 1;
    while(n)
    {
        ans *= num;
        n--; 
    }
    return (ans);    
}
