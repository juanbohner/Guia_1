/*
Escribir un programa que lea un número entero positivo e imprima por stdout los números naturales
impares menores que él. 
*/

/* Primera version, preguntar cual es la mas correcta.


#include <stdio.h>
#define CONDICION_PAR ((Num % 2) == 0 )
#define CONDICION_IMPAR ((Num % 2) == 1 )
#define CONDICION_CICLO ( Impresion >= 1 )
#define OPERACION_ARITIMETICA_PROXIMO_NUM_IMPAR (Impresion =  Impresion - 2)

int main(void)
{
  int  Num = 5;
  int Impresion; 
  
  if (Num > 0)
  {
    if (CONDICION_PAR)
    {
      Impresion = Num - 1;

      while ( CONDICION_CICLO )
      {
        printf("%d\n", Impresion);
        OPERACION_ARITIMETICA_PROXIMO_NUM_IMPAR;
      }
    }

    if (CONDICION_IMPAR)
     {
        OPERACION_ARITIMETICA_PROXIMO_NUM_IMPAR;
      
        while ( CONDICION_CICLO )
        {
          printf("%d\n", Impresion);
          OPERACION_ARITIMETICA_PROXIMO_NUM_IMPAR;
        }

     }

    printf("\n");
  }

  return 0;
}

*/

#include <stdio.h>
#include "Ej_9.h" 
/* En este archivo esta el numero de stdinput */
#define CONDICION_PAR ((Num % 2) == 0 )
#define CONDICION_IMPAR ((Num % 2) == 1 )
#define CONDICION_CICLO ( Num >= 1 )
#define OPERACION_RESTARLE_1_A_NUM ( Num-- )

int main(void)
{
  
  int Num = NUMERO_STD_INPUT;
  
  if (Num > 0)
  {
    if (CONDICION_PAR)
    {
      OPERACION_RESTARLE_1_A_NUM;

      while ( CONDICION_CICLO )
      {
        printf("%d\n", Num);
        OPERACION_RESTARLE_1_A_NUM;
        OPERACION_RESTARLE_1_A_NUM;
      }
    }

    if (CONDICION_IMPAR)
     {
        OPERACION_RESTARLE_1_A_NUM;OPERACION_RESTARLE_1_A_NUM;
      
        while ( CONDICION_CICLO )
        {
          printf("%d\n", Num);
          OPERACION_RESTARLE_1_A_NUM;
          OPERACION_RESTARLE_1_A_NUM;
        }

     }

  }

  printf("\n");
  return 0;
}

