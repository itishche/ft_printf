/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itishche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 13:24:42 by itishche          #+#    #+#             */
/*   Updated: 2018/11/02 13:07:43 by itishche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	int	znak(int sign)
{
    if (sign == 1)
        return (-1);
    else
        return (0);
}

int			ft_atoi(const char *str)
{
    int					i;
    unsigned long long	number;
    int					sign;

    i = 0;
    number = 0;
    sign = 1;
    while (str[i] == ' ' || str[i] == '\t' || str[i] == '\v'
           || str[i] == '\n' || str[i] == '\f' || str[i] == '\r')
        i++;
    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            sign = -1;
        i++;
    }
    while (str[i] >= 48 && str[i] <= 57)
    {
        number = (number * 10) + (str[i] - '0');
        i++;
    }
    if (number > 9223372036854775807)
        return (znak(sign));
    else
        return (number * sign);
}

char    *ft_strcpy(char *dst, char *src)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (src[j] != '\0')
        j++;
    while (i < j)
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return (dst);
}

char    *ft_strcat(char *s1, char *s2)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (s1[i] != '\0')
        i++;
    while (s2[j] != '\0')
    {
        s1[i] = s2[j];
        i++;
        j++;
    }
    s1[i] = '\0';
    return (s1);
}
