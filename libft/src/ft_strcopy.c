#include<stdio.h>

char* ft_strcopy(char *dest,const char *src)
{
	char *start;

	start = dest;

	while(*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return start;
}
