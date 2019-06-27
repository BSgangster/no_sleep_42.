/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icarolus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 18:49:28 by icarolus          #+#    #+#             */
/*   Updated: 2019/06/27 15:14:42 by icarolus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>

typedef struct	s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}				t_list;
char			*ft_strncat(char *dest, const char *src, size_t n);
char			*ft_strnstr(const char *str, const char *substr, size_t n);
void			ft_lstadd(t_list **alst, t_list *new);
int				ft_isdigit(int c);
void			ft_putstr_fd(char const *str, int fd);
int				ft_strequ(const char *str, const char *str1);
t_list			*ft_lstnew(void const *content, size_t content_size);
size_t			ft_strlen(const char *str);
int				ft_memcmp(const void *str, const void *str2, size_t n);
void			ft_putnbr(int n);
void			ft_strclr(char *s);
char			**ft_strsplit(const char *str, char c);
void			ft_putnbr_fd(int n, int fd);
void			ft_lstiter(t_list *lst, void (*f)(t_list *elem));
char			*ft_strchr(const char *str, int c);
void			ft_striteri(char *str, void (*f)(unsigned int, char *));
void			*ft_bzero(void *s, size_t n);
char			*ft_strjoin(const char *str, const char *str1);
int				ft_isascii(int c);
void			*ft_memcpy(void *dest, const void *src, size_t n);
char			*ft_strstr(const char *str, const char *substr);
void			*ft_memalloc(size_t size);
long			ft_power(long num, long n);
void			ft_putendl(char const *s);
void			*ft_memccpy(void *dest, const void *src, int c, size_t n);
char			*ft_strcat(char *s1, const char *s2);
int				ft_isprint(int c);
void			ft_putendl_fd(char const *s, int fd);
void			ft_strdel(char **as);
t_list			*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
int				ft_strnequ(const char *str, const char *str1, size_t n);
int				ft_toupper(int c);
void			ft_putchar(char c);
int				ft_int_len(int n);
char			*ft_strrchr(const char *s, int c);
int				ft_isalpha(int c);
void			*ft_memchr(const void *src, int c, size_t n);
char			*ft_strmap(const char *str, char (*f)(char));
void			ft_putchar_fd(char c, int fd);
void			*ft_memset(void *str, int x, size_t n);
void			ft_lstdel(t_list **alst, void (*del)(void *, size_t));
int				ft_strncmp(const char *s1, const char *s2, size_t n);
char			*ft_strcpy(char *dest, const char *src);
int				ft_checkifspace(int character);
size_t			ft_split_len(const char *str, char c);
char			*ft_strmapi(const char *s, char (*f)(unsigned int, char));
char			*ft_strtrim(const char *s);
void			ft_memdel(void **ap);
void			*ft_memmove(void *dest, const void *src, size_t n);
char			*ft_strnew(size_t size);
size_t			ft_splitcount(const char *str, char c);
void			ft_putstr(char const *s);
size_t			ft_strlcat(char *dest, const char *src, size_t size);
long long int	ft_atoi_base(const char *str, size_t base, const char *format);
char			*ft_strdup(const char *str);
int				ft_iswhitespace(char c);
int				ft_atoi(const char *str);
int				ft_isalnum(int c);
void			ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
char			*ft_itoa(int n);
void			ft_striter(char *str, void (*f)(char *));
char			*ft_strsub(const char *str, unsigned int n, size_t len);
char			*ft_strncpy(char *dest,const char *src, size_t n);
int				ft_tolower(int c);
int				ft_strcmp(const char *s1, const char *s2);
#endif
