#include "libft.h"

//ft_atoi is the mimic function of atoi, atoi stands for ascii to integer. Converting characters into integers, that's what this function does.
//are in mind that we consider the characters we get are '0' - '9', not alphabet characters or special characters. :)
int ft_atoi(const char *str)
{
    int	ans;
    int	sign;
    int	i;
    
    i = 0;
    sign = 1;
    ans = 0;
    //in the case where it holds no value we gotta return 0
    while(!str[i])
    {
        return(0);
    }
    
    //remove all white spaces
    while(ft_checkifspace(str[i])) //this is just one long if statement so i just decided to make function representing it. Because why not.
    {
        i += 1;
    }
    
    //so removed all the spaces now , obviously in any mathetical sense, the next character should be a sign, - or +, if it is make sign negative or positive, remember signs stays postive if we find no signs in the string. 
    if(str[i] == '-')
    {
        sign = -1;
        i++;
    }
    else if(str[i] == '+')
    {   
	sign = 1;
        i++;
    }
    
    //now for the converting part.
    while(str[i])
    {   
        ans = ans * 10 + (str[i] - '0'); //in our case of the example string '123', this code here will do the follwing, 0 * 10 + 1 = 1, 1 * 10 + 2 = 12, 12 * 10 + 3 = 123, see the pattern? 
        i++; //get to the next character in the string , to do the steps above, that i committed.
    }
    return ans * sign;
}

//test code for this include string.h and stdio.h :) sometimes, I change some things without testing em, so please before u use the code as an example test em.
/*
int main(void)
{
    printf("%d",ft_atoi("123"));
    printf("%d",atoi("123"));
}
*/
