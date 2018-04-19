// se inicia programa //
// Bienvenido a prontomatchonline //
// Se declaran las variables de tipo float (galon, precio,gasolina)//
// Expresamos la variable tal que galon =3.785//
// Se le pide al usuario ingresar la cantidad de galones de gasolina a pedir //
// se calcula la cantidad de gasolina en litros //
// Se imprime la cantidad de gasolina //
// Se calcula el precio de los litros de gasolina //
// Se imprime el precio de la comora en dolares //
// se retorna a 0 //
// Se finaliza programa//

#include <stdio.h>
int main()
{
	printf ("Bienvenido a prontomatchonline-\n");
	float galon;
	float precio;
	float gasolina;
	galon= 3.785;
	printf("Ingrese cuantos galones de gasolina necesita:\n");
	scanf("%f", &galon);
	gasolina= galon*3.785;
	printf("Lo equivalente en gasolina seria: %.2f lts",gasolina);
	precio= gasolina*820;
	printf("\n");
	printf("El precio de su compra es: %.2f dolares ", precio);
	return 0;
}
