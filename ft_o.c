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

int		ft_o(int c, t_buff *p, t_flags *flag)
{
	char	*s;
	int		kdigit;
	int 	k;

	if (c == 0)
	{
		s = ft_strnew(1);
		s[0] = '0';
	}
	else
		s = ft_itoa_base((uintmax_t)c, 8, flag);
	kdigit = ft_strlen(s);	
	if (flag->zero == 1 && flag->dot == 1)
		flag->zero = 0;
	k = (flag->width - kdigit < 0 ? 0 : flag->width - kdigit);

	if (flag->zero == 0)
	{
		if (flag->tochnost >= kdigit && flag->width >= flag->tochnost)
			k = flag->width - flag->tochnost;
		if (flag->tochnost >= kdigit && flag->width < flag->tochnost)
			k = flag->tochnost - kdigit; 
		
		else
			flag->minus == 0 ? space(p, k) : 0;
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
