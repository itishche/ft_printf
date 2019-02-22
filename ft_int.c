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

// char	*ft_strrev(char *s)
// {
// 	int		i;
// 	int		j;
// 	char	c;

// 	i = ft_strlen(s);
// 	i--;
// 	j = 0;
// 	while (j < i)
// 	{
// 		c = s[j];
// 		s[j] = s[i];
// 		s[i] = c;
// 		j++;
// 		i--;
// 	}
// 	return (s);
// }

int 	number_of_digits(long long int n)
{
	int count;

	count = 0;
	n = (n < 0 ? n * (-1) : n);
	// if (n == −9223372036854775808)
	// {
	// 	count++;
	// 	n = 922337203685477580;
	// }
	while (n / 10 > 0)
	{
		count++;
		n = n / 10;
	}
	return(count + 1);
}

char	*my_putnbr(long long int n)
{
	char sign;
	char *s;
	int i;


	sign = ((n < 0) ? '-' : '+');
	i = number_of_digits(n);
	s = (char*)malloc(sizeof(char) * i + 1);
	// if (n == −9223372036854775808)
	// {
	// 	s[i++] = 8;
	// 	n = 922337203685477580;
	// }
	// else 
		n = (sign == '-' ? n * (-1) : n);
	s[i] = '\0';
	while (i--)
	{	
		s[i] = n % 10 + 48;
		n = n / 10;
	}
	return (s);
}

int	fzero(t_buff *p, int size)
{
	while (size--)
	{	
		checkbuff(p);
		p->buff[p->i++] = '0';
	}
	return (0);
}

int		check_int(t_buff *p, t_flags *flag, long long int c)
{
	char *s;
	char sign;
	int 	kdigit;

	s = my_putnbr(c);
	printf("s = %s\n", s);
	sign = ((c < 0) ? '-' : '+');
	kdigit = ft_strlen(s);
	(flag->plus == 1 || sign == '-') ? flag->width-- : 1;
	if (flag->zero == 0)
	{
		if (flag->minus == 0)
			space(p, flag->width - kdigit);
		if ((sign == '-' && flag->plus == 0) || (flag->plus == 1))
			p->buff[p->i++] = sign;
		// ft_write_buff_and_free(p, s);
		// if (flag->minus == 1)
		// 	space(p, flag->width - kdigit);
	}
	else
	{
		if ((sign == '-' && flag->plus == 0) || (flag->plus == 1))
			p->buff[p->i++] = sign;
		if (flag->minus == 0)
			fzero(p, flag->width - kdigit);
		//флаг ноль игрнорируется, если у нас есть флаг минус и ставятся пробелы
	}
	ft_write_buff_and_free(p, s);
	if (flag->minus == 1)
		space(p, flag->width - kdigit);
	return (0);
}

int		ft_int(void *c, t_buff *p, t_flags *flag)
{
	long long int z;
	
	char *s;


	
	printf("ft_int\n");
	//или все записать в лонг лонг инт??   [−9 223 372 036 854 775 808, +9 223 372 036 854 775 807]
	z = (long long int)c;
	/*
    >   ФЛАГИ
     */
   //        minus;//выводимое значение выравнивается по левому краю в пределах минимальной ширины поля
    //В отсутствие этого знака по правому
      //     plus;//всегда указывать знак (плюс или минус) для выводимого десятичного числового значения.В отсутствие этого знака знак только для отрицательных чисел
// space;//помещать перед результатом пробел, если первый символ значения не знак
    // В отсутствие этого знака   Вывод может начинаться с цифры.
    //Символ + имеет больший приоритет, чем пробел. Используется только для десятичных числовых значений.
           // zero;//дополнять поле до ширины, указанной в поле ширина управляющей последовательности, символом 0
    //В отсутствие этого знака дополнять пробелами

// СНАЧАЛА ЗАПИСАТЬ ЧИСЛО В СТРОКУ 
	
	
	check_int(p, flag, z);
	
	return (0);
}
