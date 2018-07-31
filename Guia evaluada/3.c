/*Cree una matriz cuadrada A de NxN, luego pida al usuario rellenarla. Al final del proceso, entregue al
un resumen con: La matriz, la sumatoria de los valores de sus filas y luego la sumatoria de los valores
de toda la matriz.*/

#include <stdio.h>
#include <stdlib.h>
void llenar_matriz(int a[][100], int tam){
	
	for (int i=0;i<tam;i++){
		for (int j=0;j<tam;j++){
			printf ("Ingrese valores para la coordenada (%d,%d):\n",i,j);
			scanf ("%d",&a[i][j]);
		}
		system("clear");	
	}
}

void imprimir_matriz(int a[][100], int tam){
		
	for (int i=0;i<tam;i++){
		for (int j=0;j<tam;j++){
			printf ("%d ",a[i][j]);		
		}
		printf ("\n");
	}
}

void sumar_filas(int a[][100], int tam){
	int sumatoria=0;
	for (int i=0;i<tam;i++){
		for (int j=0;j<tam;j++){
			sumatoria=sumatoria + a[i][j];
		
		}
		printf ("fila %d: %d",i+1, sumatoria);
		printf ("\n");
		sumatoria=0;
	}
}
void sumar_matriz(int a[][100], int tam){
	int i,sumatoria=0;
		for (i=0;i<tam;i++){
			for (int j=0;j<tam;j++){
				sumatoria=sumatoria + a[i][j];
		
			}
		printf ("\n");
	}
		printf ("La matriz suma: %d", sumatoria);	
}


int main(){
	int tam;
	printf ("Ingrese el N x N del tablero:\n");
	scanf ("%d",&tam);
	int a[tam][tam];
		
	system("clear");
	llenar_matriz(a, tam);
	imprimir_matriz(a, tam);
	sumar_filas(a,tam);
	sumar_matriz(a,tam);

	return 0;
}

