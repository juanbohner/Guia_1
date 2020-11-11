/* 
Escribir un programa que permita determinar el máximo y el mínimo de un conjunto de valores
ingresados por teclado (sin almacenar la totalidad de los valores leídos). A tal efecto se debe ingresar
primero la cantidad esperada de elementos a procesar y luego el lote de datos de a uno por vez.
Finalizado el ingreso de datos, mostrar el resultado por stdout con 3 decimales. Realizar todas las
validaciones que considere necesarias.
*/

#include <stdio.h>
#include <math.h>

#define MSJ_CANTIDAD_NUMEROS "Ingrese la cantidad de numeros que tiene el conjunto."
#define MSJ_MAX_NUM "El mayor numero del conjunto es:"
#define MSJ_MIN_NUM "El menor numero del conjunto es:"
#define MSJ_NUMERO "Ingrese un numero."

int main(void)
{
  double num_ingresado;
  int cantidad_numeros;
  double max_num = -INFINITY;
  double min_num = INFINITY;
  int i;

  printf("%s\n", MSJ_CANTIDAD_NUMEROS);
  scanf("%d", &cantidad_numeros);
  printf("\n");
  
  printf("%s\n", MSJ_NUMERO);
  scanf("%lf", &num_ingresado);
  printf("\n");
  

  for( i=1 ; i < cantidad_numeros ; ++i )
  {
    printf("%s\n", MSJ_NUMERO);
    scanf("%lf", &num_ingresado);
    printf("\n");

    if(num_ingresado > max_num )
    {
      max_num = num_ingresado;
    }
    if (num_ingresado < min_num)
    {
      min_num = num_ingresado;
    }
  }

  printf("%s\n%lf\n",MSJ_MAX_NUM , max_num);
  printf("\n");

  printf("%s\n%lf\n",MSJ_MIN_NUM , min_num);
  printf("\n");
  
  return 0;
}