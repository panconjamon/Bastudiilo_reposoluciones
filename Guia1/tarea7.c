// Se inicia el programa //
// Bienvenido al convertidor de dias a segundos//
// Declaramos variables tipo int (dias,segundos) del programa//
// Se da entender cuantos segundos tiene un dia //
// Se le pide al usuario ingresar una cantidad de dias //
// Se identifica la operatoria para la conversion //
// Se imprimen los segundos equivalentes a los dias //
// Se retorna a 0 //
// Se finaliza el programa //

#include <stdio.h>
int main (){
	int dias;
	int segundos;
	dias= 86400;
	printf ("Bienvenido a nuestro convertidor no fake-");
	printf ("\n");
	printf ("Ingrese numero de dias: ");
    scanf ("%d",&dias);
	segundos= (dias*84600);
	printf ("Sus dias equivalen a: %d segundos",segundos);
	return 0;
}
	
