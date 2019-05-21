#include "libft.h"

//same as strstr just in this case we search n amount of character through source string, nothing more.
char *ft_strnstr(const char *str,const char *substr,size_t n)
{
    int x;
    int y;
    size_t i;
    
    x = 0;
    y = 0;
    i = 0;
    
    if(!substr[0])//if the subtr is just nothing dont even bother looking for it just return the whole source string.
    {
        return ((char *)&str[x]);
    }
    
    while(str[x] && (x < n))
    {
        while((str[x + y] == substr[y]) && substr[y] && (x + y < n))
            y++;
        if(substr[y] == '\0')
        {
            return ((char *)&str[x]);//returning the address of the first occurence hence why we use x not y.
        }
        y = 0;
        x++;
    }
    return NULL;
}

/*
int main()
{
    const char haystack[20] = "TutorialsPoint";
    const char needle[10] = "Point";
    char *ret;
    ret = ft_strnstr(haystack, needle,11);
   printf("The substring is: %s\n", ret);
   
   return(0);
}
*/
