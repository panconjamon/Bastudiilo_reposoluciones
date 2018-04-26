// Se inicia programa//
// Se declara una funcion llama calculo_cuota20, y 2 variables i e mes_siguiente, con el fin de que al momento de pedir la primera cuota al usuario//
// calcular la cuota del mes siguiente con una operacion//
// de la funcion se retorna la variable mes_siguiente para imprimer el valor de la ultima cuota//
// a traves de un void llamado imprimir_total_cuotas con un parametro entero llamado mes_siguiente, se imprime el valor de la ultima cuota//
// se inicia la funcion int main , donde se declara x, y se llama a la funcion calculo_cuota20 y el procedimiento imprimir_total_cuotas//
// se retorna a 0//
// se finaliza programa//
#include <stdio.h>
int calculo_cuota20(){
int i;
int mes_siguiente=0;
     
	printf ("ingrese el valor de la primera cuota:\n");
	scanf ("%d",&mes_siguiente);
for(i=1;i<=20;i++){
	mes_siguiente=mes_siguiente*2;
	printf("$%d\n",mes_siguiente);
  }
  return mes_siguiente;
}

void imprimir_total_cuotas(int mes_siguiente){
	printf (" El total que se paga es:$%d\n",mes_siguiente);
}

int main (void){
	int x;
	x=calculo_cuota20();
	imprimir_total_cuotas(x);
	return 0;
}
	
