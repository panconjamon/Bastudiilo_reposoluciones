// Se inicia programa //
// Bienvenido a match , seccion de calculo de superficie y perimetro.//
// Se identifican las variables tipo float del programa (base,altura,perimetro,superficie) //
// Se le pide al usuario ingresar el valor de la base //
// Se ingresa valor de la base//
// Se le pide al usuario el valor de la altura//
// Se ingresa valor de la altura//
// Se calcula valor de la superficie //
// Se imprime valor de la superfice //
// Se calcula el valor del perimetro //
// Se imprime el valor del perimetro //
// Se retorna a 0 //
// Se finaliza programa , adios //

#include <stdio.h>

int main()
{
	printf ("Bienvenido a match, seccion de calculo de superficie y perimetro.  \n");
	float base, altura, perimetro, superficie;
	printf("Ingrese valor de la base: \n");
	scanf("%f",&base);
	printf("Ingrese valor de la altura:\n");
	scanf("%f",&altura);
	superficie= base*altura;
	printf("La superficie del rectangulo es:%.2f",superficie);
	printf("\n");
	perimetro= 2*(base+altura);
	printf("El perimetro del rectangulo es:%.2f",perimetro);
	return 0;
}
