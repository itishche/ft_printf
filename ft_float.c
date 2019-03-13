/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_float.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itishche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/11 10:42:24 by itishche          #+#    #+#             */
/*   Updated: 2019/03/11 10:42:29 by itishche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	int		float_function(t_float	*f, t_flags *flag)
{
	int i;
	int k;

	i = flag->tochnost;
	k = 0;
	while (k == 0)
	{
		if (f->after[i] >= '5')
			while (k == 0 && i >= 0)
				if (f->after[i - 1] != '9')
				{
					if ((f->after[i - 1] - 48) % 2 != 0 || (f->after[i - 1] - 48) % 2 == 0 && f->after[i] != '5')
						f->after[i - 1] += 1;
					k = 1;
				}
				else
				{
					k = (i == 1 && f->after[0] == '9') ? 2 : 0;
					f->after[i - 1] = '0';
					i--;
				}
		else
			k = 1;
	}
	f->after[flag->tochnost] = '\0';
	return (k);
}

void	round_float_numbers(t_flags *flag, t_float	*f, long double c, t_buff *p)
{
	int			k;
	long int	i;
	long double	n;

	k = flag->tochnost + 1;
	n = c - (long int)c;
	i = 0;
	f->after  = ft_strnew(k);
	while (k--)
	{
		n = n * 10.0;
		f->after[i++] = (long int)n + 48;
		n = n - (long int)n;
	}
	i = (long int)c;
	if (flag->tochnost == 0 && flag->dot == 1)
	{
		if (f->after[0] >= '5' && (i % 2 != 0 || (i % 2 == 0 && f->after[0] > '5')))
			f->before = my_putnbr_int(i + 1);
		else
			f->before = my_putnbr_int(i);
		free(f->after);
	}
	else
	{
		if ((k = float_function(f, flag)) == 2)
			i++;
		f->before = my_putnbr_int(i);
	}
}

int		ft_minus_zero(double i)
{
	long long *tmp;
	long long bitmove;
	long long j;

	tmp = (long long *)(&i);
	bitmove = *tmp;
	j = bitmove >> 63;
	if (j < 0)
		return (1);
	return (0);
}

int		ft_float(long double c, t_buff *p, t_flags *flag)
{
	t_float		f;
	int			sign;
	int			k;
	long int	i;
	int			kdigit;

	i = (long int)c;
	sign = (i < 0 || ft_minus_zero(c) == 1) ? '-' : '+';
	c = (sign == '-') ? c * (-1.0) : c;
	flag->tochnost = (flag->dot == 0) ? 6 : flag->tochnost;
	round_float_numbers(flag, &f, c, p);
	kdigit = (flag->tochnost != 0) ? ft_strlen(f.before) + ft_strlen(f.after) + 1 : ft_strlen(f.before);
	if (flag->space == 1 && flag->plus == 0)
	{
		sign = (sign == '-') ? '-' : ' ';
		flag->plus = 1;
	}
	if (flag->tochnost != 0)
	{
		flag->zero = 0;
	}
	(flag->plus == 1 || sign == '-') ? flag->width-- : 0;
	k = (flag->width - kdigit < 0 ? 0 : flag->width - kdigit);
	if (flag->zero == 0)
	{
		(flag->minus == 0) ? space(p, k) : 0;
		if ((sign == '-' && flag->plus == 0) || (flag->plus == 1))
			p->buff[p->i++] = sign;
	}
	else
	{
		if ((sign == '-' && flag->plus == 0) || (flag->plus == 1))
			p->buff[p->i++] = sign;
		flag->minus == 0 ? fzero(p, k) : 0;
	}
	ft_write_buff_and_free(p, f.before);
	(flag->tochnost == 0 && flag->hash == 1) ? ft_write_buff(p, ".") : 0;
	if (flag->tochnost != 0)
	{
		ft_write_buff(p, ".");
		ft_write_buff_and_free(p, f.after);
	}
	flag->minus == 1 ? space(p, k) : 0;
	return (0);
}
