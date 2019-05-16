#include "libft.h"

int ft_memcmp(const void *str, const void *str2,size_t n)
{
    size_t i;//notices that in this case i is not only used to go through the strings but also used to keep track of the value that are the same.
    unsigned char *ustr;
    unsigned char *ustr2;
    
    i = 0;
    ustr = (unsigned char *)str;
    ustr2 = (unsigned char *)str2;
    
    while(i < n && ustr[i] == ustr2[i])//this loop checks if all the characters so far are all the same.
    {
       i++; 
    }
    
    if(i == n)
    {
        return(0);
    }
    
    return(ustr[i] - ustr2[i]);//here is the important process we subtract string1 from string2 basically because at the end of the day they basically just integers.
}
