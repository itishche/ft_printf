/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_x.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itishche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/01 14:15:49 by itishche          #+#    #+#             */
/*   Updated: 2019/03/01 14:15:50 by itishche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void		ft_toupper(char *s)
{
	int		i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] >= 97 && s[i] <= 122)
			s[i] = s[i] - 32;
		i++;
	}
}

void		x_str(t_flags *flag, unsigned long long c,t_check_x *x)
{
	if (c == 0)
	{
		x->s = ft_strnew(1);
		x->s[0] = '0';
	}
	else
		x->s = ft_itoa_base((intmax_t)c, 16, flag);
	flag->X == 1 ? ft_toupper(x->s) : 0;
	ft_bzero(x->sign, sizeof(x->sign));
	if (flag->hash == 1)
	{
		x->sign[0] = '0';
		x->sign[1] = (flag->X == 1) ? 'X' : 'x';
	}
	x->kdigit = ft_strlen(x->s);
}

static void check_x_with_flag_zero(t_flags *flag, t_buff *p, t_check_x	*x)
{
	if (flag->zero == 0)
	{
		x->k = (flag->tochnost >= x->kdigit && flag->width >= flag->tochnost) ? flag->width - flag->tochnost : x->k;
		if (flag->tochnost >= x->kdigit && flag->width < flag->tochnost)
			x->k = flag->tochnost - x->kdigit; 
		else
			flag->minus == 0 ? space(p, x->k) : 0;
		(x->sign[1] && flag->hash == 1) ? ft_write_buff(p, x->sign) : 0;
		if (flag->tochnost >= x->kdigit)
		{
			fzero(p, flag->tochnost - x->kdigit);
			x->k = flag->width >= flag->tochnost ? flag->width - flag->tochnost : 0;
		}
	}
	else
	{
		(x->sign[1] && flag->hash == 1) ? ft_write_buff(p, x->sign) : 0;
		if (flag->tochnost >= x->kdigit)
		{
			space(p, x->k - (flag->tochnost - x->kdigit));
			fzero(p, flag->tochnost - x->kdigit);
		}
		else
			flag->minus == 0 ? fzero(p, x->k) : 0;
	}
}

int		check_x(t_buff *p, t_flags *flag, unsigned long long c)
{
	t_check_x	x;

	x_str(flag, c, &x);
	flag->zero = (flag->zero == 1 && flag->dot == 1) ? 0 : flag->zero;
	flag->width -= (x.sign[1] && flag->hash == 1) ? 2 : 0;
	x.k = (flag->width - x.kdigit < 0 ? 0 : flag->width - x.kdigit);
	check_x_with_flag_zero(flag, p, &x);
	if (flag->tochnost == 0 && flag->dot == 1 && flag->width == 0 && x.s[0] == '0' && flag->hash == 0)
		x.s[0] = '\0';
	if (flag->tochnost == 0 && flag->dot == 1 && flag->width != 0 && x.s[0] == '0' && flag->hash == 0)
		x.s[0] = 32;
	ft_write_buff_and_free(p, x.s);
	flag->minus == 1 ? space(p, x.k) : 0;
	return (0);
}

int		ft_j_x(intmax_t c, t_buff *p, t_flags *flag)
{
	unsigned long long z;
	
	z = (unsigned long long)c;
	check_x(p, flag, z);
	return (0);
}

int		ft_x(int c, t_buff *p, t_flags *flag)
{
	unsigned long long z;
	
	z = (unsigned long long)c;
	check_x(p, flag, z);
	return (0);
}

int		ft_hh_x(unsigned char c, t_buff *p, t_flags *flag)
{
	unsigned long long z;
	
	z = (unsigned long long)c;
	check_x(p, flag, z);
	return (0);
}

int		ft_h_x(unsigned short int c, t_buff *p, t_flags *flag)
{
	unsigned long long z;
	
	z = (unsigned long long)c;
	check_x(p, flag, z);
	return (0);
}

int		ft_ll_x(unsigned long long c, t_buff *p, t_flags *flag)
{
	unsigned long long z;
	
	z = c;
	check_x(p, flag, z);
	return (0);
}

int		ft_l_x(unsigned long int c, t_buff *p, t_flags *flag)
{
	unsigned long long z;
	
	z = (unsigned long long)c;
	check_x(p, flag, z);
	return (0);
}
