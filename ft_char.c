/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_char.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itishche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/11 12:39:20 by itishche          #+#    #+#             */
/*   Updated: 2019/02/11 12:39:24 by itishche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_char(void *c, t_buff *p, t_flags *flag)
{
	unsigned char c2;

	if (flag->width != 0)
		flag->width--;
	if (flag->minus == 0 && flag->zero == 0)
		space(p, flag->width);
	if (flag->minus == 0 && flag->zero == 1)
		fzero(p, flag->width);
	c2 = (unsigned char)c;
	p->buff[p->i++] = c2;
	if (flag->minus == 1)
		space(p, flag->width);
	return (0);
}
