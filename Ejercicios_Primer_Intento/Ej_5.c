/*Escribir un programa que calcule la raíz cuadrada y el inverso de un número ingresado por el teclado.
Antes de calcular la raíz cuadrada se debe verificar que el número sea no negativo y antes de calcular
el inverso, se debe verificar que el número no sea cero. */

#include <stdio.h>
#include <math.h>

#define UN_MEDIO 0.5
#define INVERSO -1
#define MSJ_ERROR_NEG "Numero negtivo."
#define MSJ_ERROR_CERO "El numero es 0."
#define MSJ_INGRESE_NUM "Ingrese un numero."

int main(void)
{
  double num_ingresado;
  double raiz_cuadrada;
  double inverso;

  printf("%s\n", MSJ_INGRESE_NUM);
  scanf("%lf", &num_ingresado);
  /*Validar si me ingresan un numero o si me ingresan un caracter*/
  printf("\n");

  if ( num_ingresado < 0)
  {
    printf("%s\n", MSJ_ERROR_NEG);
    return 1;
  }
  if ( num_ingresado == 0)  
  {
    printf("%s\n", MSJ_ERROR_CERO);
    return 1;
  }
  /*
  raiz_cuadrada = pow(num_ingresado, UN_MEDIO);
  Me dice que no funciona la funcion pow
  */
  raiz_cuadrada = 1;
  /*inverso = pow (num_ingresado, INVERSO). pow*/
  
  inverso = 1 / num_ingresado ;

  printf("%lf\n\n%lf", raiz_cuadrada, inverso);

  return 0;
}