/*Construya un programa en Python que intercambie los renglones de una arreglo bidimensional. Los
elementos del renglón 1 deben intercambiarse con el del renglón N, los del renglón 2 con los del renglón
N-1, y ası́ sucesivamente.*/

#include <stdio.h>
#include <stdlib.h>
//#define n 5

void llenar_matriz(int filas,int columnas,int matriz[filas][columnas]){
	for(int i=0;i<filas;i++){
		for(int k=0;k<columnas;k++){
			printf ("<%d,%d>",i,k);
			scanf ("%d",&matriz[i][k]);
		}
		printf ("\n");
		system("clear");
	}
}
void imprimir_matriz(int filas,int columnas ,int matriz[filas][columnas]){
	printf ("Arreglo 1\n");
	for (int i=0;i<filas;i++){
		for (int k=0;k<columnas;k++){
			printf (" %d ",matriz[i][k]);
		}
		printf ("\n");
	}
}
void impresion (int filas,int columnas,int matriz[filas][columnas]){
	printf  ("__________________________\n\n2Arreglo 2\n");
	for (int i=filas-1;i>=0;i--){
		for (int j=0;j<columnas;j++){
			printf (" %d ", matriz[i][j]);
		}
		printf ("\n");
	}
}

int main(void){
	int filas,columnas;
	printf ("Ingrese n° de filas:\n");
	scanf ("%d",&filas);
	system("clear");
	printf ("Ingrese n° de columnas:\n");
	scanf ("%d",&columnas);
	system("clear");
	int matriz[filas][columnas];
	llenar_matriz(filas,columnas,matriz);
	imprimir_matriz(filas,columnas,matriz);	
	impresion(filas,columnas,matriz);	
	
	return 0;
}
