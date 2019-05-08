#include<stdio.h>
#include<string.h>

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

char *ft_memset(char *src, int x, size_t n)
{
	unsigned char *start;

       	start = (unsigned char*)src;//gives us that 0-255 char range,letting us treat chars as ints as well.
	while(n--)
	{
		*src = x;
		src++;
	}
	return start;
}
//well, i assume since memset only fills up space in memory we do not have to add any null vals to the end of the fill ups. Correct me if i'm wrong tho.
