// se inicia programa//
// se define una proceso conteo con un parametro llamado grados//
// se declara i , y se declara un for//
// se imprime - //
// en una funcion int main  se declaran los grados y se le pide al usuario la cantidad de grados celsius//
// se imprime  el dibujo de un termometro//
// se llama a  la funcion conteo//
// se retorna a 0//
// se finaliza programa//
#include <stdio.h>
void conteo(int grados){
	int i=0;
	for (i=0;i<=grados;i++){
		printf ("-");
	}
}

int main(void){
	int grados;
	printf ("Ingrese los grados Celsius:\n");
	scanf("%d",&grados);

	printf("0         10         20         30         40         50\n");
	printf("|         |          |          |          |          |\n");
	conteo (grados);
	return 0;
}
