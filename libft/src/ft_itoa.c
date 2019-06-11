#include "libft.h"

//convert an actual integer into an string that represents that integer.
char *ft_itoa(int n)
{
    int len;
    char *str;
    if (n == -2147483648)
		return (ft_strdup("-2147483648"));
    len = ft_int_len(n);//this function is in the library i use, it gets the length of the integer.
    if(!(str = (char *)malloc((len+1) * sizeof(char))))
	return (NULL);
    if(n < 0)//checks if n is negative if so then put a minus sign in the string
    {
        str[0] = '-';
        n *= -1;
    }
        
    str[len--] = '\0';   
    while(len > 0)
    {
        str[len] = (n % 10) + '0'; //put the last number in the integer in the last position of the string and decrement over every instance of the loop.
        n /= 10;
        len--;
    }
    if(str[0] != '-')//if it's a negative number then make sure you don't replace the minus with a zero.
        str[len] = n % 10 + '0';
    return str;
}

/*just test code
int main()
{
        char *str;
        str = ft_itoa(-1);
        printf("Decimal value = %s\n", str);
        free(str);
}
*/
