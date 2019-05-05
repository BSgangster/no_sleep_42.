
int    ft_strcmp(char *s1, char *s2)
{
    int i;
    i = 0;
    while(s1[i] != '\0' && s2[i] !='\0')
    {
        if(s1[i] != s2[i]) //if the current character we're on isn't equal to the character we're comparing to
            return(s1[i] - s2[i]);//subtract the character with the character we're comparing to using their ascii values
        i++; //incrementing the position we're on ..
    }
    return (s1[i] - s2[i]);
}