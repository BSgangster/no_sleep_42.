
int ft_isalnum(int c)
{
    if(c > 1) //this function is checking if a single character is alphanumeric so if there are two characters or more it's no longer a alphanumeric
        return(0);
    if(c >= 'a' && c <= 'z' || c >= 'A'&& c <= 'Z' || c >= '0' && c <='9' || c >= 0 && c <= 9) //alphanumeric conditions
        return(1);
    return(0);
}