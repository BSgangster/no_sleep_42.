#include<stdio.h>
char *ft_strncopy(char *dest, char *src, int n)
{
	char *start = dest;
	
	while(*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	dest = '\0';
	return start;
}

int main(void)
{
	char dest[20];
	ft_strncopy(dest,"hello there human, how are you",10);
	printf(dest);
}
