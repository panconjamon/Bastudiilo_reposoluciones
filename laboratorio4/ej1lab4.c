// Se inicia programa 
// Se declara la funcion inverso
// Se declaran variables dentro de la funcion
// Se pide al usuario un valor inicial
// se calcula el 10% del valor inicial
// se declara la ecuacion para ejercicio
// se  imprime el 10% del ejercicio
// se declara la ecuacion para calcular ejercicio1
// se imprime el 10% de ejercicio1
// se retorna 0
// se declara una funcion main donde se llama la funcion inverso
// se retorna a 0
// se finaliza programa
#include <stdio.h>
#include <stdlib.h>

int inverso()
{
int entrada;
int ejercicio;
int ejercicio1;
printf ("entrada (numero de 3 digitos):"); 
scanf ("%d",&entrada);
printf ("%d",(entrada%10));
ejercicio=(entrada/10);
printf ("%d",(ejercicio%10));
ejercicio1=(ejercicio/10);
printf ("%d",(ejercicio1%10));
return 0;
}
int main (void){
	inverso();
	return 0;
}

