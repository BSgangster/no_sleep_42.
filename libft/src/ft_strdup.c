#include<stdlib.h>

//makes a complete duplicate of an array, well string array mostly
char *strdup(char *str)
{
  char *dup;//this will be the duplicate array of course
  int len;//length array to keep track of the length of the ^^str array

  len = 0;
  //loop through the str to get the length of it
  while(str[len])
  {
    len++;
  }

  dup = (char *)malloc(sizeof(char) * len-1);//make the array dup now have the size of the array str, but using the len value in the malloc

  len--;//change to being one less because arrays start at 0. So last index could not be length of the array, it has to be one less.
  //in this loop we literally just duplicate str, but making dup have the same values in side it's array space.
  while(len >= 0)
  {
    dup[len] = str[len];
    len--;
  }

  return dup;//return the duplicate.
}
