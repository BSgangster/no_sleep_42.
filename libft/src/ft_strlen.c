//fuck it i aint commenting this it's too easy
int ft_strlen(char *str)
{
  int len;
  len = 0;
  while(*str)
  {
    len++;
    str++;
  }
  return len;
}
