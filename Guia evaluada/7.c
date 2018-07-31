/*Cree un programa que lea los elementos de una matriz de 4 X 5 y genere un vector de largo 4 en el
que cada elemento contenga la sumatoria de los elementos de cada fila. El programa debe mostrar la
matriz original y el vector en este formato (evidentemente, los valores deben ser los que correspondan
a lo introducido por el usuario)*/

#include <stdio.h>
#include <stdlib.h>
void llenar(int a[4][5]){
	printf (" De valores a la matriz:\n");
	for (int i=0;i<4;i++){
		for (int k=0;k<5;k++){
			printf ("<%d,%d>: ",i,k);
			scanf ("%d",&a[i][k]);
		}
		system("clear");
	}
}
void imprimir(int a[4][5]){
	for (int i=0;i<4;i++){
		for (int k=0;k<5;k++){
			printf ("%d",a[i][k]);
		}
	printf ("\n");
	}
}
void vector(int a[4][5],int b[4]){
	printf ("\nSuma:\n");
	int aux=0;
	for (int i=0;i<4;i++){1
		
		for (int k=0;k<5;k++){
			aux+=a[i][k];
		}
		b[i]=aux;
		printf ("Fila %d: suma %d\n",i+1,b[i]);
		aux=0;
	}
}
int main(void){
	int a[4][5];
	int b[4];
	llenar(a);
	imprimir(a);
	vector(a,b);
	return 0;
}

