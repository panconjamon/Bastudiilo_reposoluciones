// Se inicia el  programa //
// Programa de evaluacion de polinomios//
// Declaramos las  variables de tipo float del problema (x,ejercicio) //
// Se le pide al usuario  ingresar el valor de x//
// Se le asigna un valor a x
// Se agrega la funcion donde se evaluara x //
// Se imprime el valor de x //
// Se retorna a 0 // 
// Se finaliza el programa //


#include <stdio.h>
int main()
{
	printf ("Bienvenido a match personalizado-\n");
	float x;
	float ejercicio;
	printf ("Se evaluara x en p(x)=xcubo + 2xcuadrado + 3x + 5\n");
	printf("Ingrese el valor de x:");
	scanf("%f",&x);
	ejercicio= (x*x*x)+2*(x*x)+(3*x)+5;
	printf("El resultado es:%.1f",ejercicio);
	return 0;
}
	
	
	
	
