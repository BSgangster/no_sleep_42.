#include "libft.h"

//very long, will explain all of it soon, also need to find a way to shorten the code. by one line
char **ft_strsplit(const char *str,char c)
{
    size_t x;
    size_t y;
    size_t z;
    char **arr_array;
    
    x = 0;
    z = 0;
    if(!(arr_array = (char **)malloc(ft_splitcount(str,c) * sizeof(char *) + 1)))
        return NULL;  
    while(x < ft_splitcount(str,c))
    {
        if(!(arr_array[x] = (char *)malloc(ft_split_len(&str[z],c) * sizeof(char) + 1)))
            return NULL;
        y = 0;
        while (str[z] == c)
			z += 1;
		while (str[z] != c && str[z])
			arr_array[x][y++] = str[z++];
		arr_array[x][y] = '\0';
		x += 1;
    }
    arr_array[x] = NULL;
    return arr_array;
}
