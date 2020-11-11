/* 
7) Mediante el uso de una instrucción do, escribir un programa para validar y aceptar una calificación.
El programa debe aceptar una calificación continuamente mientras no se introduzcan calificaciones
inválidas. Una calificación inválida es cualquiera menor que 0 o mayor que 100. Si la calificación es
inválida, el programa debe imprimir un mensaje, de otra forma, la calificación debe sumarse al total
de calificaciones ingresadas. Por último, debe desplegar el total. 
*/
#include <stdio.h>
#define MSJ_INGRESE_CALIF "Ingese una calificacion."
#define MSJ_ERROR "Calificacion invalida."
#define MSJ_NOTA_TOTAL "La suma de las calificaciones es:"
#define NOTA_MIN 0
#define NOTA_MAX 100
#define AND &&
#define CALIFICACION_INVALIDA ( Calif_Ingresada < NOTA_MIN AND Calif_Ingresada > NOTA_MAX )
#define CALIFICACION_VALIDA ( Calif_Ingresada >= NOTA_MIN AND Calif_Ingresada <= NOTA_MAX )


int main(void)
{
  double  Calif_Ingresada = 0;
  double Nota_Total = 0;
  
  printf("%s\n",MSJ_INGRESE_CALIF);
  scanf ("%lf", &Calif_Ingresada);
  
  if (CALIFICACION_VALIDA)
  {
   
    do 
    {
      Nota_Total = Nota_Total + Calif_Ingresada;
            
      printf("%s\n",MSJ_INGRESE_CALIF);
            
      scanf ("%lf", &Calif_Ingresada);


    }  while ( CALIFICACION_VALIDA );
  }
  
  else
  {
     printf("%s\n", MSJ_ERROR);
  }

  if ( Nota_Total )
  { 
    printf("%s\n", MSJ_ERROR);
  }
  printf("%s\n%lf\n", MSJ_NOTA_TOTAL, Nota_Total);
  return 0;

}

