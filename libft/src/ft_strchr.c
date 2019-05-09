
char *ft_strchr(const char *str, int c)
{
    int index;
    index = 0;
    while(str[index] != c && str[index] != '\0') //while the the character given the parameter variable c hasn't occurred in the parameter str string
    {
        index += 1; //move to the next index
    }
    if(str[index] == c) //if the an index in the string is equal to c
    {
        return((char *)&str[index]); //returning a pointer to the first occurrence of c character
    }
    return(NULL); //if c isn't found in str
}