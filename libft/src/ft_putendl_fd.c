#include "libft.h"

//writing every character in the string, using the given file description.
void ft_putendl_fd(const char *str, int fd)
{
    while(*str)
    {
        write(fd,&(*str),1);
        str++;
    }
    write(fd,"\n",1);
}
