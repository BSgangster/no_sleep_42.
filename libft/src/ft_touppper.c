#include "libft.h"

int	ft_toupper(int c)
{
    if(c >= 'a' && c <= 'z') //if the given string or character has characters that are within the range of these lower case characters 
        return(c - 32); //subtract 32 which will bring it to the uppercase letter in the ascii
    return(c);       
}
