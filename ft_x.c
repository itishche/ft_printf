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

int		ft_x(int c, t_buff *p, t_flags *flag)
{
	char	*s;
	int		kdigit;
	int 	k;
	char	*sign;

	if (c == 0)
	{
		s = ft_strnew(1);
		s[0] = '0';
	}
	else
		s = ft_itoa_base((uintmax_t)c, 16, flag);
	flag->X == 1 ? ft_toupper(s) : 0;
	if (flag->hash == 1)
	{
		sign = ft_strnew(2);
		if (flag->X == 1)
		{
			sign = "0X";
			ft_toupper(s);
		}
		if (flag->x == 1)
			sign = "0x";
	}
	kdigit = ft_strlen(s);	
	if (flag->zero == 1 && flag->dot == 1)
		flag->zero = 0;
	flag->width -= (sign && flag->hash == 1) ? 2 : 0;
	k = (flag->width - kdigit < 0 ? 0 : flag->width - kdigit);

	if (flag->zero == 0)
	{
		if (flag->tochnost >= kdigit && flag->width >= flag->tochnost)
			k = flag->width - flag->tochnost;
		if (flag->tochnost >= kdigit && flag->width < flag->tochnost)
			k = flag->tochnost - kdigit; 
		
		else
			flag->minus == 0 ? space(p, k) : 0;
		if (sign && flag->hash == 1)
			ft_write_buff(p, sign);
		if (flag->tochnost >= kdigit)
		{
			fzero(p, flag->tochnost - kdigit);
			if (flag->width >= flag->tochnost)
				k = flag->width - flag->tochnost;
			else
				k = 0;
		}
	}
	else
	{
		if (sign && flag->hash == 1)
			ft_write_buff(p, sign);
		if (flag->tochnost >= kdigit)
		{
			space(p, k - (flag->tochnost - kdigit));
			fzero(p, flag->tochnost - kdigit);
		}
		else
			flag->minus == 0 ? fzero(p, k) : 0;
	}
	if (flag->tochnost == 0 && flag->dot == 1 && flag->width == 0 && s[0] == '0' && flag->hash == 0)
		s[0] = '\0';
	if (flag->tochnost == 0 && flag->dot == 1 && flag->width != 0 && s[0] == '0' && flag->hash == 0)
		s[0] = 32;
	ft_write_buff_and_free(p, s);
	flag->minus == 1 ? space(p, k) : 0;
	return (0);
}
