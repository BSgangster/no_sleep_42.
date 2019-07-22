//#include "push_swap.h"
#include "libft/libft.h"
#include <stdio.h>

int is_validio(char **str_str)
{
    while(*str_str)
    {
        while(**str_str)
        {
            if(!ft_isdigit(**str_str))
                {
                    return (0);
                }
            (*str_str)++;
        }
        str_str++;
    }
    return (1);
}

int main(int ac,char **av)
{
    int error;

    error = 0;
    if (ac > 1)
    {
        if (!is_validio(&av[1]))
        {
            error  = 1;
        }
        else
        {
            //solve(av);
            printf("Solve is running now");
        }
        if (error)
            printf("Error");
    }
    else
    {
        printf("Error");
    }
}