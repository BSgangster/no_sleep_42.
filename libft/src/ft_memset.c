#include "libft.h"

/*memset is basically a function that fills up a certain space in memory(like an array for example)
 *
 *
 *char *memset(char *src_address, int x, size_t n)
 	- where src_adress is just the arrays starting address, or whereever u want it to be
	- x is the value to be filled in the space
	- n is the size of the space u wanna fill up.

 * example:
 *
 * char word[50];
 * memset(word,'A',8 * sizeof(char));
 * this will fill word up A's until the 8th index. Remember the char A is actaully an integer value of 65 or something, I think, fuck who knows
 */

void *ft_memset(void *str, int x, size_t n)
{
	unsigned char *ptr;
	size_t count;

	ptr = str; // pointing to the string we useing that is pointer to the block of memory to fill.
	count = 0; // count we going to use to move through the string
	while(count < n)// while the count is smaller than n it will replace the space in memory with x
	{
		ptr[count] = x; // changing each space in memory with x
		count++;
	}
	return (str); //returning the str with the replaced memory.
}
//well, i assume since memset only fills up space in memory we do not have to add any null vals to the end of the fill ups. Correct me if i'm wrong tho.
