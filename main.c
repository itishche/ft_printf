#include "ft_printf.h"
#include <limits.h>
int		main(void)
{

//   printf("original res - %d\n", );
    // printf("res - %d\n", );
    char *s;
    s = "123456789123";
    char c;
    c = ' ';

    /*
     * CHECK   STRING
     * */
//       printf("___%s %sthe end!\n", s, s);
//    ft_printf("___%s %sthe end!\n", s, s);

 // ft_printf("me  :|%s|\n", NULL);
 //    printf("org :|%s|\n", NULL);

  // ft_printf("me  :|%s|\n", "Привіт!");
  //    printf("org :|%s|\n", "Привіт!");

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

  

   // ft_printf("|%-07.5s|\t|%-02.5s|\t|%-020s|\t|%-0.5s|\t\n",A,A,A, "");
   //    printf("|%-7.5s|\t|%-2.5s|\t|%-20s|\t|%-.5s|\t\n",A,A,A, "");

  // printf("original res - %d\n", printf("%20.10s\n", "qwerty"));
  // printf("my res - %d\n", ft_printf("%20.10s\n", "qwerty"));
//   printf("original res - %d\n", printf("%-20.10s\n", "qwerty"));
// printf("my res - %d\n", ft_printf("%-20.10s\n", "qwerty"));
  // printf("original res - %d\n", printf("%s\n", NULL));
  // printf("my res - %d\n", ft_printf("%s\n", NULL));
//   printf("original res - %d\n", printf("%d\n", printf("")));
// printf("my res - %d\n", printf("%d\n", ft_printf("")));
//   printf("original res - %d\n", printf("%s\n", "qwerty"));
// printf("my res - %d\n", ft_printf("%s\n", "qwerty"));
//   printf("original res - %d\n", printf("%3s\n", "qwerty"));
// printf("my res - %d\n", ft_printf("%3s\n", "qwerty"));
//   printf("original res - %d\n", printf("%25s\n", "qwerty"));
// printf("my res - %d\n", ft_printf("%25s\n", "qwerty"));
//   printf("original res - %d\n", printf("%s\n", "qwerty"));//undefined behavior
// printf("my res - %d\n", ft_printf("%+s\n", "qwerty"));//undefined behavior
//   printf("original res - %d\n", printf("%s\n", "qwerty"));//undefined behavior
// printf("my res - %d\n", ft_printf("% s\n", "qwerty"));//undefined behavior
//   printf("original res - %d\n", printf("%25s\n", "qwerty"));//undefined behavior
// printf("my res - %d\n", ft_printf("%025s\n", "qwerty"));//undefined behavior
//   printf("original res - %d\n", printf("%.3s\n", "qwerty"));
// printf("my res - %d\n", ft_printf("%.3s\n", "qwerty"));
//   printf("original res - %d\n", printf("%25.3s\n", "qwerty"));
// printf("my res - %d\n", ft_printf("%25.3s\n", "qwerty"));
//   printf("original res - %d\n", printf("%-25s\n", "qwerty"));
// printf("my res - %d\n", ft_printf("%-25s\n", "qwerty"));
//   printf("original res - %d\n", printf("text %s text %s\n", "first", "second"));
// printf("my res - %d\n", ft_printf("text %s text %s\n", "first", "second"));

   // ft_printf("me  :|%-020.*s|\n", 10, s);
   //      printf("org :|%-20.*s|\n", 10, s);
// printf("original res - %d\n", printf("text %15.3s text %*.*s\n", "first", 20, 4, "second"));
// printf("my res - %d\n", ft_printf("text %15.3s text %*.*s\n", "first", 20, 4, "second"));






//%%%%%%%%%
    // printf("original res - %d\n", printf("1223456%%789\n"));
    // printf("my res - %d\n", ft_printf("1223456%%789\n"));




//ПОПЫТКА С ЮНИКОДОМ
  // setlocale(LC_ALL,  "");
// printf("%s", "\xE2\x98\xA0\n");  //ЧЕРЕП
// ft_printf("%s", "\xE2\x98\xA0\n");

//   printf("original res - %d\n", printf("%ls\n", a));
// printf("res - %d\n", ft_printf("%ls\n", a));

  // printf("original res - %d\n", printf("%ls\n", L"абвгд"));
// printf("res - %d\n", ft_printf("%ls\n", L"абвгд"));
  // printf("original res - %d\n", printf("%15ls\n", L"абвгд"));
// printf("res - %d\n", ft_printf("%15ls\n", L"абвгд"));
//   printf("original res - %d\n", printf("%15ls\n", L"абвгд"));//undefined behavior
// printf("res - %d\n", ft_printf("%015ls\n", L"абвгд"));//undefined behavior
//   printf("original res - %d\n", printf("%ls\n", L"абвгд"));//undefined behavior
// printf("res - %d\n", ft_printf("%+ls\n", L"абвгд"));//undefined behavior
//   printf("original res - %d\n", printf("% ls\n", L"абвгд"));//undefined behavior
// printf("res - %d\n", ft_printf("% ls\n", L"абвгд"));//undefined behavior
//   printf("original res - %d\n", printf("%-15ls\n", L"абвгд"));
// printf("res - %d\n", ft_printf("%-15ls\n", L"абвгд"));

//   printf("original res - %d\n", printf("%.2ls\n", L"абвгд"));
// printf("res - %d\n", ft_printf("%.2ls\n", L"абвгд"));

//   printf("original res - %d\n", printf("%15.2ls\n", L"абвгд"));
// printf("res - %d\n", ft_printf("%15.2ls\n", L"абвгд"));

//   printf("original res - %d\n", printf("%-15.2ls\n", L"абвгд"));
// printf("res - %d\n", ft_printf("%-15.2ls\n", L"абвгд"));

//   printf("original res - %d\n", printf("asd %ls %S %s\n", L"𐱈র𐱈র", L"абв𐱈র𐱈র", "zxc"));
// printf("my res - %d\n", ft_printf("asd %ls %S %s\n", L"𐱈র𐱈র", L"абв𐱈র𐱈র", "zxc"));


      /*
       * CHECK   CHARACTER
       * */
//
//
    //    printf("org:%5c\n", 42);
    // ft_printf("me :%5c\n", 42);
        
   // printf("org: %c\n", 'N');
   // ft_printf("me: %c\n", 'N');
    // printf("org %f\n", 99.9999999);

   // printf("|%-2c|\n", );

//   char a = ' ';
//   for (a = ' '; a <' ' + 60 ; a+=15)
//   {
//       printf("original res - %d\n", printf("|%-2c|\t|%-2c|\t|%-2c|", a, a+5,a+10)); 
//       printf("res - %d\n", ft_printf("|%-2c|\t|%-2c|\t|%-2c|", a, a+5,a+10));
// }
// char a = ' ';
// printf("a = %c\n", a);
// printf("a+5 = %c\n", a+5);
// printf("a+10 = %c\n", a+10);
// ft_printf("ft_a = %c\n", a);
// ft_printf("ft_a+5 = %c\n", a+5);
// ft_printf("ft_a+10 = %c\n", a+10);

  // printf("original res - %d\n", printf("|%-2.3c|\t|%-2.5c|\t|%-2.0c|",  a, a+5, a+10)); 
        // printf("res - %d\n", ft_printf("|%-2.3c|\t|%-2.5c|\t|%-2.0c|",  a, a+5, a+10));
    // printf("original res - %d\n",printf("%c\n", NULL)); 
    //     printf("res - %d\n",ft_printf("%c\n", NULL));
  
  // ft_printf("|%+3c|(%3d)\t|%+3c|(%3d)\t|%+c|(%3d)", a, a, a+5, a+5, a+10, a+10);
  // ft_printf("|%3.4c|(%3d)\t|%+3.4c|(%3d)\t|%.4c|(%3d)", a, a, a+5, a+5, a+10, a+10);
  // ft_printf("|%-3c|\t|%3c|\t|%c|\t|%-03c|\t|%03c|\t|%.c|\t|%.5c|", 0,0,0,0,0,0,0,0,0);

   /*
       * CHECK   PERCENT
       * */
// //
//     printf("org:%5%\n", 42);
//     ft_printf("me :%5%\n", 42);
//        НЕ работает !!!!
    // printf("% 5.4ys\n", "1234567890");
    //   printf("org:% 5ty %\n");
    // ft_printf("me :% 5ty %\n");



    /*
       * CHECK   INTEGER
       * */
     //     ++++++    всегда указывает знак (плюс или минус) для выводимого десятичного числового значения.В отсутствие этого знака знак только для отрицательных чисел
    //   printf("original res - %d\n", );
    // printf("res - %d\n", );
    //  printf("original res - %d\n", printf("org:%20d\n", 42));
    // printf("res - %d\n", ft_printf("me :%20d\n", 42));//PАБОТАЕТ

 // printf("original res - %d\n", printf("org:%-20d\n", 42));
 //    printf("res - %d\n", ft_printf("me :%-20d\n", 42));//PАБОТАЕТ

 // printf("original res - %d\n", printf("org:%+20d\n", 42));
 //    printf("res - %d\n", ft_printf("me :%+20d\n", 42));
   
    //  printf("original res - %d\n",  printf("%-+20d\n", 42));
    // printf("res - %d\n",  ft_printf("%-+20d\n", 42));
    //    //;
    //  printf("original res - %d\n", printf("%20d\n", -42));
    // printf("res - %d\n", ft_printf("%20d\n", -42));
    //    // ;

    //  printf("original res - %d\n",  printf("%-20d\n", -42));//WORK
    // printf("res - %d\n", ft_printf("%-20d\n", -42));

    //      printf("original res - %d\n", printf("%+20d\n", -42));//WORK
    // printf("res - %d\n", printf("%+20d\n", -42));
       // ;

    //   printf("original res - %d\n", printf("%+-20d\n", -42));//WORK
    // printf("res - %d\n", printf("%+-20d\n", -42));
       // ;

    //   printf("original res - %d\n", printf("org:%0+20d\n", -42));//WORK
    // printf("res - %d\n", ft_printf("org:%0+20d\n", -42));
       // ;//заполняет нулями по ширине и минус ставит на первое место, а выравнивание по правому краю
       
  // printf("original res - %d\n", printf("org:%0+-20d\n", -42));//WORK
  //   printf("res - %d\n", ft_printf("org:%0+-20d\n", -42));
       // ;//минус отменяет плюс, выравнивание по левому краю
      
  // printf("original res - %d\n", printf("org:%0+20d\n", 42));//WORK
  //   printf("res - %d\n", ft_printf("org:%0+20d\n", 42));
       // ;
      
  // printf("original res - %d\n", printf("org:%0+-20d\n", 42));//WORK
  //   printf("res - %d\n", ft_printf("org:%0+-20d\n", 42));
       // ;
    
  // printf("original res - %d\n", printf("org:%0-20d\n", -42));//WORK
  //   printf("res - %d\n", ft_printf("org:%0-20d\n", -42));
    // printf("org:%0-20d\n", -42);
    //  printf("original res - %d\n", printf("%d", -42));//WORK
    // printf("res - %d\n", ft_printf("%d", -42));
   // printf("original res - %d\n", printf("before %d after", 42));//WORK
   //  printf("res - %d\n", ft_printf("before %d after", 42));

    //    printf("original res - %d\n", printf("%d%d%d%d%d", 1, -2, 3, -4, 5));//WORK
    // printf("res - %d\n", ft_printf("%d%d%d%d%d", 1, -2, 3, -4, 5));


    //    printf("original res - %d\n", printf("a%db%dc%dd", 1, -2, 3));//WORK
    // printf("res - %d\n", ft_printf("a%db%dc%dd", 1, -2, 3));
// ;

//        printf("original res - %d\n", printf("%d", INT_MAX));//WORK
//     printf("res - %d\n", ft_printf("%d", INT_MAX));
// // ;

    //    printf("original res - %d\n", printf("%d", INT_MIN));
    // printf("res - %d\n", ft_printf("%d", INT_MIN));


/*
*
*test_ld
*
*/
  // printf("original res - %d\n", printf("%ld%ld", 0, 42));//WORK
  //   printf("res - %d\n", ft_printf("%ld%ld", 0, 42));

  // printf("original res - %d\n", printf("%ld", (long)INT_MAX + 1));// wOrk!!!!
  //   printf("res - %d\n", ft_printf("%ld", (long)INT_MAX + 1));
// printf("%ld\n", 2147483648);
// ft_printf("%ld\n", 2147483648);









  // printf("original res - %d\n", printf("%ld", (long)INT_MIN - 1));//WORK
  //   printf("res - %d\n", ft_printf("%ld", (long)INT_MIN - 1));
// ;
  // printf("original res - %d\n", printf("%ld", LONG_MAX));//WORK
  //   printf("res - %d\n",  ft_printf("%ld", LONG_MAX));
// // ;
//   printf("original res - %d\n",printf("%ld", LONG_MIN) );//WORK
//     printf("res - %d\n",ft_printf("%ld", LONG_MIN) );
// printf("%ld", LONG_MIN);
/*
*
*test_lld
*
*/
// printf("%lld%lld\n", 0, 42);//WORK
// ft_printf("%lld%lld\n", 0, 42);

// printf("%lld\n", LLONG_MAX);//WORK
// ft_printf("%lld\n", LLONG_MAX);

// printf("%lld", LLONG_MIN);//WORK
// ft_printf("%lld", LLONG_MIN);
/*
*
*test_Hd
*
*/

// printf("%hd%hd\n", (short int)0, (short int)42);//WORK
// ft_printf("%hd%hd\n", (short int)0, (short int)42);

// printf("%hd\n", SHRT_MAX);//WORK
// ft_printf("%hd\n", SHRT_MAX);

// printf("%hd", SHRT_MIN);
// ;
// system("leaks a.out");
    return (0);
}