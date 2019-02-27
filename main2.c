#include "ft_printf.h"
#include <stdbool.h>

int		main(void)
{
// 	printf("************************** Start Of Undefined Behaviour Tests: *********************************\n");
//     printf("1) \"%%\" -> \"\"\n");
//     ft_printf("mine:%\n");
//     printf("orig:%\n");
//     printf("2) \"%% \" -> \"\"\n");
//     ft_printf("mine:% \n");
//     printf("orig:% \n");
//     printf("3) \"%% h\" -> \"\"\n");
//     ft_printf("mine:% h\n");
//     printf("orig:% h\n");
//     printf("4) \"%%Z\" -> \"Z\"\n");
//     ft_printf("mine:%Z\n");
//     printf("orig:%Z\n");
//     printf("5) \"%% hZ\" -> \"Z\"\n");
//     ft_printf("mine:% hZ\n");
//     printf("orig:% hZ\n");
//     printf("6) \"%%05%%\" -> \"0000%\"\n");
//     ft_printf("mine:%05%\n");
//     printf("orig:%05%\n");
//     printf("7) \"%%-05%%\" -> \"%%    \"\n");
//     ft_printf("mine:%-05%\n");
//     printf("orig:%-05%\n");
//     printf("8) \"%% hZ\" -> \"Z\"\n");
//     ft_printf("mine:% hZ%\n");
//     printf("orig:% hZ%\n");
//     printf("9) \"%% Z%%\" -> \"Z\"\n");
//     ft_printf("mine:% Z%\n", "test");
//     printf("orig:% Z%\n", "test");
//     printf("10) \"%% Z \" -> \"Z \"\n");
//     ft_printf("mine:% Z \n", "test");
//     printf("orig:% Z \n", "test");
//     printf("11) \"%% Z%%s\\n\" -> \"Ztest\"\n");
//     ft_printf("mine:% Z%s\n", "test");
//     printf("orig:% Z%s\n", "test");
//     ft_printf("12) %000   %\n", "test\n");//                -> "%"
//     ft_printf("13) %%%\n", "test\n");//                     -> "%"
//     ft_printf("14) %%   %\n", "test\n"); //            -> "%   "
//     ft_printf("15) %ll#x\n", 9223372036854775807);//      -> "0x7fffffffffffffff"
//     ft_printf("16) %010s is a string\n", "this");//       -> "000000this is a string"
//     ft_printf("17) %-010s is a string\n", "this");//      -> "this       is a string"
//     ft_printf("18) %05c\n", 42);//                        -> "0000*"
//     ft_printf("19) % Z\n", 42);//                         -> "Z"
//     ft_printf("20) %0 d\n", 42);//                        -> " 42"
//     ft_printf("21) %0 d\n", -42);//                       -> "-42"
//     ft_printf("22) % 0d\n", 42);//                        -> " 42"
//     ft_printf("23) % 0d\n", -42);//                       -> "-42"
//     ft_printf("24) %5+d\n", 42);//                        -> "  +42"
//     ft_printf("25) %5+d\n", -42);//                       -> "  -42"
//     ft_printf("26) %-5+d\n", 42);//                       -> "+42  "
//     ft_printf("27) %-0+5d\n", 42);//                      -> "+42  "
//     ft_printf("28) %-5+d\n", -42);//                      -> "-42  "
//     ft_printf("29) %-0+5d\n", -42);//                     -> "-42  "
//     ft_printf("30) %zhd\n", 4294967296);//                -> "4294967296"
//     ft_printf("31) %jzd\n", 9223372036854775807);//       -> "9223372036854775807"
//     ft_printf("32) %jhd\n", 9223372036854775807);//       -> "9223372036854775807"
//     ft_printf("33) %lhl\n", 9223372036854775807);//       -> ""
//     ft_printf("34) %lhlz\n", 9223372036854775807);//      -> ""
//     ft_printf("35) %zj\n", 9223372036854775807);//        -> ""
//     ft_printf("36) %lhh\n", 2147483647);//                -> ""
//     ft_printf("37) %hhld\n", 128);//                      -> "128"
//     ft_printf("38) @main_ftprintf: %####0000 33..1..#00d\n", 256);
//     ft_printf("38) @main_ftprintf: %####0000 33..1..#00d\n", 256);// -> "@main_ftprintf:                               256$\n" оригинал выводит иначе
//     ft_printf("39) @main_ftprintf: %####0000 33..1d\n", 256);// -> "@main_ftprintf:                               256"
//     ft_printf("40) @main_ftprintf: %###-#0000 33...12..#0+0d\n", 256);// -> "@main_ftprintf: +256                             "
// printf("*********************** End Of Undefined Behaviour Tests *****************************\n");

	// printf("orig:%#010.6o\n", 42);
	// ft_printf("mine:%#010.6o\n\n", 42);

	// printf("************************* X_TESTS: *****************************\n");
	// printf("%s\n", "1)");
	// printf("%x\n", 42);
	// ft_printf("%x\n\n", 42);
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
	printf("**************** D and I TESTS ********************\n");
	// printf("%s\n", "1)");
	// printf("%d\n", 42);
	// ft_printf("%d\n\n", 42);
	// printf("%s\n", "2)");
	// printf("%d\n", -42);
	// ft_printf("%d\n\n", -42);
	// printf("%s\n", "3)");
	// printf("%#d\n", 42);
	// ft_printf("%#d\n\n", 42);
	// printf("%s\n", "4)");
	// printf("%10d\n", 42);
	// ft_printf("%10d\n\n", 42);
	// printf("%s\n", "5)");
	// printf("%10.d\n", 42);
	// ft_printf("%10.d\n\n", 42);
	// printf("%s\n", "6)");
	// printf("%10.0d\n", 42);
	// ft_printf("%10.0d\n\n", 42);
	// printf("%s\n", "7)");
	// printf("%10.2d\n", 42);
	// ft_printf("%10.2d\n\n", 42);
	// printf("%s\n", "8)");
	// printf("%10.4d\n", 42);
	// ft_printf("%10.4d\n\n", 42);
	// printf("%s\n", "9)");
	// printf("%10.11d\n", 42);
	// ft_printf("%10.11d\n\n", 42);
	// printf("%s\n", "10)");
	// printf("%+0d\n", 42);
	// ft_printf("%+0d\n\n", 42);
	// printf("%s\n", "11)");
	// printf("%+010d\n", 42);
	// ft_printf("%+010d\n\n", 42);
	  // (1-11 WORK!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!)
	

	printf("%s\n", "12)");
	printf("%+010.d\n", 42);
	ft_printf("%+010.d\n\n", 42);
	

	printf("%s\n", "13)");
	printf("%+010.0d\n", 42);
	ft_printf("%+010.0d\n\n", 42);
	

	printf("%s\n", "14)");
	printf("%+010.2d\n", 42);
	ft_printf("%+010.2d\n\n", 42);
	// printf("%s\n", "15)");
	// printf("%+010.4d\n", 42);
	// ft_printf("%+010.4d\n\n", 42);
	// printf("%s\n", "16)");
	// printf("%+010.11d\n", 42);
	// ft_printf("%+010.11d\n\n", 42);
	// printf("%s\n", "17)");
	// printf("%+10d\n", 42);
	// ft_printf("%+10d\n\n", 42);
	// printf("%s\n", "18)");
	// printf("%+10.d\n", 42);
	// ft_printf("%+10.d\n\n", 42);
	// printf("%s\n", "19)");
	// printf("%+10.0d\n", 42);
	// ft_printf("%+10.0d\n\n", 42);
	// printf("%s\n", "20)");
	// printf("%+10.2d\n", 42);
	// ft_printf("%+10.2d\n\n", 42);
	// printf("%s\n", "21)");
	// printf("%+10.4d\n", 42);
	// ft_printf("%+10.4d\n\n", 42);
	// printf("%s\n", "22)");
	// printf("%+10.11d\n", 42);
	// ft_printf("%+10.11d\n\n", 42);
	// printf("%s\n", "23)");
	// printf("%+d\n", 42);
	// ft_printf("%+d\n\n", 42);
	// printf("%s\n", "24)");
	// printf("%10d\n", 42);
	// ft_printf("%10d\n\n", 42);
	// printf("%s\n", "25)");
	// printf("%10.d\n", 42);
	// ft_printf("%10.d\n\n", 42);
	// printf("%s\n", "26)");
	// printf("%10.0d\n", 42);
	// ft_printf("%10.0d\n\n", 42);
	// printf("%s\n", "27)");
	// printf("%10.2d\n", 42);
	// ft_printf("%10.2d\n\n", 42);
	// printf("%s\n", "28)");
	// printf("%10.4d\n", 42);
	// ft_printf("%10.4d\n\n", 42);
	// printf("%s\n", "29)");
	// printf("%10.11d\n", 42);
	// ft_printf("%10.11d\n\n", 42);
	// printf("%s\n", "30)");
	// printf("%+0d\n", 42);
	// ft_printf("%+0d\n\n", 42);
	// printf("%s\n", "31)");
	// printf("%+010d\n", 42);
	// ft_printf("%+010d\n\n", 42);
	// printf("%s\n", "32)");
	// printf("%+010.d\n", 42);
	// ft_printf("%+010.d\n\n", 42);
	// printf("%s\n", "33)");
	// printf("%+010.0d\n", 42);
	// ft_printf("%+010.0d\n\n", 42);
	// printf("%s\n", "34)");
	// printf("%+010.2d\n", 42);
	// ft_printf("%+010.2d\n\n", 42);
	// printf("%s\n", "35)");
	// printf("%+010.4d\n", 42);
	// ft_printf("%+010.4d\n\n", 42);
	// printf("%s\n", "36)");
	// printf("%+010.11d\n", 42);
	// ft_printf("%+010.11d\n\n", 42);
	// printf("%s\n", "37)");
	// printf("%+10d\n", 42);
	// ft_printf("%+10d\n\n", 42);
	// printf("%s\n", "38)");
	// printf("%+10.d\n", 42);
	// ft_printf("%+10.d\n\n", 42);
	// printf("%s\n", "39)");
	// printf("%+10.0d\n", 42);
	// ft_printf("%+10.0d\n\n", 42);
	// printf("%s\n", "40)");
	// printf("%+10.2d\n", 42);
	// ft_printf("%+10.2d\n\n", 42);
	// printf("%s\n", "41)");
	// printf("%+10.4d\n", 42);
	// ft_printf("%+10.4d\n\n", 42);
	// printf("%s\n", "42)");
	// printf("%+10.11d\n", 42);
	// ft_printf("%+10.11d\n\n", 42);
	// printf("%s\n", "43)");
	// printf("%-+d\n", 42);
	// ft_printf("%-+d\n\n", 42);
	// printf("%s\n", "44)");
	// printf("%-10d\n", 42);
	// ft_printf("%-10d\n\n", 42);
	// printf("%s\n", "45)");
	// printf("%-10.d\n", 42);
	// ft_printf("%-10.d\n\n", 42);
	// printf("%s\n", "46)");
	// printf("%-10.0d\n", 42);
	// ft_printf("%-10.0d\n\n", 42);
	// printf("%s\n", "47)");
	// printf("%-10.2d\n", 42);
	// ft_printf("%-10.2d\n\n", 42);
	// printf("%s\n", "48)");
	// printf("%-10.4d\n", 42);
	// ft_printf("%-10.4d\n\n", 42);
	// printf("%s\n", "49)");
	// printf("%-10.11d\n", 42);
	// ft_printf("%-10.11d\n\n", 42);
	// printf("%s\n", "50)");
	// printf("%-+0d\n", 42);
	// ft_printf("%-+0d\n\n", 42);
	// printf("%s\n", "51)");
	// printf("%-+010d\n", 42);
	// ft_printf("%-+010d\n\n", 42);
	// printf("%s\n", "52)");
	// printf("%-+010.d\n", 42);
	// ft_printf("%-+010.d\n\n", 42);
	// printf("%s\n", "53)");
	// printf("%-+010.0d\n", 42);
	// ft_printf("%-+010.0d\n\n", 42);
	// printf("%s\n", "54)");
	// printf("%-+010.2d\n", 42);
	// ft_printf("%-+010.2d\n\n", 42);
	// printf("%s\n", "55)");
	// printf("%-+010.4d\n", 42);
	// ft_printf("%-+010.4d\n\n", 42);
	// printf("%s\n", "56)");
	// printf("%-+010.11d\n", 42);
	// ft_printf("%-+010.11d\n\n", 42);
	// printf("%s\n", "57)");
	// printf("%-+10d\n", 42);
	// ft_printf("%-+10d\n\n", 42);
	// printf("%s\n", "58)");
	// printf("%-+10.d\n", 42);
	// ft_printf("%-+10.d\n\n", 42);
	// printf("%s\n", "59)");
	// printf("%-+10.0d\n", 42);
	// ft_printf("%-+10.0d\n\n", 42);
	// printf("%s\n", "60)");
	// printf("%-+10.2d\n", 42);
	// ft_printf("%-+10.2d\n\n", 42);
	// printf("%s\n", "61)");
	// printf("%-+10.4d\n", 42);
	// ft_printf("%-+10.4d\n\n", 42);
	// printf("%s\n", "62)");
	// printf("%-+10.11d\n", 42);
	// ft_printf("%-+10.11d\n\n", 42);
	// printf("%s\n", "63)");
	// printf("%-+10.11d\n", 42);
	// ft_printf("%-+10.11d\n\n", 42);
	// printf("%s\n", "64)");
	// printf("%+d\n", 42);
	// ft_printf("%+d\n\n", 42);
	// printf("%s\n", "65)");
	// printf("%-+d\n", 42);
	// ft_printf("%-+d\n\n", 42);
	// printf("%s\n", "66)");
	// printf("% d\n", 42);
	// ft_printf("% d\n\n", 42);
	// printf("%s\n", "67)");
	// printf("%- d\n", 42);
	// ft_printf("%- d\n\n", 42);
	// printf("%s\n", "68)");
	// printf("% +d\n", 42);
	// ft_printf("% +d\n\n", 42);
	// printf("%s\n", "69)");
	// printf("%- +d\n", 42);
	// ft_printf("%- +d\n\n", 42);
	// printf("%d\n", 42);
	// ft_printf("%d\n", 42);
	// printf("%d\n", -42);
	// ft_printf("%d\n", -42);
	// printf("% d\n", 42);
	// ft_printf("% d\n", 42);
	// printf("% d\n", -42);
	// ft_printf("% d\n", -42);
	// printf("% d\n", -42);
	// ft_printf("% d\n", -42);
	// printf("%+d\n", 42);
	// ft_printf("%+d\n", 42);
	// printf("%10d\n", 42);
	// ft_printf("%10d\n", 42);
	// printf("%10d\n", -42);
	// ft_printf("%10d\n", -42);
	// printf("%010d\n", 42);
	// ft_printf("%010d\n", 42);
	// printf("%010d\n", -42);
	// ft_printf("%010d\n", -42);
	// printf("% 010d\n", 42);
	// ft_printf("% 010d\n", 42);
	// printf("%10.d\n", 42);
	// ft_printf("%10.d\n", 42);
	// printf("% 010.d\n", 42);
	// ft_printf("% 010.d\n", 42);
	// printf("% 010.0d\n", 42);
	// ft_printf("% 010.0d\n", 42);
	// printf("% 010.1d\n", 42);
	// ft_printf("% 010.1d\n", 42);
	// printf("% 010.2d\n", 42);
	// ft_printf("% 010.2d\n", 42);
	// printf("% 010.3d\n", 42);
	// ft_printf("% 010.3d\n", 42);
	// printf("% 010.4d\n", -42);
	// ft_printf("% 010.4d\n", -42);
	printf("**************** END OF D and I TESTS ********************\n\n\n");
printf("_________________________________________________________\n");

	// int i = 0;
	// int j = 0;
	// i = printf("%10000.10s\n", "Hello");
	// j = ft_printf("%10000.10s\n", "Hello");
	// printf("%i\n", i);
	// printf("%i\n", j);
printf("_________________________________________________________\n");

	// printf("%10.1f\n", 42.42);
	// ft_printf("%f\n", -42.4242);
	// printf("orig:\"@moulitest: %+05.0d\"\n", 1);
	// ft_printf("mine:\"@moulitest: %+05.0d\"\n", 1);
	// printf("{%5.ZZ}\n", 0);
	// ft_printf("{%5.ZZ}\n", 0);

	// printf("@moulitest: %#.o %#.0o\n", 0, 0);
	// ft_printf("@moulitest: %#.o %#.0o\n\n", 0, 0);

	// printf("%llo, %llo\n", 0, USHRT_MAX);
	// ft_printf("%llo, %llo\n\n", 0, USHRT_MAX);

	// printf("%ju\n", 4294967296);
	// ft_printf("%ju\n\n", 4294967296);
printf("_________________________________________________________\n");

	// printf("%+d\n", 0);
	// ft_printf("%+d\n\n", 0);

	// printf("%15u\n", 4294967295);
	// ft_printf("%15u\n\n", 4294967295);

	// printf("%c\n", NULL);
	// ft_printf("%c\n\n", NULL);
printf("_________________________________________________________\n");

	// printf("********************* NULL TESTS *******************************\n");

	// printf("1)\n");
	// i = printf("orig:\"%d\"\n", 0);
	// j = ft_printf("mine:\"%d\"\n", 0);
	// printf("orig:%i\nmine:%i\n\n", i , j);

	// printf("2)\n");
	// i = printf("orig:\"%.d\"\n", 0);
	// j = ft_printf("mine:\"%.d\"\n", 0);
	// printf("orig:%i\nmine:%i\n\n", i , j);

	// printf("3)\n");
	// i = printf("orig:\"%.0d\"\n", 0);
	// j = ft_printf("mine:\"%.0d\"\n", 0);
	// printf("orig:%i\nmine:%i\n\n", i , j);

	// printf("4)\n");
	// i = printf("orig:\"%10d\"\n", 0);
	// j = ft_printf("mine:\"%10d\"\n", 0);
	// printf("orig:%i\nmine:%i\n\n", i , j);

	// printf("5)\n");
	// i = printf("orig:\"%10.d\"\n", 0);
	// j = ft_printf("mine:\"%10.d\"\n", 0);
	// printf("orig:%i\nmine:%i\n\n", i , j);

	// printf("6)\n");
	// i = printf("orig:\"%-10.d\"\n", 0);
	// j = ft_printf("mine:\"%-10.d\"\n", 0);
	// printf("orig:%i\nmine:%i\n\n", i , j);

	// printf("7)\n");
	// i = printf("orig:\"%-.d\"\n", 0);
	// j = ft_printf("mine:\"%-.d\"\n", 0);
	// printf("orig:%i\nmine:%i\n\n", i , j);

	// printf("8)\n");
	// i = printf("orig:\"%-10.d\"\n", 0);
	// j = ft_printf("mine:\"%-10.d\"\n", 0);
	// printf("orig:%i\nmine:%i\n\n", i , j);

	// printf("9)\n");
	// i = printf("orig:\"%10.d\"\n", 0);
	// j = ft_printf("mine:\"%10.d\"\n", 0);
	// printf("orig:%i\nmine:%i\n\n", i , j);

	// printf("9)\n");
	// i = printf("orig:\"%10.2d\"\n", 0);
	// j = ft_printf("mine:\"%10.2d\"\n", 0);
	// printf("orig:%i\nmine:%i\n\n", i , j);

	// printf("10)\n");
	// i = printf("orig:\"%-10.2d\"\n", 0);
	// j = ft_printf("mine:\"%-10.2d\"\n", 0);
	// printf("orig:%i\nmine:%i\n\n", i , j);

	// printf("11)\n");
	// i = printf("orig:\"%0.d\"\n", 0);
	// j = ft_printf("mine:\"%0.d\"\n", 0);
	// printf("orig:%i\nmine:%i\n\n", i , j);

printf("_________________________________________________________\n");

	// printf("12)\n");
	// i = printf("orig:\"%x\"\n", 0);
	// j = ft_printf("mine:\"%x\"\n", 0);
	// printf("orig:%i\nmine:%i\n\n", i , j);

	// printf("13)\n");
	// i = printf("orig:\"%.x\"\n", 0);
	// j = ft_printf("mine:\"%.x\"\n", 0);
	// printf("orig:%i\nmine:%i\n\n", i , j);

	// printf("14)\n");
	// i = printf("orig:\"%.0x\"\n", 0);
	// j = ft_printf("mine:\"%.0x\"\n", 0);
	// printf("orig:%i\nmine:%i\n\n", i , j);

	// printf("15)\n");
	// i = printf("orig:\"%x\"\n", 0);
	// j = ft_printf("mine:\"%x\"\n", 0);
	// printf("orig:%i\nmine:%i\n\n", i , j);

	// printf("16)\n");
	// i = printf("orig:\"%10.x\"\n", 0);
	// j = ft_printf("mine:\"%10.x\"\n", 0);
	// printf("orig:%i\nmine:%i\n\n", i , j);

	// printf("17)\n");
	// i = printf("orig:\"%-10.x\"\n", 0);
	// j = ft_printf("mine:\"%-10.x\"\n", 0);
	// printf("orig:%i\nmine:%i\n\n", i , j);

	// printf("18)\n");
	// i = printf("orig:\"%-.x\"\n", 0);
	// j = ft_printf("mine:\"%-.x\"\n", 0);
	// printf("orig:%i\nmine:%i\n\n", i , j);

	// printf("19)\n");
	// i = printf("orig:\"%-10.x\"\n", 0);
	// j = ft_printf("mine:\"%-10.x\"\n", 0);
	// printf("orig:%i\nmine:%i\n\n", i , j);

	// printf("20)\n");
	// i = printf("orig:\"%10.x\"\n", 0);
	// j = ft_printf("mine:\"%10.x\"\n", 0);
	// printf("orig:%i\nmine:%i\n\n", i , j);

	// printf("21)\n");
	// i = printf("orig:\"%10.2x\"\n", 0);
	// j = ft_printf("mine:\"%10.2x\"\n", 0);
	// printf("orig:%i\nmine:%i\n\n", i , j);

	// printf("22)\n");
	// i = printf("orig:\"%-10.2x\"\n", 0);
	// j = ft_printf("mine:\"%-10.2x\"\n", 0);
	// printf("orig:%i\nmine:%i\n\n", i , j);

	// printf("23)\n");
	// i = printf("orig:\"%0.x\"\n", 0);
	// j = ft_printf("mine:\"%0.x\"\n", 0);
	// printf("orig:%i\nmine:%i\n\n", i , j);

	// printf("%o\n", 0);
	// ft_printf("%o\n\n", 0);

	// printf("%#o\n", 0);
	// ft_printf("%#o\n\n", 0);

	// printf("%#10.o\n", 0);
	// ft_printf("%#10.o\n\n", 0);

	// printf("%#10o\n", 0);
	// ft_printf("%#10o\n\n", 0);

	// printf("%#-10o\n", 0);
	// ft_printf("%#-10o\n\n", 0);

	// printf("@moulitest: %.o %.0o\n", 0, 0);
	// ft_printf("@moulitest: %.o %.0o\n\n", 0, 0);
printf("_________________________________________________________\n");
// 	printf("{%*%}\n", -15);
// 	ft_printf("{%*%}\n\n", -15);

// 	printf("{%*d}\n", -5, 42);
// 	ft_printf("{%*d}\n\n", -5, 42);

// 	printf("{%.*s}\n", -5, "42");
// 	ft_printf("{%.*s}\n\n", -5, "42");

// 	printf("%*d\n", 5, 42);
// 	ft_printf("%*d\n", 5, 42);

// 	printf("{%*.3s}\n", 3, "Hello");
// 	ft_printf("{%*.3s}\n", 3, "Hello");

// 	// printf("@moulitest: %#.x %#.0x\n", 0, 0);
// 	// ft_printf("@moulitest: %#.x %#.0x\n", 0, 0);

// 	// printf("\n%#-30x\n", 40);
// 	// ft_printf("%#-30x\n\n", 40);

// 	printf("* ************** END OF NULL TESTS ************************* *\n\n\n");
	// printf("* **************** FLOAT TESTS ***************************** *\n");

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

	// printf("* ****************************** BONUSES ****************************** *\n");

	// printf("52)\n{%F}\n", -3.0/0.0);
	// ft_printf("{%F}\n\n", -3.0/0.0);

	// printf("53)\n{%F}\n", 3.0/0.0);
	// ft_printf("{%F}\n\n", 3.0/0.0);

	// printf("54)\n{%F}\n", 0.0/0.0);
	// ft_printf("{%F}\n\n", 0.0/0.0);

	// ft_printf("{%r}\n", "hello\n again\t!");
	// ft_printf("vitya---> %r\n", "Hello my\n guests");
	// ft_printf("{% 10b}\n\n", 23534523452);

	// int counter;
	// counter = ft_printf("{red}%s{eoc}{green} And this is green!\n{eoc}And where the Fuck have you all been?\n{cyan}Do you know - this color's \"Cyan\"?\n{eoc}{yellow}Checking yellow!{eoc} {blue}Blue is fine!{eoc}\n{purple}And purple's nice!{eoc} That's it - I'm done!\n", "This color's red!");
	// printf("%i\n", counter);
	// printf("{%f}{%F}\n", 1.42, 1.42);
	// ft_printf("{%f}{%F}\n\n", 1.42, 1.42);

	// printf("{%f}{%F}\n", -1.42, -1.42);
	// ft_printf("{%f}{%F}\n\n", -1.42, -1.42);

	// printf("{%f}{%F}\n", 1444565444646.6465424242242, 1444565444646.6465424242242);
	// ft_printf("{%f}{%F}\n\n", 1444565444646.6465424242242, 1444565444646.6465424242242);

	// printf("{%f}{%F}\n", -1444565444646.6465424242242454654, -1444565444646.6465424242242454654);
	// ft_printf("{%f}{%F}\n", -1444565444646.6465424242242454654, -1444565444646.6465424242242454654);

	system("leaks -q a.out");
	return (0);
}
