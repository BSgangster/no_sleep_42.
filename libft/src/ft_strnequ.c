#include "libft.h"

int     ft_strnequ(const char *str,const char *str1,size_t n)
{
        size_t	i;

        i = 0;
        if (!(str && str1))
                return(0);
	if(!n)
		return(0);
        if(ft_strlen(str) != ft_strlen(str1))
                return(0);
        while(str[i] && (i < n))
        {
                if(str[i] == str1[i])
                        i++;
                else
                        return(0);
        }
        return(1);
}
