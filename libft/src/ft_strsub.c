#include "libft.h"

//Finds a substring inside another string string. Example ft_strsub("hello jeff how are you?",6,6 * sizeof(char)), this will return jeff.
char 	*ft_strsub(const char *str, unsigned int n,size_t len)
{
	//len is this size of substring u wanna return
	size_t i;
	char *substr;

	i = 0;
	//checking if the source string is not just a null value
	if (!str)
	{
		return(NULL);
	}
	//assign the space to the new string if anything goes wrong return NULL
	if (!(substr = malloc(len * sizeof(char) + 1)))
		return(NULL);
	//put the characters of the substring into it's string array.
	while(i < len)
	{
		substr[i] = str[n];
		i++;
		n++;
	}
	substr[i] = '\0';
	return (substr);
}
