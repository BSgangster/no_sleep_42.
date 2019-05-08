
int ft_isalpha(char c)
{
    if(c >='a' && c <= 'z' || c>= 'A' && c <= 'Z')
        return(1); //return 1 if the variable c is a character
    return(0); //if not give us 0
}
