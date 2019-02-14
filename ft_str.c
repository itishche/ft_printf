/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itishche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/11 11:30:11 by itishche          #+#    #+#             */
/*   Updated: 2019/02/11 11:30:13 by itishche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (*str)
	{
		i++;
		str++;
	}
	return (i);
}
void	ft_strcat(t_buff *p, const char *s2)
{
	int j;

	
	j = 0;
	while (*s2)
	{	
		p->buff[p->i++] = *s2;
		s2++;
	}
	p->buff[p->i] = '\0';
}

int	space(t_buff *p, int size)
{
	while (size--)
	{	
		checkbuff(p);
		p->buff[p->i++] = ' ';
	}
	return (0);
}



int ft_write_buff(t_buff *p, char *s)
{
	while (*s)
	{
		// printf("1234567890-\n");
		checkbuff(p);
		p->buff[p->i++] = *s;
		s++;
	}
	return (0);
}
int ft_write_buff_and_free(t_buff *p, char *s)
{
	ft_write_buff(p, s);
	free(s);
	return (0);
}

char	*ft_strnew(size_t size)
{
	char	*ptr;

	ptr = (char *)malloc(sizeof(char) * size + 1);
	if (ptr == 0)
		return (NULL);
	else
	{
		ft_bzero(ptr, size + 1);
		return (ptr);
	}
}

int ft_left_str(char *mas, t_buff *p, int size)
{
	// printf("flag->minus\n");
	ft_write_buff(p, mas);
	space(p, size);
	// free (mas);
	return (0);
}



int ft_right_str(char *mas, t_buff *p, int size)
{
		// printf("flag->plus\n");
	space(p, size);
	ft_write_buff(p, mas);
	// free (mas);
	return (0);
}

char *ft_null(void)
{
	char *s;
	
	s = ft_strnew(6);
	s = "(null)";
	return (s);
}

int ft_left_str_and_free(char *mas, t_buff *p, int k)
{
	ft_left_str(mas, p, k);
	free(mas);
	return (0);
}

int ft_right_str_and_free(char *mas, t_buff *p, int k)
{
	ft_right_str(mas, p, k);
	free(mas);
	return (0);
}

int	bla(char *s, t_buff *p, t_flags *flag)
{
	char *mas;
	int k;
	int i;

	k = flag->tochnost;
	mas = ft_strnew(flag->tochnost);
	i = 0;
	while (k-- && *s)
		mas[i++] = *s++;
	if (flag->width != 0)
		k = flag->width - flag->tochnost;
	if (k == 0)
		return(ft_write_buff_and_free(p, mas));
	else
	{
		if (k < 0)
			k = 0;
		if (flag->minus == 0)
			return (ft_right_str_and_free(mas, p, k));
		if (flag->minus == 1)
			return (ft_left_str_and_free(mas, p, k));
	}
	return (0);
}

int bla_bla(char *s, t_buff *p, t_flags *flag)
{
	int k;
	int len;

	len = ft_strlen(s);
	k = flag->width - len;
	if (k <= 0)
		k = 0;
	if (flag->minus == 0)
		return (ft_right_str(s, p, k));
	if (flag->minus == 1)
		return (ft_left_str(s, p, k));
	return (0);
}

int ft_str(void *str, t_buff *p, t_flags *flag)
{
	char *s;
	int len;
	// int k;

	if (str == NULL)
		s = ft_null();
	else
	{
		s = (char *)str;
		len = ft_strlen(s);
		if (len == 0)
			return (0);
	}
	if (flag->tochnost == 0 && flag->dot == 1 && flag->width == 0)
			return (0);
	if (flag->tochnost == 0 && flag->dot == 1 && flag->width != 0)
		return(space(p, flag->width));
	if (flag->dot == 1 && flag->tochnost != 0)
		return (bla(s, p, flag));	
	else
	{
		return (bla_bla(s, p, flag));
		// k = flag->width - len;
		// if (k <= 0)
		// 	k = 0;
		// if (flag->minus == 0)
		// 	return (ft_right_str(s, p, k));
		// if (flag->minus == 1)
		// 	return (ft_left_str(s, p, k));
	}
	checkbuff(p);
	return (0);
}
