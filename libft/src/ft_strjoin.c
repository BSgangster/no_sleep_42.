#include "libft.h"

//very simple function just joins two strings.
char	*ft_strjoin(const char *str,const char *str1)
{
	char	*fresh_string;
	size_t i;
	size_t j;
	
	i = 0;
	j = 0;
	//check if the memory assignment went wrong. Then return NULL
	if(!(fresh_string = malloc((strlen(str) + strlen(str1)) * sizeof(char) + 1)))
		return (NULL);
	//starts adding the first string
	while(str[i])
	{
		fresh_string[i] = str[i];
		i++;
	}
	//starts adding the second string
	while(str[j])
	{
		fresh_string[i + j] = str1[j];
		j++;
	}
	fresh_string[i + j] = str1[j];
	fresh_string[i + j + 1] = '\0';//get that null char in.
	return (fresh_string);
}
