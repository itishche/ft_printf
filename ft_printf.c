/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itishche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 11:04:53 by itishche          #+#    #+#             */
/*   Updated: 2019/02/20 14:39:36 by itishche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_bzero(void *str, size_t n)
{
	size_t			i;
	unsigned char	*s;

	i = 0;
	s = (unsigned char *)str;
	while (i < n)
	{
		s[i] = '\0';
		i++;
	}
}



int		checkflag(char **car, t_flags *flag)
{
	int		i;
	char	*s;

	i = 0;
	if ((s = ft_strchr("#0-+ ", **car)) == NULL)
		return (i);
	while (**car < 49 && **car >=32 )
	{
		if (**car == '#')
		{
			flag->hash = 1;
			(*car)++;
			i++;
		}
		else if (**car == ' ')
		{
			flag->space = 1;
			(*car)++;
			i++;
		}
		else if (**car == '0')
		{
			flag->zero = 1;
			(*car)++;
			i++;
		}
		else if (**car == '+')
		{
			flag->plus = 1;
			(*car)++;
			i++;
		}
		else if (**car == '-')
		{
			flag->minus = 1;
			(*car)++;
			i++;
		}
	}
	return (i);
}

int		checktochnost(char **car, t_flags *flag, va_list ap)
{
	int i;
	char minicar[20];

	i = 0;
	if (**car == '.')
	{
		flag->dot = 1;
		(*car)++;
		if (**car == '*')
		{
			(*car)++;
			flag->tochnost = va_arg(ap, int);
			return (2);
		}
		minicar[i++] = ' ';
		while (**car >= '0' && **car <= '9')
		{
			minicar[i++] = **car;
			(*car)++;
		}
	}
	minicar[i] = '\0';
	flag->tochnost = ft_atoi(minicar);
	return (i);
}

void	checkbuff(t_buff *p)
{
	if (p->i >= 1900)
	{
		write(1, p->buff, p->i);
		p->count += p->i;
		p->i = 0;
	}
}

int		checktype(t_flags *flag, char **car)
{
	int i;

	i = 0;
	if (**car == '%')
	{
		flag->percent = 1;
		(*car)++;
		i++;
	}
	else if (**car == 'c')
	{
		flag->c = 1;
		(*car)++;
		i++;
	}
	else if (**car == 's')
	{
		i++;
		(*car)++;
		flag->s = 1;
	}
	else if (**car == 'd' || **car == 'i')
	{
		flag->d = 1;
		(*car)++;
		i++;
	}
 //    else if (**car == 'i')
 //    {
	// 	flag->i = 1;
	// 	(*car)++;
	// 	i++;
	// }
    //else if (*car == 'o')
    //	flag->o = 1;
	else if (**car == 'u')
	{
		flag->u = 1;
		(*car)++;
		i++;
	}
    //    else if (*car == 'x')
    //        flag->x = 1;
    //    else if (*car == 'X')
    //        flag->X = 1;
    //    else if (*car == 'f')
    //        flag->f = 1;
    //    else if (*car == 'F')
    //        flag->F = 1;
    //    else if (*car == 'p')
    //        flag->p = 1;
	return (i);
}

int		checkall(va_list ap, t_buff *p, t_flags *flag)
{
	if (flag->s == 1)
		return (ft_str(va_arg(ap, void*), p, flag));
	if (flag->c == 1)
		return (ft_char(va_arg(ap, void*), p, flag));
	if (flag->d == 1 && flag->l == 0 && flag->ll == 0 &&
		flag->h == 0 && flag->hh == 0)
		return (ft_int(va_arg(ap, int), p , flag));
	if (flag->d == 1 && flag->l == 1)
		return (ft_l_int(va_arg(ap, long int), p , flag));
	if (flag->d == 1 && flag->ll == 1)
		return (ft_ll_int(va_arg(ap, long long int), p , flag));
	if (flag->d == 1 && flag->h == 1)
		return (ft_h_int(va_arg(ap, short int), p , flag));
	if (flag->d == 1 && flag->hh == 1)
		return (ft_hh_int(va_arg(ap, signed char), p , flag));
	if (flag->u == 1 && flag->l == 0 && flag->ll == 0 &&
		flag->h == 0 && flag->hh == 0)
		return (ft_u(va_arg(ap, unsigned int), p , flag));
	if (flag->u == 1 && flag->l == 1)
		return (ft_l_u(va_arg(ap, unsigned long), p , flag));
	if (flag->u == 1 && flag->ll == 1)
		return (ft_ll_u(va_arg(ap, unsigned long long), p , flag));
	if (flag->u == 1 && flag->h == 1)
		return (ft_h_u(va_arg(ap, unsigned short int), p , flag));
	if (flag->u == 1 && flag->hh == 1)
		return (ft_hh_u(va_arg(ap, unsigned char), p , flag));
	if (flag->percent == 1)
	{
		
		return (ft_char("%", p, flag));
	}
	return (0);
}

int		checkwidth(t_flags *flag, char **car, va_list ap)
{
	int		i;
	char	minicar[20];

	i = 0;
	if (**car == '*')
	{
		(*car)++;
		flag->width = va_arg(ap, int);
		return (1);
	}
	while ((**car >= '0' && **car <= '9') || **car == ' ')
	{
		minicar[i++] = **car;
		(*car)++;
	}
	minicar[i] = '\0';
	flag->width = ft_atoi((const char*)minicar);
	return (i);
}

static	int	poshuk(const char *str, int symb)
{
	int i;
	int k;

	i = 0;
	k = 0;
	while ((k == 0) && (str[i] != '\0'))
	{
		if (str[i] == symb)
			k = 1;
		i++;
	}
	return (k);
}

char		*ft_strchr(const char *str, int symb)
{
	int i;
	int k;

	i = 0;
	if (symb == '\0')
		return ((char *)&str[ft_strlen((char*)str)]);
	k = poshuk(str, symb);
	if (k == 1)
	{
		i = 0;
		while (str[i] != symb)
			i++;
		return ((char *)&str[i]);
	}
	else
		return (0);
}

int		checkmod(t_flags *flag, char **car, va_list ap, t_buff *p)
{
	int		i;
	char	*s;

	i = 0;
	if ((s = ft_strchr("hljzL", **car)) != NULL)
	{
		i = 1;
		if (**car == 'L')
		{
	 		(*car)++;
			flag->L = 1;
		}
		if (**car == 'l')
		{
			(*car)++;
			if (**car == 'l')
			{
				flag->ll = 1;
				(*car)++;
				i = 2;
			}
			else
				flag->l = 1;
		}
		else if (**car == 'h')
		{
			(*car)++;
			if (**car == 'h')
			{
				flag->hh = 1;
				(*car)++;
				i = 2;
			}
			else
				flag->h = 1;
		}
	}
	// else
	// {
	// 	printf("else in checkmod\n");
	// 	(*car)++;
	// 	while ((s = ft_strchr("dDioOuUxXeEfFgGaAcCsSpn%", **car)) == NULL)
	// 	{
	// 		i++;
	// 		p->buff[p->i++] = **car;
	// 		(*car)++;
	// 	}
	// }
	
	return (i);
}

int		checkstr(va_list ap, char *car, t_buff *p)
{
	t_flags	flag;
	int		k;
	
	car++;
	k = 0; //счетчик для смещения потом формата
	ft_bzero(&flag, sizeof(flag));
	k += checkflag(&car, &flag);
	k += checkwidth(&flag, &car, ap);

	k += checktochnost(&car, &flag, ap);


	k += checkmod(&flag, &car, ap, p);
	k += checktype(&flag, &car);
	checkall(ap, p, &flag);
	return (k);
}

int		ft_printf(const char *format, ...)
{
	va_list ap;
	t_buff p;

	va_start(ap, format);
	p.i = 0;
	p.count = 0;
	while (*format)
	{
		if (*format != '%')
			p.buff[p.i++] = *format;
		else
			format += checkstr(ap, (char *) format, &p);
		format++;
		checkbuff(&p);
	}
	p.buff[p.i] = '\0';
	va_end(ap);
	p.count += p.i;
	write(1, p.buff, p.i);
	return (p.count);
}

