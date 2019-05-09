int ft_isprint(int c)
{
    if(c >= 32 && c <= 127) //the first 31 characters in the ascii are control characters, that explains everything.
        return(1); //if the given character is within 32 and 127 then it is printable

    return(0);
}