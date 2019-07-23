#include<stdio.h>
#include "libft/libft.h"

t_list      **make_list(char **str_str)
{
    t_list **head;
    t_list *list;
    t_list *tmp;

    list = (t_list *)malloc(sizeof(t_list));
    list = ft_lstnew(*str_str,0);
    head = &list;
    str_str++;
    while(*str_str)
    {
        tmp = ft_lstnew(*str_str,0);
        ft_lstadd(&list,tmp);
        str_str++;
    }
    return(head);
}

int main(int ac,char **av)
{
    t_list *lst;
    av++;
    lst = *make_list(av);
    while(lst)
    {
        printf("%s\n",(char *)lst->content);
        lst = lst->next;
    }
}