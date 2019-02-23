/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itishche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/01 11:44:34 by itishche          #+#    #+#             */
/*   Updated: 2019/02/01 11:44:36 by itishche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <locale.h>

#include <stdint.h>
#include <limits.h>

typedef struct s_buff
{
    char buff[2000];
    int i;
    int count;
}               t_buff;

typedef struct s_flags
{
    /*
    >   ФЛАГИ
     */
    int         minus;//выводимое значение выравнивается по левому краю в пределах минимальной ширины поля
    //В отсутствие этого знака по правому
    int         plus;//всегда указывать знак (плюс или минус) для выводимого десятичного числового значения
    //В отсутствие этого знака знак только для отрицательных чисел
    int         space;//помещать перед результатом пробел, если первый символ значения не знак
    // В отсутствие этого знака   Вывод может начинаться с цифры.
    //Символ + имеет больший приоритет, чем пробел. Используется только для десятичных числовых значений.
    int         hash;//«альтернативная форма» вывода значения
    int         zero;//дополнять поле до ширины, указанной в поле ширина управляющей последовательности, символом 0
    //В отсутствие этого знака дополнять пробелами
    //Используется для типов d, i, o, u, x, X, a, A, e, E, f, F, g, G.
    //Для типов d, i, o, u, x, X, если точность указана, этот флаг игнорируется. Для остальных типов поведение не определено.
    int dot;
    int width;
    int tochnost;
    /*
    СПЕЦИФИКАТОРЫ ТИПА
    */
    int l;
    int ll;
    int hh;
    int h;

    int L;
    /*
        ТИП
    */
    int d;//десятичное знаковое число
    int i;//десятичное знаковое число

    int o;//восьмеричное беззнаковое число

    int u;//десятичное беззнаковое число

    int x;//шестнадцатеричное беззнаковое число, x использует маленькие буквы (abcdef)
    int X;//... X большие (ABCDEF)

    int f;//числа с плавающей запятой. По умолчанию выводятся с точностью 6, если число по модулю меньше единицы, перед десятичной точкой пишется 0
    int F;

    int c;
    int s;
    int p;
    int percent;
}       t_flags;


int     space(t_buff *p, int size);
int     ft_printf(const char *str, ...);
int     ft_atoi(const char *str);
int     ft_str(void *str, t_buff *p, t_flags *flag);
int     ft_char(void *c, t_buff *p, t_flags *flag);
int     ft_int(int c, t_buff *p, t_flags *flag);
int     ft_l_int(long int c, t_buff *p, t_flags *flag);
int     ft_ll_int(long long int c, t_buff *p, t_flags *flag);
int     ft_hh_int(signed char c, t_buff *p, t_flags *flag);
int     ft_h_int(short int c, t_buff *p, t_flags *flag);



char   *ft_strchr(const char *str, int symb);
void    ft_bzero(void *str, size_t n);
void    checkbuff(t_buff *p);
void    ft_bzero(void *str, size_t n);
int     ft_write_buff(t_buff *p, char *s);
int     ft_strlen(char *str);
void    ft_strcat(t_buff *p, const char *s2);

int     ft_write_buff_and_free(t_buff *p, char *s);

char    *ft_strnew(size_t size);


#endif
