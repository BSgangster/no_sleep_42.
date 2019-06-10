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
int ft_atoi(const char *str);
void ft_bzero(void *s, size_t n);
int		ft_checkifspace(int character);
int	ft_isalnum(int c);
int ft_isalpha(int c);
int ft_isascii(int c);
int ft_isdigit(int c);
int	ft_isprint(int c);
int ft_iswhitespace(char c);
char *ft_itoa(int n);
void	*ft_memalloc(size_t size);
void *ft_memccpy(void *dest, const void *src, int c, size_t n);
void *ft_memchr(const void *src,int c,size_t n);
int ft_memcmp(const void *str, const void *str2,size_t n);
void	*ft_memcpy(void *dest, const void *src,size_t n);
void	ft_memdel(void **ap);
void *ft_memmove(void *dest,const void *src, size_t n);
void *ft_memset(void *str, int x, size_t n);
void	ft_putchar(char c);
void	ft_putchar_fd(char c, int fd);
void	ft_putendl(char const *s);
void	ft_putendl_fd(char const *s, int fd);
void	ft_putnbr(int n);
void ft_putnbr_fd(int n,int fd);
void	ft_putstr(char const *s);
void	ft_putstr_fd(char const *str, int fd);
size_t ft_split_len(const char *str,char c);
size_t ft_splitcount(const char *str,char c);
char	*ft_strcat(char *s1, const char *s2);
char *ft_strchr(const char *str, int c);
void	ft_strclr(char *s);
int    ft_strcmp(const char *s1,const char *s2);
char* ft_strcpy(char *dest,const char *src);
void	ft_strdel(char **as);
char	*ft_strdup(char *str);
int	ft_strequ(const char *str,const char *str1);
void	ft_striter(char *str, void (*f)(char *));
void	ft_striteri(char *str,void (*f)(unsigned int, char *));
char	*ft_strjoin(const char *str,const char *str1);
size_t ft_strlcat(char *dest, const char *src,size_t size);
int ft_strlen(const char *str);
char	*ft_strmap(const char *str,char (*f)(char));
char	*ft_strmapi(const char *s, char (*f)(unsigned int, char));
char *ft_strncat(char *dest, const char *src, size_t n);
int	ft_strncmp(const char *s1, const char *s2, size_t n);
char *ft_strncpy(char *dest, char *src,size_t n);
int     ft_strnequ(const char *str,const char *str1,size_t n);
char	*ft_strnew(size_t size);
char *ft_strnstr(const char *str,const char *substr,size_t n);
char	*ft_strrchr(const char *s, int c);
char **ft_strsplit(const char *str,char c);
char *ft_strstr(const char *str,const char *substr);
char 	*ft_strsub(const char *str, unsigned int n,size_t len);
char	*ft_strtrim(const char *s);
int	ft_tolower(int c);
int	ft_toupper(int c);
int ft_int_len(int n);
#endif
