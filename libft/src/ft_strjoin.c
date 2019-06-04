#include "libft.h"

//very simple function just joins two strings.
char	*ft_strjoin(const char *str,const char *str1)
{
	char	*fresh_string;
	size_t i;
	size_t j;
	
	i = 0;
	j = 0;
	if(!str || !str)
		return (NULL);
	//check if the memory assignment went wrong. Then return NULL
	if(!(fresh_string = malloc((ft_strlen(str) + ft_strlen(str1)) * sizeof(char) + 1)))
		return (NULL);
	//starts adding the first string
	while(str[i])
	{
		fresh_string[i] = str[i];
		i++;
	}
	//starts adding the second string
	while(str1[j])
	{
		fresh_string[i] = str1[j];
		j++;
		i++;
	}
	//fresh_string[i] = str1[j];
	fresh_string[i] = '\0';//get that null char in.
	return (fresh_string);
}
