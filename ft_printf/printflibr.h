/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libprintf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icarolus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 12:26:29 by icarolus          #+#    #+#             */
/*   Updated: 2019/09/30 13:27:17 by icarolus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTFLIBR_H
# define PRINTFLIBR_H
# include <stdarg.h>
# include <inttypes.h>
# include "libft/libft.h"
# include "stddef.h"

static char g_conv[] = "#0-+*.hh hllljz";

typedef struct	s_arg
{
	int				arg;
	int				left_justify;
	int				force_positive;
	int				prefix;
	int				pad_zero;
	int				filed_width;
	int				precision;
	int				length;
	int				fd;
	int				p_switch;
}				t_arg;

int				ft_printf(const char *restrict format, ...);
int				ft_des_prnf(int fd, const char *restrict format, ...);
t_arg			ft_prnf_new_arg(t_arg *arg);
int				ft_prnf_putint(intmax_t num, t_arg *arg);
int				ft_prnf_putuint(uintmax_t num, t_arg *arg, int conv);
int				ft_prnf_putchar(char c, t_arg *arg);
int				ft_prnf_putstr(char *s, t_arg *arg);
int				ft_prnf_pututf8(char *c, t_arg *arg);
int				ft_prnf_putstr_utf8(char *c, t_arg *arg);
char			*ft_prnf_itoa(uintmax_t n);
char			*ft_prnf_itoa_hex(uintmax_t num, int conv, t_arg *arg);
char			*ft_prnf_itoa_oct(uintmax_t num, t_arg *arg);
char			*ft_prnf_itoa_bin(uintmax_t num);
char			*ft_prnf_int_to_utf8(wchar_t c, t_arg *arg);
void			ft_write(char c, int i);
int				ft_pf_write_until(char c, int j, int fd);
int				ft_pf_putstr(char *s, int fd);
int				ft_pf_putchar(char c, int fd);
int				ft_pf_putstr_until(char *s, int i, int fd);
char			*ft_pf_copy_until(char *c, int *cnt, char **ret);

char			*ft_check_flags(char *s, t_arg *arg);
char			*ft_check_field_with(va_list ap, char *s, t_arg *arg);
char			*ft_check_precision(va_list ap, char *s, t_arg *arg);
char			*ft_check_length(char *s, t_arg *arg);

int				cnv_integer(va_list ap, t_arg *arg, int conv, char *f);
int				cnv_u_integer(va_list ap, t_arg *arg, int conv, char *f);
int				cnv_character(va_list ap, t_arg *arg, char *f);
int				cnv_string(va_list ap, t_arg *arg, char *f);
int				cnv_voidtype(va_list ap, t_arg *arg, int conv, char *f);
int				cnv_utf8(va_list ap, t_arg *arg, char *f);
int				cnv_string_utf8(va_list ap, t_arg *arg, char *f);
#endif
