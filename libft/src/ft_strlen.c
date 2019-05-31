#include "libft.h"
//Quite an easy one
int ft_strlen(const char *str)
{
  size_t len;//do some research size_t
  len = 0;
  while(*str)
  {
    len++;
    str++;
  }
  return len;
}
