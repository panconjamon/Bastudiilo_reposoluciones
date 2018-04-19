// Se inicia el programa //
// Bienvenido a match , ingrese triangulos rectangulos//
// Se identifican las variables tipo float del programa (Cateto1, cateto2,a,b,c)//
// Se le pide al usuario ingresar el valor del cateto 1 //
// se ingresa valor de cateto 1 //
// Se le pide al usuario ingresar el valor del cateto 2//
// Se ingresa valor del cateto 2//
// Se identifica las operatorias para calcular la hipotenusa //
// Se imprime el valor de la hipotenusa//
// Se retorna a 0 //
// Se finaliza programa //
#include <stdio.h>

int main()
{
	printf ("Bienvenido a match , ingrese triangulos rectangulos:\n");
	float cateto1, cateto2;
	float a, b, c;
	printf("Ingrese cateto 1:\n");
	scanf("%f",&cateto1);
	printf("Ingrese cateto 2:\n");
	scanf("%f",&cateto2);
	a= cateto1*cateto1;
	b= cateto2*cateto2;
	c= a+b;
	printf("El valor de c es: raiz de %.1f",c);
	return 0;
}
