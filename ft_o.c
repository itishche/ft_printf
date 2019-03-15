/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_o.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itishche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/01 10:30:08 by itishche          #+#    #+#             */
/*   Updated: 2019/03/01 10:30:10 by itishche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_o(long int c, t_buff *p, t_flags *flag)
{
	t_float	l;

	if (c == 0)
	{
		l.before = ft_strnew(1);
		l.before[0] = '0';
	}
	else
		l.before = ft_itoa_base((uintmax_t)c, 8, flag);
	l.kdigit = ft_strlen(l.before);	
	if (flag->zero == 1 && flag->dot == 1)
		flag->zero = 0;
	l.k = (flag->width - l.kdigit < 0 ? 0 : flag->width - l.kdigit);
	if (flag->zero == 0)
	{
		if (flag->tochnost >= l.kdigit && flag->width >= flag->tochnost)
			l.k = flag->width - flag->tochnost;
		if (flag->tochnost >= l.kdigit && flag->width < flag->tochnost)
			l.k = flag->tochnost - l.kdigit; 
		
		else
			flag->minus == 0 ? space(p, l.k) : 0;
		if (flag->tochnost >= l.kdigit)
		{
			fzero(p, flag->tochnost - l.kdigit);
			if (flag->width >= flag->tochnost)
				l.k = flag->width - flag->tochnost;
			else
				l.k = 0;
		}
	}
	else
	{
		if (flag->tochnost >= l.kdigit)
		{
			space(p, l.k - (flag->tochnost - l.kdigit));
			fzero(p, flag->tochnost - l.kdigit);
		}
		else
			flag->minus == 0 ? fzero(p, l.k) : 0;
	}
	if (flag->tochnost == 0 && flag->dot == 1
		&& flag->width == 0 && l.before[0] == '0' && flag->hash == 0)
		l.before[0] = '\0';
	if (flag->tochnost == 0 && flag->dot == 1 &&
		flag->width != 0 && l.before[0] == '0' && flag->hash == 0)
		l.before[0] = 32;
	ft_write_buff_and_free(p, l.before);
	flag->minus == 1 ? space(p, l.k) : 0;
	return (0);
}
