// Se inicia programa //
// se declaran las variables tipo int del programa (valorboleto,valorkilometro) //
// Se declaran las variables tipo float del programa (kilometros)//
// Se le pide al usuario la cantidad de kilometros por recorrer//
// Se le pide al usuario el valor por kilometro //
// Se calcula el valor del boleto //
// Se imprime el valor del boleto //
// Se retorna a 0 //
// Se finaliza programa //

#include <stdio.h>

int main()
{
	printf ("Bienvenido a www.Caminoalcielo.cl\n");
	int valorboleto;
	int valorkilometro;
	float kilometros;
	printf("Ingrese cantidad de kilometros por recorrer:\n");
	scanf("%f",&kilometros);
	printf("El valor por kilometro es:\n");
	scanf("%d",&valorkilometro);
	valorboleto=kilometros*valorkilometro;
	printf("El costo del boleto es: $%d",valorboleto);
	return 0;
}
