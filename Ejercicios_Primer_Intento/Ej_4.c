/* La ecuación de una curva normal utilizada en aplicaciones estadísticas es:

y=( 1 / (2*pi* (sigma)^(1/2)))^(e^((-1/2)*(((x-mu)/sigma))^2))
*/

#include <stdio.h>
#include <math.h>
#define PI 3.1416
#define e 2.7182

int main(void)
{
  double y;
  int mu = 90, sigma = 4, x = 80;
  float un_medio = 0.5;
  float menos_un_medio = -0.5;
  double Potencia_de_e;
  double Potencia_e;
  int resultado_entero;
  double resultado;
  /*
  double PI = 3.1416;
  double e = 2.7182;
  */
  resultado = ( x - mu ) / sigma;

  Potencia_de_e = pow(resultado , 2);
  resultado = menos_un_medio * Potencia_de_e;

  Potencia_e = pow(e, resultado);

  y=( 1 / (2 * PI * pow(sigma, un_medio))) * Potencia_e;


  printf("%lf\n", y);
  return 0;

}

/*Por que me dice   que pow es undefined*/ 