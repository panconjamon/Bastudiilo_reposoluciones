// Se inicia el programa //
// Bienvenido al Generador de numeros al cuadrado y al cubo de numeros enteros positivos//
// Se identifican las variables tipo int del programa (n,cuadrado,cubo)//
// Se le pide al usuario un numero entero positivo//
// Se le asigna un valor a la variable//
// Se identifican las operatorias que le asignan valor a las variables cuadrado,cubo //
// Se imprime el valor de la variable cuadrado//
// Se imprime el valor de la variable cubo//
// Se retorna a 0 //
// Se finaliza el programa//

#include <stdio.h>

int main()
{
	printf("Generador de numeros al cuadrado y al cubo de numeros enteros positivos.\n ");
	int n, cuadrado, cubo;
	printf("Ingrese un numero:");
	scanf("%d",&n);
	cuadrado= n*n;
	cubo= n*n*n;
	printf("El cuadrado de su numero es:%d",cuadrado);
	printf("\n");
	printf("El cubo de su numero es:%d",cubo);
	return 0;
}
