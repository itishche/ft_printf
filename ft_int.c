/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itishche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/21 10:08:07 by itishche          #+#    #+#             */
/*   Updated: 2019/02/21 10:08:10 by itishche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int 	number_of_digits(long long int n)
{
	int count;
	long long int n2;

	count = 0;
	if (n == -9223372036854775808)
	{
		count++;
		n2 = 922337203685477580;
	}
	else
		n2 = ((n < 0) ? (n * (-1)) : n);
	while (n2 / 10 > 0)
	{
		count++;
		n2 = n2 / 10;
	}
	return(count + 1);
}

static char	*my_putnbr(long long int n)
{
	int sign;
	char *s;
	int i;
	long long int n2;

	sign = ((n < 0) ? '-' : '+');
	i = number_of_digits(n);
	s = (char*)malloc(sizeof(char) * i + 1);
	s[i] = '\0';
	if (n == -9223372036854775808)
	{
		s[--i] = 8 + '0';
		n2 = 922337203685477580;
	}
	else
		n2 = (sign == '-' ? n * (-1) : n);
	while (i--)
	{	
		s[i] = n2 % 10 + 48;
		n2 = n2 / 10;
	}
	return (s);
}

int	fzero(t_buff *p, int size)
{
	while (size--)
	{	
		checkbuff(p);
		p->buff[p->i++] = '0';
	}
	return (0);
}

int		check_int(t_buff *p, t_flags *flag, long long int c)
{
	char *s;
	int sign;
	int 	kdigit;
	int k;

	s = my_putnbr(c);
	sign = ((c < 0) ? '-' : '+');
	kdigit = ft_strlen(s);
	if (flag->zero == 1 && flag->dot == 1)
		flag->zero = 0;
	if (flag->space == 1 && flag->plus == 0)
	{
		sign = (sign == '-') ? '-' : ' ';
		flag->plus = 1;
	}
	(flag->plus == 1 || sign == '-') ? flag->width-- : 0;
	k = (flag->width - kdigit < 0 ? 0 : flag->width - kdigit);

	if (flag->zero == 0)
	{
		if (flag->tochnost >= kdigit && flag->width >= flag->tochnost)
			k = k -(flag->tochnost - kdigit);
		if (flag->tochnost >= kdigit && flag->width < flag->tochnost)
			k = flag->tochnost - kdigit;
		else 
			flag->minus == 0 ? space(p, k) : 0;
		if ((sign == '-' && flag->plus == 0) || (flag->plus == 1))
			p->buff[p->i++] = sign;
		if (flag->tochnost >= kdigit)
			fzero(p, flag->tochnost - kdigit);
	}
	else
	{
		if ((sign == '-' && flag->plus == 0) || (flag->plus == 1))
			p->buff[p->i++] = sign;
		if (flag->tochnost >= kdigit)
		{
			space(p, k - (flag->tochnost - kdigit));
			fzero(p, flag->tochnost - kdigit);
		}
		else 
		{	
			if (flag->minus == 0)
				fzero(p, k);
		}
	}
	if (flag->tochnost == 0 && flag->dot == 1 && flag->width == 0 && s[0] == '0')
		s[0] = '\0';
	if (flag->tochnost == 0 && flag->dot == 1 && flag->width != 0 && s[0] == '0')
		s[0] = 32;
	ft_write_buff_and_free(p, s);
	flag->minus == 1 ? space(p, k) : 0;
	return (0);
}

int		ft_zd_int(size_t c, t_buff *p , t_flags *flag)
{
	long long int z;

	z = (long long int)c;
	check_int(p, flag, z);
	return (0);
}
int		ft_hh_int(signed char c, t_buff *p, t_flags *flag)
{
	long long int z;

	z = (long long int)c;
	check_int(p, flag, z);
	return (0);
}

int		ft_h_int(short int c, t_buff *p, t_flags *flag)
{
	long long int z;

	z = (long long int)c;
	check_int(p, flag, z);
	return (0);
}

int		ft_ll_int(long long int c, t_buff *p, t_flags *flag)
{

	check_int(p, flag, c);
	return (0);
}

int		ft_l_int(long int c, t_buff *p, t_flags *flag)
{
	long long int z;

	z = (long long int)c;
	check_int(p, flag, z);
	return (0);
}

int		ft_int(int c, t_buff *p, t_flags *flag)
{
	long long int z;
	
	z = (long long int)c;
	check_int(p, flag, z);
	return (0);
}
