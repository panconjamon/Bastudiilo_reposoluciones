//inicio del programa /7
//Declaramos variables tipo float valortraje, descuento15, descuento8//
// Se le pide al usuario ingresar el precio dle traje//
//Si el valor es mayor a 250000 se le efectuara el descuento de temporada de 15%//
// Si el valor es menor a 250000 se le efectuara el descuento de temporada de 8%//
// se retorna a 0//
//se finaliza programa//
//adios//
#include <stdio.h>
int main (void){
	float valortraje;
	float descuento15;
	float descuento8;
	printf ("ingrese el precio del traje\n ");
	scanf ("%f\n",&valortraje);
		if (valortraje>2500.00){
			printf ("¡¡¡¡¡¡¡Su traje tiene un descuento de temporada!!!!\n");
			descuento15= (0.85*valortraje);
			printf ("Su traje tiene un valor con descuento de : %f\n",descuento15);
}
		else if (valortraje<=2500.00){
			printf ("su truje tiene un hermoso descuento de temporada otoño - invierno");
			descuento8=(0.08*valortraje);
			printf ("El precio del traje es:%f",descuento8);
}
return 0;
}
	
