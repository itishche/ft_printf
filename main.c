#include "ft_printf.h"
#include <limits.h>
int		main(void)
{
//  printf("o%p\n", 0);
//   ft_printf("m%p\n\n", 0);
// printf("o{%}\n");
// ft_printf("m{%}\n\n");


// printf("o%%%%%%%%%%\n");
// ft_printf("m%%%%%%%%%%\n\n");
// printf("o.%%.%%.%%.%%.%%.%%.%%.%%.\n");
// ft_printf("m.%%.%%.%%.%%.%%.%%.%%.%%.\n\n");

// printf("i =%i\n", printf("%"));
// printf("i =%i\n", ft_printf("%"));
// printf("\n");
// printf("% Zoooo\n");
// ft_printf("% Zoooo\n\n");
// printf("{%}\n");
// ft_printf("{%}\n\n");

// printf("{% %}\n");
// ft_printf("{% %}\n");

// printf("1)\no{%10R}\n");
// ft_printf("m{%10R}\n\n");

// printf("2)\n{%-15Z}\n", 123);
// ft_printf("{%-15Z}\n\n", 123);


// printf("3)\no{%5R12345}\n");
// ft_printf("m{%5R12345}\n\n");

// printf("4)\no{%-5R12345}\n");
// ft_printf("m{%-5R12345}\n\n");

// printf("5)\no{%f}{%F}\n", 1.42, 1.42);
// ft_printf("m{%f}{%F}\n\n", 1.42, 1.42);

// printf("6)\no{%f}{%F}\n", 1444565444646.6465424242242);
// ft_printf("m{%f}{%F}\n\n", 1444565444646.6465424242242);

//   #include <limits.h>
// printf("o res= %d\n", printf("{%llx, %llx}\n", 0, ULLONG_MAX));printf("m res= %d\n", ft_printf("{%llx, %llx}\n", 0, ULLONG_MAX));
// printf("o res= %d\n", printf("{%llX, %llX}\n", 0, ULLONG_MAX));printf("m res= %d\n", ft_printf("{%llX, %llX}\n", 0, ULLONG_MAX));
// printf("o res= %d\n", printf("{%llO, %llO}\n", 0, USHRT_MAX));printf("m res= %d\n", ft_printf("{%llO, %llO}\n", 0, USHRT_MAX));


printf("original {%05.Z}\n", 0);
ft_printf("{%05.Z}\n\n", 0);
printf("original {%-05.Z}\n", 0);
ft_printf("{%-05.Z}\n\n", 0);
    return (0);
}