/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itishche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/01 11:44:34 by itishche          #+#    #+#             */
/*   Updated: 2019/02/01 11:44:36 by itishche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <locale.h>
#include <stdint.h>
#include <limits.h>

typedef struct	s_buff
{
	char		buff[2000];
	int			i;
	int			count;
}				t_buff;

typedef struct	s_float
{
	char		*before;
	char		*after;
}				t_float;

typedef struct	s_check_x_struct
{
	char		*s;
	int			kdigit;
	int 		k;
	char		sign[3];
}				t_check_x;

typedef struct	s_flags
{
	int			minus;
	int			plus;
	int			space;
	int			hash;
	int			zero;
	int			dot;
	int			width;
	int			tochnost;
	int			j;
	int			z;
	int			l;
	int			ll;
	int			hh;
	int			h;
	int			L;
	int			U;
	int			d;
	int			o;
	int			u;
	int			x;
	int			X;
	int			f;
	int			F;
	int			c;
	int			s;
	int			p;
	int			percent;
	int			minwidth;
}				t_flags;

	int			space(t_buff *p, int size);
	int			ft_printf(const char *str, ...);
	int			ft_atoi(const char *str);
	int			ft_str(void *str, t_buff *p, t_flags *flag);
	int			ft_char(void *c, t_buff *p, t_flags *flag);
	void		ft_bzero(void *str, size_t n);

	int			ft_recursive_power(uintmax_t nb, int power);
	int			ft_o(long int c, t_buff *p, t_flags *flag);
	int			ft_float(long double c, t_buff *p, t_flags *flag);
	
	void		*ft_strjoin(char *s1, char *s2);
	char		*ft_strcpy(char *dst, char *src);
	char		*ft_strcat(char *s1, char *s2);
	char		*ft_itoa_base(uintmax_t value, int base, t_flags *flag);
	int			fzero(t_buff *p, int size);
	char		*ft_strchr(const char *str, int symb);
	void		ft_bzero(void *str, size_t n);
	void		checkbuff(t_buff *p);
	void		ft_bzero(void *str, size_t n);
	int			ft_write_buff(t_buff *p, char *s);
	int			ft_strlen(char *str);
	int 		ft_write_buff_and_free(t_buff *p, char *s);
	char		*ft_strnew(size_t size);

	char		*my_putnbr_int(long long int n);
	char		*my_putnbr_u(unsigned long long n);
	int			check_x(t_buff *p, t_flags *flag, uintmax_t c);
	int			check_u(t_buff *p, t_flags *flag, unsigned long long c);
	int			check_int(t_buff *p, t_flags *flag, long long int c);
	int			ft_ptr(unsigned long int c, t_buff *p, t_flags *flag);


#endif
