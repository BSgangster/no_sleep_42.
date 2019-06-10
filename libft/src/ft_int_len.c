//gets the length of an actual integer not a string
//not going to explain this one it's fairly simple :)
int ft_int_len(int n)
{
    int i;
    
    i = 0;
    if(n < 0)
    {
        i++;
        n *= -1;
    }
    if(n == 0)
    {
        return 1;
    }
    while(n > 0)
    {
    i++;
    n /= 10;
    }
    return i;
}
