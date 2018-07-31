
/*Escriba un programa que cree una matriz cuadrada A de NxN, luego rellénela de ceros e imprı́mala en
pantalla.*/

#include <stdio.h>
#include <stdlib.h>

void recorrer_matriz(int tamano,int a[tamano][tamano]){
	for (int i=0;i<tamano;i++){
		for(int k=0;k<tamano;k++){
			a[i][k]=0;
		}
	}
}
void imprimir_matriz(int tamano,int a[tamano][tamano]){
	printf ("\n");
	for (int i=0; i<tamano; i++ ){
		printf ("\t(%d)",i+1);

	}
	for (int i=0;i<tamano;i++){
		printf("\n");
		printf ("(%d)",i+1);
		for (int k=0;k<tamano;k++){
			printf ("\t%d ",a[i][k]);
		}
		printf ("\n");
	}
}
int main(){
	int tamano=0;
	printf ("Ingrese tamaño\n");
	scanf ("%d",&tamano);
	system("clear");
	int a[tamano][tamano];
	recorrer_matriz(tamano,a);
	imprimir_matriz(tamano,a);
	return 0;

}
