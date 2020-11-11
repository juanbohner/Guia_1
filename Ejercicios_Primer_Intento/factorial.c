/*Programa para calcular un factorial*/

#include <stdio.h>
#define NUM_INGRESADO 5

int factorial(int numero)
{
  numero = NUM_INGRESADO;
  long int i;
  long int fact;
  
  fact = numero;

  for (i = numero; i > 1; i--)
  {
  fact = fact * ( --numero );
  }

  printf("%ld\n", fact);
  return fact;
}