//fuck it i aint commenting this it's too easy
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
