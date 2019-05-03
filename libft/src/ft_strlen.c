//Quite an easy one
int ft_strlen(char *str)
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
