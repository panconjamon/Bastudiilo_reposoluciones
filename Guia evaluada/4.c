/*Dada una matriz cuadrada A, un programa que permita detectar si dicha matriz es simétrica 3 . Se
considera que una matriz es simétrica si A[i,j] = A[j,i] y esto se cumple para todo i distinto de j. La
simetrı́a es respecto a la diagonal principal.*/

#include <stdio.h>
#include <stdlib.h>

void recorrer_matriz(int tamano,int tam2,int a[tamano][tam2]){
	for (int i=0;i<tamano;i++){
		for(int k=0;k<tam2;k++){
			printf ("(%d,%d)",i,k);
			scanf ("%d",&a[i][k]);
		}
	}
}

void imprimir_matriz(int tamano,int tam2,int a[tamano][tam2]){
	for (int i=0;i<tamano;i++){
		for (int k=0;k<tam2;k++){
			if(i==k){
				a[i][k]=1;
			}
			printf ("%d ",a[i][k]);
		}
		printf ("\n");
	}
}

void simetrica(int tamano,int tam2,int a[tamano][tam2]){
	int aux;
	for (int i=0;i<tamano;i++){
		for (int k=0;k<tam2;k++){
			if (i!=k){
				if (a[i][k]== a[k][i]){
					aux=0;
				}
				else {
					aux=1;
				}
			}
		}
	}
	if (aux==0){
		printf ("Matriz simetrica\n");
	}
	if (aux==1){
		printf ("Matriz no simetrica\n");
	}
}
int main(){
	int tamano=0;
	int tam2=0;
	printf ("Ingrese tamaño:\n");
	scanf ("%d",&tamano);
	system("clear");
	printf ("Ingrese Tamaño 2:\n");
	scanf ("%d",&tam2);
	system("clear");
	int a[tamano][tam2];
	recorrer_matriz(tamano,tam2,a);
	imprimir_matriz(tamano,tam2,a);
	simetrica(tamano,tam2,a);
	return 0;
}
