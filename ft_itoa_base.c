/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itishche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/01 10:22:57 by itishche          #+#    #+#             */
/*   Updated: 2019/03/01 10:22:59 by itishche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_itoa_base(uintmax_t value, int base, t_flags *flag)
{
	int			sign;
	char		*str;
	int			i;
	uintmax_t	temp;

	sign = 0;
	i = 1;
	temp = value;
	while (temp /= base)
		i++;
	if (flag->hash == 1 && flag->o == 1)
		sign = 1;
	str = (char*)malloc(sizeof(char) * (i + sign));
	str[i + sign] = '\0';
	while (i-- > 0)
	{
		str[i + sign] = (value % base) + (value % base > 9 ? 'a' - 10 : '0');
		value = value / base;
	}
	if (sign != 0)
		str[0] = '0';
	return (str);
}
