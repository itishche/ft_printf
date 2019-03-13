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
	while (**car < 49 && **car >= 32 && 
		(**car == ' ' ||  **car == '#' ||  **car == '-' ||  **car == '+' || **car == '0'))
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
	else if (**car == 'o' || **car == 'O')
	{
		flag->o = 1;
		(*car)++;
		i++;
	}
	else if (**car == 'u')
	{
		flag->u = 1;
		(*car)++;
		i++;
	}
	else if (**car == 'U')
	{
		flag->U = 1;
		(*car)++;
		i++;
	}
	else if (**car == 'X')
	{
		flag->X = 1;
		(*car)++;
		i++;
	}
	else if (**car == 'x')
	{
		flag->x = 1;
		(*car)++;
		i++;
	}
	else if (**car == 'f' || **car == 'F')
	{
		flag->f = 1;
		(*car)++;
		i++;
	}
	else if (**car == 'p')
	{
		flag->p = 1;
		(*car)++;
		i++;
	}
	else
		flag->minwidth = 1;
	return (i);
}

int		ft_flag_d(va_list ap, t_buff *p, t_flags *flag)
{
	if (flag->l == 0 && flag->ll == 0 &&
		flag->h == 0 && flag->hh == 0 && flag->j == 0 && flag->z == 0)
		return (check_int(p, flag, (long long int)(int)va_arg(ap, void*)));
	else if (flag->l == 1)
		return (check_int(p, flag, (long long int)(long int)va_arg(ap, void*)));
	else if (flag->j == 1 || flag->ll == 1)
		return (check_int(p, flag, (long long int)va_arg(ap, void*)));
	else if (flag->h == 1)
		return (check_int(p, flag, (short int)va_arg(ap, void*)));
	else if (flag->hh == 1)
		return (check_int(p, flag, (signed char)va_arg(ap, void*)));
	else if (flag->z == 1)
		return (check_int(p, flag, (size_t)va_arg(ap, void*)));
	return(0);
}

int		ft_flag_u(va_list ap, t_buff *p, t_flags *flag)
{
	if (flag->u == 1 && flag->l == 0 && flag->ll == 0 &&
		flag->h == 0 && flag->hh == 0 && flag->j == 0 && flag->z == 0)
		return (check_u( p, flag,(unsigned int)va_arg(ap, void*)));
	if ((flag->l == 1) || flag->U == 1)
		return (check_u(p, flag, (unsigned long)va_arg(ap, void*)));
	else if ((flag->ll == 1 || flag->j == 1))
		return (check_u(p, flag, (unsigned long long)va_arg(ap, void*)));
	else if (flag->h == 1)
		return (check_u(p, flag, (unsigned short int)va_arg(ap, void*)));
	else if (flag->hh == 1)
		return (check_u(p, flag, (unsigned char)va_arg(ap, void*)));	
	return(0);
}
int		ft_flag_x(va_list ap, t_buff *p, t_flags *flag)
{
	if (flag->l == 0 && flag->ll == 0 &&
		flag->h == 0 && flag->hh == 0 && flag->j == 0 && flag->z == 0)
		return (check_x(p, flag, (unsigned int)va_arg(ap, void*)));
	else if (flag->l == 1)
		return (check_x(p, flag, (unsigned long int)va_arg(ap, void*)));
	else if (flag->ll == 1)
		return (check_x(p, flag, (unsigned long long int)va_arg(ap, void*)));
	else if (flag->h == 1)
		return (check_x(p, flag, (unsigned short int)va_arg(ap, void*)));
	else if (flag->hh == 1)
		return (check_x(p, flag, (unsigned char)va_arg(ap, void*)));
	else if (flag->j == 1)
		return (check_x(p, flag, (uintmax_t)va_arg(ap, void*)));
	return (0);
}

int		checkall(va_list ap, t_buff *p, t_flags *flag)
{
	if (flag->s == 1)
		return (ft_str(va_arg(ap, void*), p, flag));
	if (flag->c == 1)
		return (ft_char(va_arg(ap, void*), p, flag));
	if (flag->d == 1)
		return (ft_flag_d(ap, p, flag));
	if (flag->u == 1 || flag->U == 1)
		return (ft_flag_u(ap, p, flag));
	if (flag->o == 1)
		return (ft_o((long int)va_arg(ap, void*), p , flag));
	if (flag->x == 1 || flag->X == 1)
		return (ft_flag_x(ap, p, flag));
	if (flag->f == 1 && flag->L == 0)
		return (ft_float(va_arg(ap, double), p , flag));
	if (flag->f == 1 && flag->L == 1)
		return (ft_float((long double)va_arg(ap, double), p , flag));
	if (flag->p == 1)
		return (ft_ptr(va_arg(ap, unsigned long int), p , flag));
	if (flag->percent == 1)
	{
		if (flag->tochnost == 0 && flag->dot == 1)
			flag->tochnost = 1;
		return (ft_str("%", p, flag));
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
		if (flag->width < 0)
		{
			flag->width *= -1;
			flag->minus = 1;
		}
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
	if (**car == 'j')
	{
 		(*car)++;
 		i = 1;
		flag->j = 1;
	}
	if (**car == 'z')
	{
 		(*car)++;
 		i = 1;
		flag->z = 1;
	}
	if (**car == 'L')
	{
 		i = 1;
 		(*car)++;
		flag->L = 1;
	}
	if (**car == 'l')
	{
 		i = 1;
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
 		i = 1;
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
		
	return (i);
}

int		ft_minwidth(t_buff *p, char **car, t_flags *flag, int *k)
{
	char	s;
	int		i;
	int		c;

	c = *k;
	s = **car;
	if (flag->width == 0 || (flag->dot == 1 && flag->tochnost == 0 && flag->width == 0))
		return (c);
	i = flag->width - 1 < 0 ? 0 : flag->width - 1;
	(flag->minus == 0 && flag->zero == 0) ? space(p, i) : 0;
	(flag->minus == 0 && flag->zero == 1) ? fzero(p, i) : 0;
	p->buff[p->i++] = s;
	(*car)++;
	c++;
	(flag->minus == 1) ? space(p, i) : 0;
	return (c);
}


int		checkstr(va_list ap, char *car, t_buff *p)
{
	t_flags	flag;
	int		k;
	
	car++;
	k = 0;
	ft_bzero(&flag, sizeof(flag));
	k += checkflag(&car, &flag);
	k += checkwidth(&flag, &car, ap);
	k += checktochnost(&car, &flag, ap);
	k += checkmod(&flag, &car, ap, p);
	k += checktype(&flag, &car);
	if (flag.minwidth == 1)
		return (ft_minwidth(p, &car, &flag, &k));
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

