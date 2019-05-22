#include "libft.h"

//very long, will explain all of it soon, also need to find a way to shorten the code. by one line
char **ft_strsplit(const str *str,char c)
{
    size_t x;
    size_t y;
    size_t z;
    char **2d_array;
    
    x = 0;
    z = 0;
    if(!(2d_array = (char **)malloc(ft_splitcount(str,c) * sizeof(char *) + 1)))
        return NULL;
    
    while(x < ft_splitcount(str,c))
    {
        if(!2d_array[x] = (char *)malloc(ft_split_len(&str[z],c) * sizeof(char) + 1))
            return NULL;
        y = 0;
        while (str[z] == c)
			z += 1;
		while (str[z] != c && str[z])
			2d_array[x][y++] = str[z++];
		2d_array[x][y] = '\0';
		x += 1;
    }
    2d_array[i] = NULL;
    return 2d_array;
}
