/* Ej: 45643 => 34654.
Podemos ver que si le aplicamos a (num) 45643 % 10 obtenemos 3.
si a otra variable (x) que esta incializada en 0 le asignamos el valor de 
x = x * 10 + num % 10; 
Esto en la primer iteracion de un ciclo haria que x valga 3 (ya que x empieza en 0).

Para el segundo ciclo num %10 seguiria valiendo 3, queremos que pase a valer 4, entonces si a num lo declaramos como un int (entero) y lo divisimos por 10, el nevo valor de num seria 4564,3.Pero al ser un int, se pierde el 3 atras de la coma. Por lo tanto si antes del segundo ciclo le asignamos a num ese nuevo valor, para el segundo ciclo la operacion num % 10 nos dará 4 en vez de 3. 
En el segundo ciclo x = x * 10 + num % 10; va a darnos
x = 3 * 10 + 4 = 34.

Ahora solo falta repetir la operacion.
*/

#include <stdio.h>
#define MSG_USR "Ingrese un número entero positivo:"
#define ERROR_MSG "ERROR"
#define ERROR_NOT_POSITIVE_NUMBER "número no positivo"
#define ERROR_NOT_A_NUMBER "no se pudo interpretar un número entero"

int main(void) {

  int num;
  int x;

  puts(MSG_USR);

  if(!scanf("%d", &num)) {
    fprintf(stderr, "%s : %s \n", ERROR_MSG, ERROR_NOT_A_NUMBER);
    return 1;
  }
  
  if(num < 1) {
    fprintf(stderr, "%s : %s \n", ERROR_MSG, ERROR_NOT_POSITIVE_NUMBER);
    return 1;
  } 

  x = 0;
  while(num) {
    x = x * 10 + (num % 10);
    num /= 10;  /*num = num / 10; */
  }

  printf("%d \n", x);
  
	return 0;
}