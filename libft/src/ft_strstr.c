#include "libft.h"

//strstr is a very simple function, all it does is it finds a subtring in a string and returns the address of the first occurence of that substring.
char *ft_strstr(const char *str,const char *substr)
{
    int x;
    int y;
    
    x = 0;
    y = 0;
    
    if(!substr[0])//if the subtr is just nothing dont even bother looking for it just return the whole source string.
    {
        return ((char *)&str[x]);
    }
    
    while(str[x])
    {
        while((str[x + y] == substr[y]) && substr[y])
            y++;
        if(substr[y] == '\0')
        {
            return ((char *)&substr[x]);//returning the address of the first occurence hence why we use x not y.
        }
        y = 0;
        x++;
    }
    
    return NULL;
}
/*just testing code
int main()
{
    const char haystack[20] = "TutorialsPoint";
    const char needle[10] = "Point";
    char *ret;

    ret = strstr(haystack, needle);

   printf("The substring is: %s\n", ret);
   
   return(0);
}
*/
