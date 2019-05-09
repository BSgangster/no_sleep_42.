
/*
The ascii has 127 characters and all these characters have hexidecimal values,
this function will check if a given character/value is within these 127 character sets
*/
int ft_isascii(int c)
{
    if(c >= 0 && c <= 127)
        return(1);
    return(0);
}