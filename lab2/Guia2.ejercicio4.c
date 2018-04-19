// Se inicia el programa//
// Calcule los puntos de su equipo//
// se declaran variables enteras,para el calculo de de puntos de un equipo como totalpuntos, visitante, local//
// Se establece el limite de ciclos//
// A traves de un for se le pide al usuario los goles del local y de la visita por cada fecha jugada//
// Si los goles del local son mayor a los de visita se suman 3 puntos a la variable totalpuntos//
// Si los goles del local son igual a los de visita se suma un punto a la variable totalpuntos//
// Si los goles de visita son mayor a los del local la variable totalpuntos queda sin alterar//
// Se imprimen los puntos totales llevados hasta la quinta fecha por el equipo//
// se retorna a 0//
// se finaliza programa//

#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	printf (" Programa de calculo de puntos del equipo Los Gloriosos-\n");
	int i,totalpuntos=0,visitante=0,local=0;
	
	for(i=0; i<5;i++){
		printf(" Ingrese los goles del local:\n");
		scanf ("%d",&local);
		printf ("Ingrese los goles de la visita:\n");
		scanf ("%d",&visitante);
		
		if(local>visitante){
			totalpuntos = totalpuntos+ 3;
		}
		if(local==visitante){
			totalpuntos = totalpuntos+ 1;
		}
	}
	printf (" hasta la quinta fecha llevan:%d puntos",totalpuntos);
	return 0;
}
