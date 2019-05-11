#include "libft.h"

//ft_atoi is the mimic function of atoi, atoi stands for ascii to integer. Converting characters into integers, that's what this function does.
//are in mind that we consider the characters we get are '0' - '9', not alphabet characters or special characters. :)
int ft_atoi(const char *str)
{
    int ans;
    
    ans = 0;
    while(*str)
    {   
        ans = ans * 10 + (*str - '0'); //in our case of the example string '123', this code here will do the follwing, 0 * 10 + 1 = 1, 1 * 10 + 2 = 12, 12 * 10 + 3 = 123, see the pattern? 
        str++; //get to the next character in the string , to do the steps above, that i committed.
    }
    return ans;
}

//test code for this include string.h and stdio.h :)
/*
int main(void)
{
    printf("%d",ft_atoi("123"));
    printf("%d",atoi("123"));
}
*/
