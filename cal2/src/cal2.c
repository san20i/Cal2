/*
 ============================================================================
 Name        : cal2.c
 Author      : San20i
 Version     :
 Copyright   : Your copyright notice
 Description : Privet World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

main() {
  setvbuf (stdout, NULL, _IONBF, 0);
  setvbuf (stdin, NULL, _IONBF, 0);
   float x,y;
   char sign='+';
   while (sign != '0') {
      printf("Знак: "); 
      scanf("%c%*c", &sign);
      if (sign == '0') { break; }
      if (sign == '+' || sign == '-' || sign == '*' || sign == '/') {
         printf("x=");
         scanf("%f%*c", &x);
         printf("y=");
         scanf("%f%*c", &y);
         switch (sign) {
            case '+':
               printf("%.2f\n", x+y);
               break;
            case '-':
               printf("%.2f\n", x-y);
               break;
            case '*':
               printf("%.2f\n", x*y);
               break;
            case '/':
               if (y != 0) printf("%.2f\n", x/y);
               else printf("Деление на ноль!\n");
         }
      }
      else printf("Неверно указан знак операции\n");
   }
}
