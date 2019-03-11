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


// printf("{% s}\n", "");ft_printf("{% s}\n", "");//Работает




// ft_printf("m%jd\n", -9223372036854775808);
// printf("o%jd\n", -9223372036854775808);


// ft_printf("%jd\n", 9223372036854775807);
// ft_printf("%lld", 9223372036854775807);


/*
*
*       test_u
*
*/
// printf("% u\n", 9999);ft_printf("% u\n", 9999);//Работает//Работает
// printf("\n");
// printf("o%.4u\n", 42);ft_printf("m%.4u\n", 42);//Работает
// printf("\n");

// printf("o%.4u\n", 424242);ft_printf("m%.4u\n", 424242);//Работает
// printf("\n");
// printf("o%15.4u\n", 42);ft_printf("m%15.4u\n", 42);
// printf("\n");

// printf("o%15.4u\n", 424242);ft_printf("m%15.4u\n", 424242);//Работает
// printf("\n");
// printf("o%8.4u\n", 424242424);ft_printf("m%8.4u\n", 424242424);//Работает
// printf("\n");
// printf("o%4.15u\n", 42);ft_printf("m%4.15u\n", 42);//Работает
// printf("\n");
// printf("o%4.15u\n", 424242);ft_printf("m%4.15u\n", 424242);//Работает
// printf("\n");
// printf("o%4.8u\n", 424242424);ft_printf("m%4.8u\n", 424242424);//Работает
// printf("\n");
// printf("o%.u, %.0u\n", 0, 0);ft_printf("m%.u, %.0u\n", 0, 0);//Работает



// ft_printf("m%+u\n", 4294967295);
// printf("o%+u\n", 4294967295);


//#################### Когда используется вместе с o, x или X, вставляет перед числом 0, 0x или 0X
// Когда используется со спецификаторами a, A, e, E, f, F, g или G, вставляет десятичную точку, даже если после неё нет десятичных знаков.


// ft_printf("1mo{%o}\n", 40);printf("1oo{%o}\n", 40);
// ft_printf("2m5o{%5o}\n", 41);printf("2o5o{%5o}\n", 41);
// ft_printf("3m{%05o}\n", 42);printf("3o{%05o}\n", 42);
// ft_printf("4m{%-5o}\n", 2500);printf("4o{%-5o}\n", 2500);
// ft_printf("5m{%#6o}\n", 2500);printf("5o{%#6o}\n", 2500);
// ft_printf("6m{%-#6o}\n", 2500); printf("6o{%-#6o}\n", 2500);
// ft_printf("7m{%-05o}\n", 2500);printf("7o{%-05o}\n", 2500);
// ft_printf("8m -5.10o {%-5.10o}\n", 2500); printf("8o -5.10o {%-5.10o}\n", 2500);
// ft_printf("9m -10.5o{%-10.5o}\n", 2500); printf("9o -10.5o{%-10.5o}\n", 2500);













// printf("1o{%o}\n", 0);
//   ft_printf("1m{%o}\n\n", 0);

//   printf("2o{%#o}\n", 0);
//   ft_printf("2m{%#o}\n\n", 0);

//   printf("3o  #10.o {%#10.o}\n", 0);
//   ft_printf("3m  #10.o {%#10.o}\n\n", 0);

// printf("3&o -#10.o{%-#10.o}\n", 0);
//   ft_printf("3&m -#10.o{%-#10.o}\n\n", 0);

// printf("3_1o #10.2o{%#10.2o}\n", 0);
//   ft_printf("3_1m #10.2o{%#10.2o}\n\n", 0);

//   printf("4o #10o {%#10o}\n", 0);
//   ft_printf("4m #10o {%#10o}\n\n", 0);

//   printf("5o #-10o {%#-10o}\n", 0);
//   ft_printf("5m #-10o {%#-10o}\n\n", 0);

//   printf("o @moulitest: .o .0o{ %.o %.0o}\n", 0, 0);
//   ft_printf("m @moulitest: .o .0o{ %.o %.0o}\n\n", 0, 0);


// // ft_printf("10m -10.5o {%-10.5o}\n", 2500); printf("10o -10.5o {%-10.5o}\n", 2500);
// ft_printf("11m @moulitest:  5.o 5.0o{ %5.o %5.0o}\n", 0, 0);printf("11o @moulitest:  5.o 5.0o{ %5.o %5.0o}\n", 0, 0);
// ft_printf("12m @moulitest: #.o #.0o{ %#.o %#.0o}\n", 0, 0); printf("12o @moulitest: #.o #.0o{ %#.o %#.0o}\n", 0, 0); 
// // FAIL ft_printf("%-10.5o", 2500);                   -> "04704     "

// //   94. FAIL ft_printf("@moulitest: %5.o %5.0o", 0, 0);    -> "@moulitest:            "
// //   95. FAIL ft_printf("@moulitest: %#.o %#.0o", 0, 0);    -> "@moulitest: 0 0"

// ft_printf("m @moulitest: {%.10o}\n", 42);//           -> "@moulitest: 0000000052"
// printf("o @moulitest: {%.10o}\n", 42);


// int i= 0;
// int j = 0;
//   printf("4)\n");
//   i = printf("orig:\"%10d\"\n", 0);//Работает
//   j = ft_printf("mine:\"%10d\"\n", 0);
//   printf("orig:%i\nmine:%i\n\n", i , j);

//   printf("5)\n");
//   i = printf("orig:\"%10.d\"\n", 0);//Работает
//   j = ft_printf("mine:\"%10.d\"\n", 0);
//   printf("orig:%i\nmine:%i\n\n", i , j);

//   printf("6)\n");
//   i = printf("orig:\"%-10.d\"\n", 0);//Работает
//   j = ft_printf("mine:\"%-10.d\"\n", 0);
//   printf("orig:%i\nmine:%i\n\n", i , j);
// 
// ft_printf("m%03.2d\n", -1);//Работает
// printf("o%03.2d\n", -1);

// printf("\n");
// ft_printf("m@moulitest: %.d %.0d\n", 42, 43);//Работает
// printf("o@moulitest: %.d %.0d\n", 42, 43);

//СДЕЛАТЬ РАЗБОРКУ С ФЛАГОМ SPACE  !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!   
// printf("o{%-15Z}\n", 123); ft_printf("{%-15Z}\n", 123);//Мой не выделяет ширину строки!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
// printf("{%10R}\n");  ft_printf("{%10R}\n");//Мой не выделяет ширину строки!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!


// ft_
// ft_
// ft_

  //   printf("************************* X_TESTS: *****************************\n");
  // printf("%s\n", "1)");
  // printf("o%x\n", 42);
  // ft_printf("m%x\n\n", 42);
  // printf("%s\n", "2)");
  // printf("%x\n", -42);
  // ft_printf("%x\n\n", -42);
  // printf("%s\n", "3)");
  // printf("%#x\n", 42);
  // ft_printf("%#x\n\n", 42);
  // printf("%s\n", "4)");
  // printf("%10x\n", 42);
  // ft_printf("%10x\n\n", 42);
  // printf("%s\n", "5)");
  // printf("%10.x\n", 42);
  // ft_printf("%10.x\n\n", 42);
  // printf("%s\n", "6)");
  // printf("%10.0x\n", 42);
  // ft_printf("%10.0x\n\n", 42);
  // printf("%s\n", "7)");
  // printf("%10.2x\n", 42);
  // ft_printf("%10.2x\n\n", 42);
  // printf("%s\n", "8)");
  // printf("%10.4x\n", 42);
  // ft_printf("%10.4x\n\n", 42);
  // printf("%s\n", "9)");
  // printf("%10.11x\n", 42);
  // ft_printf("%10.11x\n\n", 42);
  // printf("%s\n", "10)");
  // printf("%#0x\n", 42);
  // ft_printf("%#0x\n\n", 42);
  // printf("%s\n", "11)");
  // printf("%#010x\n", 42);
  // ft_printf("%#010x\n\n", 42);
  // printf("%s\n", "12)");
  // printf("%#010.x\n", 42);
  // ft_printf("%#010.x\n", 42);
  // printf("%s\n", "13)");
  // printf("%#010.0x\n", 42);
  // ft_printf("%#010.0x\n\n", 42);
  // printf("%s\n", "14)");
  // printf("%#010.2x\n", 42);
  // ft_printf("%#010.2x\n\n", 42);
  // printf("%s\n", "15)");
  // printf("%#010.4x\n", 42);
  // ft_printf("%#010.4x\n\n", 42);
  // printf("%s\n", "16)");
  // printf("%#010.11x\n", 42);
  // ft_printf("%#010.11x\n\n", 42);
  // printf("%s\n", "17)");
  // printf("%#10x\n", 42);
  // ft_printf("%#10x\n\n", 42);
  // printf("%s\n", "18)");
  // printf("%#10.x\n", 42);
  // ft_printf("%#10.x\n\n", 42);
  // printf("%s\n", "19)");
  // printf("%#10.0x\n", 42);
  // ft_printf("%#10.0x\n\n", 42);
  // printf("%s\n", "20)");
  // printf("%#10.2x\n", 42);
  // ft_printf("%#10.2x\n\n", 42);
  // printf("%s\n", "21)");
  // printf("%#10.4x\n", 42);
  // ft_printf("%#10.4x\n\n", 42);
  // printf("%s\n", "22)");
  // printf("%#10.11x\n", 42);
  // ft_printf("%#10.11x\n\n", 42);
  // printf("%s\n", "23)");
  // printf("%#x\n", 42);
  // ft_printf("%#x\n\n", 42);
  // printf("%s\n", "24)");
  // printf("%10x\n", 42);
  // ft_printf("%10x\n\n", 42);
  // printf("%s\n", "25)");
  // printf("%10.x\n", 42);
  // ft_printf("%10.x\n\n", 42);
  // printf("%s\n", "26)");
  // printf("%10.0x\n", 42);
  // ft_printf("%10.0x\n\n", 42);
  // printf("%s\n", "27)");
  // printf("%10.2x\n", 42);
  // ft_printf("%10.2x\n\n", 42);
  // printf("%s\n", "28)");
  // printf("%10.4x\n", 42);
  // ft_printf("%10.4x\n\n", 42);
  // printf("%s\n", "29)");
  // printf("%10.11x\n", 42);
  // ft_printf("%10.11x\n\n", 42);
  // printf("%s\n", "30)");
  // printf("%#0x\n", 42);
  // ft_printf("%#0x\n\n", 42);
  // printf("%s\n", "31)");
  // printf("%#010x\n", 42);
  // ft_printf("%#010x\n\n", 42);
  // printf("%s\n", "32)");
  // printf("%#010.x\n", 42);
  // ft_printf("%#010.x\n\n", 42);
  // printf("%s\n", "33)");
  // printf("%#010.0x\n", 42);
  // ft_printf("%#010.0x\n\n", 42);
  // printf("%s\n", "34)");
  // printf("%#010.2x\n", 42);
  // ft_printf("%#010.2x\n\n", 42);
  // printf("%s\n", "35)");
  // printf("%#010.4x\n", 42);
  // ft_printf("%#010.4x\n\n", 42);
  // printf("%s\n", "36)");
  // printf("%#010.11x\n", 42);
  // ft_printf("%#010.11x\n\n", 42);
  // printf("%s\n", "37)");
  // printf("%#10x\n", 42);
  // ft_printf("%#10x\n\n", 42);
  // printf("%s\n", "38)");
  // printf("%#10.x\n", 42);
  // ft_printf("%#10.x\n\n", 42);
  // printf("%s\n", "39)");
  // printf("%#10.0x\n", 42);
  // ft_printf("%#10.0x\n\n", 42);
  // printf("%s\n", "40)");
  // printf("%#10.2x\n", 42);
  // ft_printf("%#10.2x\n\n", 42);
  // printf("%s\n", "41)");
  // printf("%#10.4x\n", 42);
  // ft_printf("%#10.4x\n\n", 42);
  // printf("%s\n", "42)");
  // printf("%#10.11x\n", 42);
  // ft_printf("%#10.11x\n\n", 42);
  // printf("%s\n", "43)");
  // printf("%-#x\n", 42);
  // ft_printf("%-#x\n\n", 42);
  // printf("%s\n", "44)");
  // printf("%-10x\n", 42);
  // ft_printf("%-10x\n\n", 42);
  // printf("%s\n", "45)");
  // printf("%-10.x\n", 42);
  // ft_printf("%-10.x\n\n", 42);
  // printf("%s\n", "46)");
  // printf("%-10.0x\n", 42);
  // ft_printf("%-10.0x\n\n", 42);
  // printf("%s\n", "47)");
  // printf("%-10.2x\n", 42);
  // ft_printf("%-10.2x\n\n", 42);
  // printf("%s\n", "48)");
  // printf("%-10.4x\n", 42);
  // ft_printf("%-10.4x\n\n", 42);
  // printf("%s\n", "49)");
  // printf("%-10.11x\n", 42);
  // ft_printf("%-10.11x\n\n", 42);
  // printf("%s\n", "50)");
  // printf("%-#0x\n", 42);
  // ft_printf("%-#0x\n\n", 42);
  // printf("%s\n", "51)");
  // printf("%-#010x\n", 42);
  // ft_printf("%-#010x\n\n", 42);
  // printf("%s\n", "52)");
  // printf("%-#010.x\n", 42);
  // ft_printf("%-#010.x\n\n", 42);
  // printf("%s\n", "53)");
  // printf("%-#010.0x\n", 42);
  // ft_printf("%-#010.0x\n\n", 42);
  // printf("%s\n", "54)");
  // printf("%-#010.2x\n", 42);
  // ft_printf("%-#010.2x\n\n", 42);
  // printf("%s\n", "55)");
  // printf("%-#010.4x\n", 42);
  // ft_printf("%-#010.4x\n\n", 42);
  // printf("%s\n", "56)");
  // printf("%-#010.11x\n", 42);
  // ft_printf("%-#010.11x\n\n", 42);
  // printf("%s\n", "57)");
  // printf("%-#10x\n", 42);
  // ft_printf("%-#10x\n\n", 42);
  // printf("%s\n", "58)");
  // printf("%-#10.x\n", 42);
  // ft_printf("%-#10.x\n\n", 42);
  // printf("%s\n", "59)");
  // printf("%-#10.0x\n", 42);
  // ft_printf("%-#10.0x\n\n", 42);
  // printf("%s\n", "60)");
  // printf("%-#10.2x\n", 42);
  // ft_printf("%-#10.2x\n\n", 42);
  // printf("%s\n", "61)");
  // printf("%-#10.4x\n", 42);
  // ft_printf("%-#10.4x\n\n", 42);
  // printf("%s\n", "62)");
  // printf("%-#10.11x\n", 42);
  // ft_printf("%-#10.11x\n\n", 42);
  // printf("**************** END OF X TESTS *******************\n\n\n");
  // printf("**************42 x&X test**************\n");
  // printf("%s\n", "20.");
  // printf("%x\n", 123);
  // ft_printf("%x\n\n", 123);
  // printf("%s\n", "21.");
  // printf("%10X\n", 123);
  // ft_printf("%10X\n\n", 123);
  
  // printf("%s\n", "23. FAIL");
  // printf("%lx\n", 4294967296);
  // ft_printf("%lx\n\n", 4294967296);

  // printf("%s\n", "24. FAIL");
  // printf("%llx\n", 4294967296);
  // ft_printf("%llx\n\n", 4294967296);

  // printf("o%jx\n", 4294967295);
  // ft_printf("m%jx\n\n", 4294967295);

  // printf("%s\n", "25");
  // printf("o%hx\n", 4294967296);
  // ft_printf("m%hx\n\n", 4294967296);
  
  // printf("21o{%jx}\n", 4294967296);
  // ft_printf("21m{%jx}\n\n", 4294967296);


  // printf("22o{%jx}\n", -4294967296);
  // ft_printf("22m{%jx}\n\n", -4294967296);

  //   printf("23o{%jx}\n", -4294967297);  
  // ft_printf("23m{%jx}\n\n", -4294967297);

  // ft_printf("{%llx}\n", 9223372036854775807);
  // ft_printf("{%#llx}\n", 9223372036854775807);
  // ft_printf("{%llx}\n", 9223372036854775808);
  // ft_printf("{%#x}\n", 0);
  // ft_printf("{%#x}\n", 42); 
  // ft_printf("{%#-08x}\n", 42);
  // ft_printf("{%#08x}\n", 42);
  // ft_printf("{%#8x}\n", 42);

  // 25.      ft_printf("%hx", 4294967296);                 -> "0"
  // 26.      ft_printf("%hhX", 4294967296);                -> "0"
  // 27.      ft_printf("%jx", 4294967295);                 -> "ffffffff"
  // 28. FAIL ft_printf("%jx", 4294967296);                 -> "100000000"
  // 29. FAIL ft_printf("%jx", -4294967296);                -> "ffffffff00000000"
  // 30. FAIL ft_printf("%jx", -4294967297);                -> "fffffffeffffffff"
  // 31. FAIL ft_printf("%llx", 9223372036854775807);       -> "7fffffffffffffff"
  // 32. FAIL ft_printf("%llx", 9223372036854775808);       -> "7fffffffffffffff"
  // 33.      ft_printf("%010x", 542);                      -> "000000021e"
  // 34.      ft_printf("%-15x", 542);                      -> "21e            "
  // 35.      ft_printf("%2x", 542);                        -> "21e"
  // 36.      ft_printf("%.2x", 5427);                      -> "1533"
  // 37.      ft_printf("%5.2x", 5427);                     -> " 1533"
  // 38. FAIL ft_printf("%#x", 42);                         -> "0x2a"
  // 39. FAIL ft_printf("%#llx", 9223372036854775807);      -> "0x7fffffffffffffff"
  // 40. FAIL ft_printf("%#x", 0);                          -> "0"
  // 41. FAIL ft_printf("%#x", 42);                         -> "0x2a"
  // 42. FAIL ft_printf("%#X", 42);                         -> "0X2A"
  // 43. FAIL ft_printf("%#8x", 42);                        -> "    0x2a"
  // 44. FAIL ft_printf("%#08x", 42);                       -> "0x00002a"
  // 45. FAIL ft_printf("%#-08x", 42);                      -> "0x2a    "
  // 46. FAIL ft_printf("@moulitest: %#.x %#.0x", 0, 0);    -> "@moulitest:  "



    // printf("o%.f\n", 22.05565656);
    // ft_printf("m%.f\n", 22.05565656);

  //     printf("* **************** FLOAT TESTS ***************************** *\n");

 //  printf("1)\no{%.18f}\n", 0.0004242);
 //  ft_printf("m{%.18f}\n\n", 0.0004242);


 //  printf("3)\n{%f}\n", 42.424242);
 //  ft_printf("{%f}\n\n", 42.424242);

 //  printf("4)\n{%.f}\n", 42.42);
 //  ft_printf("{%.f}\n\n", 42.42);

 //  printf("5)\n{%.0f}\n", 42.42);
 //  ft_printf("{%.0f}\n\n", 42.42);

 //  printf("6)\n{%.2f}\n", 42.42);
 //  ft_printf("{%.2f}\n\n", 42.42);

 //  printf("7)\n{%.3f}\n", 42.42);
 //  ft_printf("{%.3f}\n\n", 42.42);

 //  printf("8)\n{%.10f}\n", 42.42);
 //  ft_printf("{%.10f}\n\n", 42.42);

 //  printf("9)\n{%.16f}\n", 42.42);
 //  ft_printf("{%.16f}\n\n", 42.42);

 //  printf("9_1)\no{%.1f}\n", 42.99);
 //  ft_printf("m{%.1f}\n\n", 42.99);

 //  printf("%f\n", 99.999999);
 //  ft_printf("%f\n\n", 99.999999);

 // printf("%f\n", 99.9999999);
 //  ft_printf("%f\n\n", 99.9999999);

 //  printf("%.f\n", 2.5);
 //  ft_printf("%.f\n\n", 2.5);


 // printf("%.f\n", 3.5);
 //  ft_printf("%.f\n\n", 3.5);


  // printf("8)\n{%.10f}\n", -42.42);
  // ft_printf("{%.10f}\n\n", -42.42);

 //  printf("9)\n{%.16f}\n", -42.42);
 //  ft_printf("{%.16f}\n\n", -42.42);

 //  printf("9_1)\no{%.1f}\n", -42.99);
 //  ft_printf("m{%.1f}\n\n", -42.99);

 //  printf("%f\n", -99.999999);
 //  ft_printf("%f\n\n", -99.999999);

 // printf("%f\n", -99.9999999);
 //  ft_printf("%f\n\n", -99.9999999);

 //  printf("%.f\n", -2.5);
 //  ft_printf("%.f\n\n", -2.5);


 // printf("%.f\n", -3.5);
 //  ft_printf("%.f\n\n", -3.5);

 //   printf("%.2f\n", -13.156);
 //  ft_printf("%.2f\n\n", -13.156);

 //  printf("12)\n{%-15f}\n", -0.0);
 //  ft_printf("{%-15f}\n\n", -0.0);
  



// printf("original res - %d\n", printf("{%f}", -0.0));
//     ft_printf("res - %d\n", ft_printf("{%f}", -0.0));
//         printf("original res - %d\n", printf("{%.1f}", -0.0));
//     ft_printf("res - %d\n", ft_printf("{%.1f}", -0.0));
//         printf("original res - %d\n", printf("{%.f}", -0.0));
//     ft_printf("res - %d\n", ft_printf("{%.f}", -0.0));
//         printf("original res - %d\n", printf("{%+.8f}", -0.0));
//     ft_printf("res - %d\n", ft_printf("{%+.8f}", -0.0));
    



    printf("* **************** FLOAT TESTS ***************************** *\n");

  // printf("1)\n{%.19f}\n", 0.0004242);
  // ft_printf("{%.19f}\n\n", 0.0004242);

  // printf("2)\n{%.50f}\n", 42.42424242);
  // ft_printf("{%.50f}\n\n", 42.42424242);

  // printf("3)\n{%f}\n", 42.424242);
  // ft_printf("{%f}\n\n", 42.424242);

  // printf("4)\n{%.f}\n", 42.42);
  // ft_printf("{%.f}\n\n", 42.42);

  // printf("5)\n{%.0f}\n", 42.42);
  // ft_printf("{%.0f}\n\n", 42.42);

  // printf("6)\n{%.2f}\n", 42.42);
  // ft_printf("{%.2f}\n\n", 42.42);

  // printf("7)\n{%.3f}\n", 42.42);
  // ft_printf("{%.3f}\n\n", 42.42);

  // printf("8)\n{%.10f}\n", 42.42);
  // ft_printf("{%.10f}\n\n", 42.42);

  // printf("9)\n{%.20f}\n", 42.42);
  // ft_printf("{%.20f}\n\n", 42.42);

  // printf("9.1)\n{%.200f}\n", 42.42);
  // ft_printf("{%.200f}\n\n", 42.42);

  // printf("9.2)\n{%.2000f}\n", 42.42);
  // ft_printf("{%.2000f}\n\n", 42.42);

  // printf("9.3)\n{%.20000f}\n", 42.42);
  // printf("{%.20000f}\n\n", 42.42);

  // printf("10)\n{%15f}\n", 42.42);
  // ft_printf("{%15f}\n\n", 42.42);

  // printf("11)\n{%15f}\n", -42.42);
  // ft_printf("{%15f}\n\n", -42.42);

  // printf("12)\n{%-15f}\n", -0.0);
  // ft_printf("{%-15f}\n\n", -0.0);

  // printf("13)\n{%15f}\n", 0.0);
  // ft_printf("{%15f}\n\n", 0.0);

  // printf("14)\n{%20f}\n", 42.42);
  // ft_printf("{%20f}\n\n", 42.42);

  // printf("15)\n{%20.f}\n", 42.42);
  // ft_printf("{%20.f}\n\n", 42.42);

  // printf("16)\n{%20.0f}\n", 42.42);
  // ft_printf("{%20.0f}\n\n", 42.42);

  // printf("17)\n{%020.0f}\n", 42.42);
  // ft_printf("{%020.0f}\n\n", 42.42);

  // printf("18)\n{% 020.0f}\n", 42.42);
  // ft_printf("{% 020.0f}\n\n", 42.42);

  // printf("19)\n{%020.0f}\n", -42.42);
  // ft_printf("{%020.0f}\n\n", -42.42);

  // printf("20)\n{%-20.0f}\n", 42.42);
  // ft_printf("{%-20.0f}\n\n", 42.42);

  // printf("21)\n{%-20.0f}\n", 42.42);
  // ft_printf("{%-20.0f}\n\n", 42.42);

  // printf("22)\n{%-20.1f}\n", 42.42);
  // ft_printf("{%-20.1f}\n\n", 42.42);

  // printf("23)\n{%-20f}\n", 42.42);
  // ft_printf("{%-20f}\n\n", 42.42);

  // printf("24\n{%+20.f}\n", 42.42);
  // ft_printf("{%+20.f}\n\n", 42.42);

  // printf("25\n{%-+20.f}\n", 42.42);
  // ft_printf("{%-+20.f}\n\n", 42.42);

  // printf("26)\n{%-+20.f}\n", -42.42);
  // ft_printf("{%-+20.f}\n\n", -42.42);

  // printf("27)\n{%-+20.200f}\n", -42.42);
  // ft_printf("{%-+20.200f}\n\n", -42.42);

  // printf("28)\n{%+020.200f}\n", -42.42);
  // ft_printf("{%+020.200f}\n\n", -42.42);

  // printf("29)\n{%10f}\n", -42.42);
  // ft_printf("{%10f}\n\n", -42.42);

  // printf("30)\n{%.f}\n", 3.5);
  // ft_printf("{%.f}\n\n", 3.5);

  // printf("31)\n{%.f}\n", 3.2);
  // ft_printf("{%.f}\n\n", 3.2);

  // printf("32)\n{%.1f}\n", 3.22);
  // ft_printf("{%.1f}\n\n", 3.22);

  // printf("33)\n{%.1f}\n", 3.27);
  // ft_printf("{%.1f}\n\n", 3.27);

  // printf("34)\n{%.1f}\n", 3.25);
  // ft_printf("{%.1f}\n\n", 3.25);

  // printf("35)\n{%.f}\n", 2.5);
  // ft_printf("{%.f}\n\n", 2.5);

  // printf("36)\n{%.7f}\n", 99.999);
  // ft_printf("{%.7f}\n\n", 99.999);

  // printf("37)\n{%.7f}\n", 99.9999999);
  // ft_printf("{%.7f}\n\n", 99.9999999);

  // printf("38)\n{%.7f}\n", 99.99999999);
  // ft_printf("{%.7f}\n\n", 99.99999999);

  // printf("39)\n{%.7f}\n", 99.99999999999);
  // ft_printf("{%.7f}\n\n", 99.99999999999);

  // printf("40)\n{%#.f}\n", 99.9);
  // ft_printf("{%#.f}\n\n", 99.9);

  // printf("40.1)\n{%#.f}\n", 98.9);
  // ft_printf("{%#.f}\n\n", 98.9);

  // printf("41)\n{%.f}\n", 99.5);
  // ft_printf("{%.f}\n\n", 99.5);

  // printf("41.1)\n{%.f}\n", 98.5);
  // ft_printf("{%.f}\n\n", 98.5);

  // printf("42)\n{%.Lf}\n", 9999999999999999999.9l);
  // ft_printf("{%.Lf}\n\n", 9999999999999999999.9l);
  // // округление в большую сторону идет только по нечетным числам,
  // // в меньшую по четным (примеры ниже)
  // printf("43)\n{%.f}\n", 2.5);
  // ft_printf("{%.f}\n\n", 2.5);

  // printf("44)\n{%.f}\n", 3.5);
  // ft_printf("{%.f}\n\n", 3.5);

  // printf("45)\n{%.2f}\n", 3.559);
  // ft_printf("{%.2f}\n\n", 3.559);

  // printf("46)\n{%.3f}\n", 3.559);
  // ft_printf("{%.3f}\n\n", 3.559);

  // printf("47)\n{%.2f}\n", 3.59999999);
  // ft_printf("{%.2f}\n\n", 3.59999999);

  // printf("48)\n{%.2f}\n", 3.55111111);
  // ft_printf("{%.2f}\n\n", 3.55111111);

  // printf("49)\n{%f}\n", 0.0/0.0);
  // ft_printf("{%f}\n\n", 0.0/0.0);

  // printf("50)\n{%f}\n", 3.0/0.0);
  // ft_printf("{%f}\n\n", 3.0/0.0);

  // printf("51)\n{%f}\n", -3.0/0.0);
  // ft_printf("{%f}\n\n", -3.0/0.0);

  char *p;
  p = "hell234567890";
  printf("%p\n", p);

int i;
i = p;
printf("i = %d\n", i);
system("leaks a.out");
    return (0);
}