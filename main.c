#include "ft_printf.h"

int		main(void)
{

    char *s;
    s = "123456789123";
    char c;
    c = 'A';

    /*
     * CHECK   STRING
     * */
//       printf("___%s %sthe end!\n", s, s);
//    ft_printf("___%s %sthe end!\n", s, s);

 // ft_printf("me  :|%s|\n", NULL);
 //    printf("org :|%s|\n", NULL);

  ft_printf("me  :|%s|\n", "Привіт!");
     printf("org :|%s|\n", "Привіт!");

  // ft_printf("me  :%-5.3s\n", s);
  //    printf("org :%-5.3s\n", s);

   // ft_printf("me  :_______|%s|\t\n","ç±³");
   //    printf("org :_______|%s|\t\n","ç±³");


  // char *A;
  // A = "this is tEEEEst!";
  
  // ft_printf("me  :|%5.3s|\t\t|%3.5s|\t|%7s|\t|%7.3s|\n",A, A, A, NULL);//OK
  //   printf("org :|%5.3s|\t\t|%3.5s|\t|%7s|\t|%7.3s|\n",A, A, A, NULL);
  

  // ft_printf("me  :|%07.5s|\t|%02.5s|\t|%.10s|\t\t|%.5s|\t\n",A,A,A, "");   
  //    printf("org :|%7.5s|\t|%2.5s|\t|%.10s|\t\t|%.5s|\t\n",A,A,A, "");

  // ft_printf("|%-7.5s|\t|%-2.5s|\t|%-.10s|\t\t|%-.5s|\t\n",A,A,A, "");
  //    printf("|%-7.5s|\t|%-2.5s|\t|%-.10s|\t\t|%-.5s|\t\n",A,A,A, "");

     // ft_printf("me  :|%020s|\n", s);
     //    printf("org :|%20s|\n", s);

     // ft_printf("me  :|%-020s|\n", s);
     //    printf("org :|%-20s|\n", s);

   // ft_printf("|%-07.5s|\t|%-02.5s|\t|%-020s|\t|%-0.5s|\t\n",A,A,A, "");
      // printf("|%-7.5s|\t|%-2.5s|\t|%-20s|\t|%-.5s|\t\n",A,A,A, "");

//ПОПЫТКА С ЮНИКОДОМ
  // setlocale(LC_ALL,  "");
  // printf("org :|%s|\n", "Привет!");
ft_printf("%s", "\xE2\x98\xA0\n");




      /*
       * CHECK   CHARACTER
       * */
//
//
   // ft_printf("me: %c\n", &c);
    // printf("org %f\n", 99.9999999);

// system("leaks a.out");
    return (0);
}