/*Dada una matriz A (MxN) de tipo entero, construya un programa para calcular la Traspuesta de dicha
matriz. La traspuesta de una matriz se obtiene al escribir las filas de la matriz A como columnas.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void llenado_A(int num,int num2,int a[num][num2]){
	for (int i=0;i<num;i++){
		for (int k=0;k<num2;k++){
			printf ("(%d,%d)",i,k);
			scanf ("%d",&a[i][k]);
		}
	system("clear");
	}
}

void imprimir_A(int num,int num2,int a[num][num2]){
	printf ("Arreglo A:\n");
	for (int i=0;i<num;i++){
		for (int k=0;k<num2;k++){
			printf ("%d ",a[i][k]);
		}
		printf ("\n");
	}
}

void impresion_AT(int num,int num2,int a[num][num2]){
	printf ("\nTranspuesta:\n");
	for (int i=0;i<num2;i++){
		for (int k=0;k<num;k++){
			printf (" %d ",a[k][i]);
			}	
		printf ("\n");
		}
	}

int main(void){
	int num,num2;
	printf ("Ingrese T1:\n");
	scanf ("%d",&num);
	system("clear");
	printf ("Ingrese T2:\n");
	scanf ("%d",&num2);
	system("clear");
	int a[num][num2];
	llenado_A(num,num2,a);
	imprimir_A(num,num2,a);
	impresion_AT(num,num2,a);
	return 0;
}
