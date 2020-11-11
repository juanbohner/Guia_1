/*
El factorial de un numero se puede ver como hacer  !num = 1*1*2*3*...*(num-1)*num. Los dos primeros 1 no aportan nada, entonces es simplemente multiplicar una variable que empieza en 1 por otra que en cada iteracion de un ciclo crezca hasta tener el valor del num que queresmos calcularle el factorial. 
*/


#include <stdio.h>
#define MSG_USR "Ingrese un número no negativo:"
#define ERROR_MSG "ERROR"
#define ERROR_NEGATIVE_NUMBER "número negativo"
#define ERROR_NOT_A_NUMBER "no se pudo interpretar un número entero"

int main(void)
{
  int numero_ingresado;
  size_t factorial, i;

/*Se usa size_t porque un facotrial es un numero entero positivo muy grande*/

  puts(MSG_USR);

  if(!scanf("%d", &numero_ingresado))
  {
    fprintf(stderr, "%s : %s \n", ERROR_MSG, ERROR_NOT_A_NUMBER);
    return 1;
    /*Se usa para validar el ingreso de un numero y no de una letra */
  }
  
  if(numero_ingresado < 0) 
  {
    fprintf(stderr, "%s : %s \n", ERROR_MSG, ERROR_NEGATIVE_NUMBER);
    return 1;
  } 

  factorial = 1;
  for(i = 1; i <= numero_ingresado; i++)
  {
    factorial *= i; /*factorial = factorial * i; */
  }
  
  printf("%lu \n", factorial);

	return 0;
} 