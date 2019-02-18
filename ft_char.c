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
	char s[2];
	
	if (c == NULL)
	{
		s[0] = 0;
		s[1] = '\0';
		// s[2] = '\0';
	}
	else
	{
		s[0] = (unsigned char)c;
		s[1] = '\0';
	}
	if (flag->dot == 1 && flag->tochnost == 0)
		flag->tochnost = 1;
	ft_str(s, p, flag);
	return (0);
}
