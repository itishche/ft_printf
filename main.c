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
/*
*
*test_u
*
// */

//     printf("%u\n", 42);
//     ft_printf("%u\n", 42);


// ft_printf("m%s", "abc");
// ft_printf("m111%s333", "222");
// ft_printf("m%s333", "222");
// ft_printf("m111%s", "222");
// ft_printf("m{%s}", 0);
// ft_printf("m{%s}\n", "");
// printf("o%s", "abc");
// printf("o111%s333", "222");
// printf("o%s333", "222");
// printf("o111%s", "222");
// printf("o{%s}", 0);
// printf("o{%s}\n", "");

//     printf("111%s333%s555", "222", "444");
//     printf("111%s333%s555%saaa%sccc",
//     "222", "444", "666", "bbb");
//     printf("%s%s%s%s%s\n",
//     "1", "2", "3", "4", "5");
// ft_printf("111%s333%s555", "222", "444");
// ft_printf("111%s333%s555%saaa%sccc",
//     "222", "444", "666", "bbb");
// ft_printf("%s%s%s%s%s\n",
//     "1", "2", "3", "4", "5");

#include <limits.h>
// printf("%i", 42);
// printf("%i", -42);
// printf("before %i after", 42);
// printf("%i%i%i%i%i",
//     1, -2, 3, -4, 5);
// printf("a%ib%ic%id",
//     1, -2, 3);
// printf("%i", INT_MAX);
// printf("%i\n", INT_MIN);

// ft_printf("%i", 42);
// ft_printf("%i", -42);
// ft_printf("before %i after", 42);
// ft_printf("%i%i%i%i%i",
//     1, -2, 3, -4, 5);
// ft_printf("a%ib%ic%id",
//     1, -2, 3);
// ft_printf("%i", INT_MAX);
// ft_printf("%i\n", INT_MIN);


// printf("%u", 42);
// printf("before %u after", 42);
// printf("a%ub%uc%ud", 0, 55555, 100000);
// printf("%u\n", UINT_MAX);


// ft_printf("%u", 42);
// ft_printf("before %u after", 42);
// ft_printf("a%ub%uc%ud", 0, 55555, 100000);
// ft_printf("%u\n", UINT_MAX);

// printf("o{%10d}", 42);
// printf("{%4d}", 10000);
// printf("{%30d}", 10000);
// printf("{%10d}", -42);
// printf("{%3c}", 0);
    // ft_printf("m{%10d}", 42);
// ft_printf("{%4d}", 10000);
// ft_printf("{%30d}", 10000);
// ft_printf("{%10d}", -42);
// ft_printf("{%3c}", 0);

// printf("{m%-10d}", 42);
// // printf("{%-4d}", 10000);
// // printf("{%-30d}\n", 10000);

// // ft_printf("{o%-10d}", 42);
// // ft_printf("{%-4d}", 10000);
// // ft_printf("{%-30d}\n", 10000);
// printf("o{%010d}", 42);
// printf("{%010d}", -42);
// printf("{%04d}", 10000);
// printf("{%030d}", 10000);
// printf("{%03c}", 0);
// printf("{%05s}\n", "abc");
// ft_printf("m{%010d}", 42);
// ft_printf("{%010d}", -42);
// ft_printf("{%04d}", 10000);
// ft_printf("{%030d}", 10000);
// ft_printf("{%03c}", 0);
// ft_printf("{%05s}\n", "abc");

// printf("o%+d", 42);
// printf("%+d", -42);
// printf("%+i", 42);
// printf("%+i", -42);
// printf("%+c", 0);
// printf("[%+s]", 0);
// printf("[%+s]\n", "(null)");

// ft_printf("m%+d", 42);//Работает
// ft_printf("%+d", -42);//Работает

// ft_printf("%+i", 42);//Работает
// ft_printf("%+i", -42);//Работает
// ft_printf("%+c", 0);//Работает
// ft_printf("[%+s]", 0);//Работает
// ft_printf("[%+s]\n", "(null)");//Работает
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// printf("o%.4d\n", 42);ft_printf("m%.4d\n", 42); 
// printf("%.4d\n", 424242);ft_printf("%.4d\n", 424242);
// printf("%.4d\n", -424242);ft_printf("%.4d\n", -424242);
// printf("o%15.4d\n", 42);ft_printf("m%15.4d\n", 42);//Работает
// printf("o%15.4d\n", 424242);ft_printf("m%15.4d\n", 424242);//Работает
// printf("o%8.4d\n", 424242424); ft_printf("m%8.4d\n", 424242424);//Работает
// printf("o%15.4d\n", -42); ft_printf("m%15.4d\n", -42);//Работает
// printf("o%15.4d\n", -424242);ft_printf("m%15.4d\n", -424242);//Работает
// printf("o%8.4d\n", -424242424);ft_printf("m%8.4d\n", -424242424);//Работает
// printf("o%4.15d\n", 42);ft_printf("m%4.15d\n", 42);//Работает
// printf("o%4.15d\n", 424242);ft_printf("m%4.15d\n", 424242);//Работает
// printf("o%4.8d\n", 424242424);ft_printf("m%4.8d\n", 424242424);//Работает
// printf("o%4.15d\n", -42);ft_printf("m%4.15d\n", -42);//Работает
// printf("o%4.15d\n", -424242);ft_printf("m%4.15d\n", -424242);//Работает
// printf("o%4.8d\n", -424242424);ft_printf("m%4.8d\n", -424242424);//Работает
// printf("o%.d, %.0d\n", 0, 0);ft_printf("m%.d, %.0d\n", 0, 0);//Работает
// printf("o%.10d\n", -42);ft_printf("m%.10d\n", -42);//Работает
// printf("o%.4i\n", 42);ft_printf("m%.4i\n", 42);//Работает
// printf("o%15.4i\n", 42); ft_printf("m%15.4i\n", 42);//Работает
// printf("o%4.15i\n", 42); ft_printf("m%4.15i\n", 42);//Работает
// printf("o%.i, %.0i\n", 0, 0); ft_printf("m%.i, %.0i\n", 0, 0);//Работает

// printf("o%+-5d\n", 0);ft_printf("m%+-5d\n", 0);//Работает
// printf("o% -5d\n", 0);ft_printf("m% -5d\n", 0);//Работает
// printf("o% 05d\n", 0);ft_printf("m% 05d\n", 0);//Работает
// printf("o%+05d\n", 0);ft_printf("m%+05d\n", 0);//Работает
// printf("o% d\n", 9999);ft_printf("m% d\n", 9999);//Работает
// printf("m% d\n", -9999);ft_printf("m% d\n", -9999);//Работает
// printf("% i\n", 9999);ft_printf("% i\n", 9999);//Работает
// printf("% i\n", -9999);ft_printf("% i\n", -9999);//Работает

// printf("o{% +d}\n", 42);ft_printf("m{% +d}\n", 42);//Работает
// printf("o{%+ d}\n", 42); ft_printf("m{%+ d}\n", 42);//Работает
// printf("o{%+03d}\n", 0);ft_printf("m{%+03d}\n", 0);//Работает
// printf("o{% 03d}\n", 0);ft_printf("m{% 03d}\n", 0);//Работает
// printf("o{%0-3d}\n", 0);ft_printf("m{%0-3d}\n", 0);//Работает
// printf("o{%+03d}\n", 12);ft_printf("m{%+03d}\n", 12);//Работает
// printf("o{%+03d}\n", 123456);ft_printf("m{%+03d}\n", 123456);//Работает
// printf("o{%03.2d}\n", 0);ft_printf("m{%03.2d}\n", 0);//Работает
// printf("o{% c}\n", 0);ft_printf("m{% c}\n", 0);//Работает
    // printf("{% c}", 'a');ft_printf("{% c}", 'a');//Работает
// printf("{% s}", NULL);ft_printf("{% s}", NULL);////Работает
// printf("{% s}", "(null)");ft_printf("{% s}", "(null)");//Работает


// printf("{% s}\n", "");ft_printf("{% s}\n", "");

//СДЕЛАТЬ РАЗБОРКУ С ФЛАГОМ SPACE  !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

// printf("% u\n", 9999);ft_printf("% u\n", 9999);

// printf("o%.4u\n", 42);ft_printf("m%.4u\n", 42);
// printf("o%.4u\n", 424242);ft_printf("m%.4u\n", 424242);
// printf("o%15.4u\n", 42);ft_printf("m%15.4u\n", 42);
// printf("o%15.4u\n", 424242);ft_printf("m%15.4u\n", 424242);
// printf("o%8.4u\n", 424242424);ft_printf("m%8.4u\n", 424242424);
// printf("o%4.15u\n", 42);ft_printf("m%4.15u\n", 42);
// printf("o%4.15u\n", 424242);ft_printf("m%4.15u\n", 424242);
// printf("o%4.8u\n", 424242424);ft_printf("m%4.8u\n", 424242424);
// printf("o%.u, %.0u\n", 0, 0);ft_printf("m%.u, %.0u\n", 0, 0);

 
  printf("%s\n", "1)");
  printf("o%+010d\n", 42);
  ft_printf("m%+010d\n\n", 42);

  printf("%s\n", "12)");
  printf("o%+010.d\n", 42);
  ft_printf("m%+010.d\n\n", 42);
  
   printf("%s\n", "13");
  printf("o%+10.d\n", 42);
  ft_printf("m%+10.d\n\n", 42);

  // printf("%s\n", "13)");
  // printf("%+010.0d\n", 42);
  // ft_printf("%+010.0d\n\n", 42);
  

  // printf("%s\n", "14)");
  // printf("%+010.2d\n", 42);
  // ft_printf("%+010.2d\n\n", 42);


// 
//
// 
// 
// 
// 
// 
// 
//СДЕЛАТЬ РАЗБОРКУ С ФЛАГОМ SPACE  !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!   
// printf("o{%-15Z}\n", 123); ft_printf("{%-15Z}\n", 123);//Мой не выделяет ширину строки!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
// printf("{%10R}\n");  ft_printf("{%10R}\n");//Мой не выделяет ширину строки!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!


// ft_
// ft_
// ft_


// system("leaks a.out");
    return (0);
}