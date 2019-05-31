#ifndef LIBFT_H
# define LIBFT_H

//Place your imports/includes over here
#include <unistd.h>
#include <stdlib.h>
typedef struct       s_list
{
     void        *content;
     size_t      content_size;
     struct s_list       *next;
}                   t_list;
char *strncat(char *dest, const char *src, size_t n);
char *ft_strnstr(const char *str,const char *substr,size_t n);
int ft_isdigit(int c);
void	ft_putstr_fd(char const *str, int fd);
int	ft_strequ(const char *str,const char *str1);
int ft_strlen(const char *str);
int ft_memcmp(const void *str, const void *str2,size_t n);
void	ft_strclr(char *s);
char **ft_strsplit(const char *str,char c);
void ft_putnbr_fd(int n,int fd);
char *ft_strchr(const char *str, int c);
void	ft_striteri(char *str,void (*f)(unsigned int, char *));
void ft_bzero(void *s, size_t n);
char	*ft_strjoin(const char *str,const char *str1);
int ft_isascii(int c);
void	*ft_memcpy(void *dest, const void *src,size_t n);
char *ft_strstr(const char *str,const char *substr);
void	*ft_memalloc(size_t size);
int ft_isprint(int c);
void ft_putendl_fd(const char *str, int fd);
void	ft_strdel(char **as);
int     ft_strnequ(const char *str,const char *str1,size_t n);
int int_len(int n);
int ft_isalpha(char c);
void *ft_memchr(const void *src,int c,size_t n);
char	*ft_strmap(const char *str,char (*f)(char));
void	ft_putchar_fd(char c, int fd);
void *ft_memset(void *str, int x, size_t n);
char* ft_strcopy(char *dest,const char *src);
int		ft_checkifspace(int character);
size_t ft_split_len(const char *str,char c);
char	*ft_strtrim(const char *s);
void	ft_memdel(void **ap);
void *ft_memmove(void *dest,const void *src, size_t n);
char	*ft_strnew(size_t size);
size_t ft_splitcount(const char *str,char c);
size_t ft_strlcat(char *dest, const char *src,size_t size);
void *ft_memccopy(void *dest, const void *src, int c, size_t n);
char	*ft_strdup(char *str);
int ft_iswhitespace(char c);
int ft_atoi(const char *str);
char    ft_toupper(char c);
int ft_isalnum(int c);
char *ft_itoa(int n);
void	ft_striter(char *str, void (*f)(char *));
char 	*ft_strsub(const char *str, unsigned int n,size_t len);
char *ft_strncopy(char *dest, char *src, int n);
char ft_tolower(char c);
int    ft_strcmp(char *s1, char *s2);
#endif
