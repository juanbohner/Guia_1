/*
Escribir un programa que invierta los dígitos de un número
positivo entero (sugerencia: usar
operadores módulo, %, y división, /, para obtener los dígitos de a uno por vez). 
*/
#include <stdio.h>
#include <math.h>
int main(void)
{

  long int Numero = 110101010101;
  long int Resto = 0;
  long int Resto_2;
  long int Resto_Guardador;
  long int Exp_10 = 1;

  printf("El numero que esta transformando es:\n%ld\n", Numero);

  while ((Numero - Resto))
  {

    Exp_10 = Exp_10 * 10;
    Resto = Numero % Exp_10;
    Resto_Guardador = Resto;
    if(Exp_10 > 10)
    {
      Resto = Resto - Resto_2;
      Resto = Resto / (Exp_10 / 10);
    }
    /*Resto_2 = Resto;*/
    printf("%ld", Resto);
    Resto = Resto_Guardador;
  }
  printf("\n");

  return 0;
}