

#include "ft_printf.h"

static int 	number_of_digits(unsigned long long n)
{
	int count;

	count = 0;
	while (n / 10 > 0)
	{
		count++;
		n = n / 10;
	}
	return(count + 1);
}

static char	*my_putnbr(unsigned long long n)
{
	int sign;
	char *s;
	int i;

	i = number_of_digits(n);
	s = (char*)malloc(sizeof(char) * i + 1);
	s[i] = '\0';
	while (i--)
	{	
		s[i] = n % 10 + 48;
		n = n / 10;
	}
	return (s);
}



int		check_u(t_buff *p, t_flags *flag, unsigned long long c)
{
	char	*s;
	int		kdigit;
	int 	k;

	s = my_putnbr(c);
	kdigit = ft_strlen(s);	
	flag->plus == 1 ? flag->width-- : 0;
	k = flag->width - kdigit;
	if (k < 0)
		k = 0;
		// k = (flag->width - kdigit < 0 ? 0 : flag->width - kdigit);
	if (flag->zero == 0)
	{
		flag->minus == 0 ? space(p, k) : 0;
		if (flag->plus == 1)
			p->buff[p->i++] = '+';
	}
	else
	{
		if (flag->plus == 1)
			p->buff[p->i++] = '+';
		flag->minus == 0 ? fzero(p, k) : 0;
	}
	ft_write_buff_and_free(p, s);
	flag->minus == 1 ? space(p, k) : 0;
	return (0);
}

int		ft_hh_u(unsigned char c, t_buff *p, t_flags *flag)
{
	unsigned long long z;
	
	z = (unsigned long long)c;
	check_u(p, flag, z);
	return (0);
}

int		ft_h_u(unsigned short int c, t_buff *p, t_flags *flag)
{
	unsigned long long z;
	
	z = (unsigned long long)c;
	check_u(p, flag, z);
	return (0);
}

int		ft_ll_u(unsigned long long c, t_buff *p, t_flags *flag)
{
	unsigned long long z;
	
	z = c;
	check_u(p, flag, z);
	return (0);
}

int		ft_l_u(unsigned long int c, t_buff *p, t_flags *flag)
{
	unsigned long long z;
	
	z = (unsigned long long)c;
	check_u(p, flag, z);
	return (0);
}

int		ft_u(unsigned int c, t_buff *p, t_flags *flag)
{
	unsigned long long z;
	
	z = (unsigned long long)c;
	check_u(p, flag, z);
	return (0);
}
