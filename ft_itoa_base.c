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

char	*ft_itoa_base(int value, int base)
{
	int		sign;
	char	*str;

	sign = 0;
	if (value < 0)
	{
		sign = 1;
		value *= -1;
	}
	while (ft_recursive_power(base, i) - 1 < value)
		i++;
	str = (char*)malloc(sizeof(char) * i);
	str[i + sign] = '\0';
	while (i-- > 0)
	{
		str[i + sign] = (value % base) + (value % base > 9 ? 'A' - 10 : '0');
		value = value / base;
	}
	if (sign)
		str[0] = '-';
	return (str);
}