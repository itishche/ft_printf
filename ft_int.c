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

int		ft_int(void *c, t_buff *p, t_flags *flag)
{
	int				i;
	long int		li;
	long long int	lli;
	short int		hi;
	signed char		hhi;


	if (flag->l == 1)
	{
		li = (long int)c;
		printf("l\n");
	}
	if (flag->ll == 1)
	{
		lli = (long long int)c;
		printf("ll\n");
	}
	if (flag->h == 1)
	{
		hi = (short int)c;
		printf("h\n");
	}
	if (flag->hh == 1)
	{
		hhi = (signed char)c;
		printf("hh\n");
	}
	return (0);
}
