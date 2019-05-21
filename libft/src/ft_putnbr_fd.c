#inlcude "libft.h"

//changes a string that represents a number, into an integer.
void ft_putnbr_fd(int n,int fd)
{
    char c;
    
    if(n == -2147483648)//if we get this value then straight up write it.
    {
        write(fd,"-2147483648",11);
    }
    
    if(n < 0)//if n is less 0 then we will negative sign so make sure u add the negative sign in.
    {
        write(fd,"-",1);
    }
    
    if(n < 10)//if n is a single number then write this number into the file
    {
        c = n + '0';
        write(fd,&c,1);
    }
    else
    {
        ft_putnbr_fd((n / 10), fd);//shorten the number.
        ft_putnbr_fd((n % 10),fd);//get the last digit which is what we want.
    }
}
