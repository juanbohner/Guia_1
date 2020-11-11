/*Programa para aproximar a e usando la formula:

e = 1 + 1/1! + 1/2! + 1/3! + ... 1/n!
con un error entre los ultimos dos sumandos de 10E-9.
*/

#include <stdio.h>
#define SUM_ERROR 10E-13

int main(void)
{
  double e = 1;
  size_t i = 1;
  double inverso_factorial = 1;

  while (inverso_factorial > SUM_ERROR)
  {
    inverso_factorial /= i;   /*inverso_factorial = 1/i;*/
    e += inverso_factorial;   /*e = e + inverso_factorial;*/
    i++;
  }

  printf("El valor de e es:\n%.50f\n", e);
  printf("El valor de i es:\n%ld\n", i);
  
  return 0;

}