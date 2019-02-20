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

int  checkflag(char **car, t_flags *flag)
{
	int i;

	i = 0;
	if (**car == '-')
	{
		flag->minus = 1;
		(*car)++;
		i++;
	}
	if (**car == '+')
	{
		flag->plus = 1;
		(*car)++;
		i++;
	}
	if (**car == '#')
	{
		flag->hash = 1;
		(*car)++;
		i++;
	}
	if (**car == ' ')
	{
		flag->space = 1;
		(*car)++;
		i++;
	}
	if (**car == '0')
	{
		flag->zero = 1;
		(*car)++;
		i++;
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
	//else if (*car == 'd')
	//	flag->d = 1;
    //else if (*car == 'i')
    //	flag->i = 1;
    //else if (*car == 'o')
    //	flag->o = 1;
    //else if (*car == 'u')
    //	flag->u = 1;
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
	if (flag->percent == 1)
		return (ft_write_buff(p, "%"));
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
	while (**car >= '0' && **car <= '9')
	{
		minicar[i++] = **car;
		(*car)++;

	}
	minicar[i] = '\0';
	flag->width = ft_atoi((const char*)minicar);
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
    // printf("flag->minus = %d\n", flag.minus);
    // printf("flag->plus = %d\n", flag.plus);
    // printf("flag->hash = %d\n", flag.hash);
    // printf("flag->zero = %d\n", flag.zero);
    // printf("flag->width = %d\n", flag.width);
    // printf("flag->dot = %d\n", flag.dot);
    // printf("flag->tochnost = %d\n", flag.tochnost);
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

