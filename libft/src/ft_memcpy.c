#include "libft.h"
//memcpy is a function used to copy  x  amount of objects from src array to your destination array. Not really a tough one, it's similar strcopy but in this case we work with not a specific data type.
//hence the void pointers.
void	*ft_memcpy(void *dest, const void *src,size_t n)
	{

		size_t		i;//used to index through the two arrays
		unsigned char	*udest;//these replacement vars are formed to work with an array/s who will anything text related.
		unsigned char	*usrc;

		i = 0;	
		udest = (unsigned char *)dest;//casting the dest and src arrays to unsigned char pointers so that once again we can work with text(or ASCII vals representd with ints).
		usrc = (unsigned char *)src;
		while(i < n)
		{
			if(dest == '\0' && src == '\0')
				break;
			udest[i] = usrc[i];
			i += 1;
		}
		return dest;//we return dest, not adding '/0'. 

	}

/*
int main(void)
{
	char dest[6];
	char src[6];
	
	strcpy(src,"hello");

	ft_memcpy(dest,src,6 * sizeof(char));

	printf("%s",dest);
}

please remove this code, this is test code if u wanna see how it works etc, here u go.
to run this code u most include stdio.h and string.h :)
*/
