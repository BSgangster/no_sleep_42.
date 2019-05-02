#include<stdlib.h>
#include<stdio.h>

char *strdup(char *str)
{
  char *dup;
  int len;

  len = 0;
  while(str[len])
  {
    len++;
  }

  dup = (char *)malloc(sizeof(char) * len-1);

  len--;
  while(len >= 0)
  {
    dup[len] = str[len];
    len--;
  }

  return dup;
}

int main(void)
{
  printf("%s",strdup("hello"));
}
