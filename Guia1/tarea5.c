// Se inicia programa // 
//Bienvenido //
// Se identifica una variable de tipo char (dinosaurio) //
//Se identifican variables de tipo float del programa (peso,longitud,libras,pies) //
// Se le pide al usuario un nombre para su dinosaurio //
// Se le asigna un nombre a la variable dinosaurio//
// Se le pide al usuario la medida en pies de su dinosaurio //
// Se tranforma de libras a kilogramos a traves de una operatoria //
// Se imprime el peso del dinosaurio en kilogramos //
// Se transforma de pies a metros a traves de una operatoria//
// Se imprime la longitud del dinosaurio en metros//
// Se imprime el nombre del dinosaurio //
// Se retorna a 0 //
// Se finaliza el programa //


#include <stdio.h>
int main ()
{
	printf ("Bienvenido\n");
	char dinosaurio [20];
	float peso;
	float longitud;
	float libras;
	float pies;
	printf ( "Ingrese el nombre de su dinosaurio:\n");
	scanf ("%s", dinosaurio);
	printf ("ingrese las libras de su dinosaurio:\n");
	scanf ("%f" ,&libras);
	printf ("ingrese la medida en pies del dinosaurio:\n");
	scanf ("%f" ,&pies);
	peso= (libras * 0.45);
	printf ("El peso de su dinosaurio es:%.2f kilogramos\n",peso);
	longitud= (pies * 0.3048);
	printf ("La longitud de su dinosaurio es:%.4f metros\n",longitud);
	printf ("El nombre del dinosaurio es: %s",dinosaurio);
	
	return 0;
}
