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

static int		ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else
	{
		if (power == 0)
			return (1);
		else
		{
			nb = nb * ft_recursive_power(nb, power - 1);
			return (nb);
		}
	}
}

char	*ft_itoa_base(uintmax_t value, int base, t_flags *flag)
{
	int		sign;
	char	*str;
	int		i;

	sign = 0;
	i = 0;
	if (flag->hash == 1 && flag->o == 1)
		sign = 1;
	while (ft_recursive_power(base, i) - 1 < value)
		i++;
	str = (char*)malloc(sizeof(char) * (i + sign));
	str[i + sign] = '\0';
	while (i-- > 0)
	{
		str[i + sign] = (value % base) + (value % base > 9 ? 'a' - 10 : '0');
		value = value / base;
	}
	if (sign != 0)
	{
		str[0] = '0';
		str[1] = (sign == 2) ? 'x' : str[1];
	}
	return (str);
}
