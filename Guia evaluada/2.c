/*Escriba un programa que cree una matriz cuadrada A de NxN, luego rellénela de ceros y asigne 1 en
su diagonal principal 1 . En otras palabras genere una matriz identidad 2 de 6x6.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	int g;
	printf ("Ingrese el N x N del tablero:\n");
	scanf ("%d",&g);
	system("clear");
	int a[g][g];
	for (int i=0;i<g;i++){
		for (int j=0;j<g;j++){
		a[i][j]= 0;
		}	
	}
	for (int i=0;i<g;i++){
		for (int j=0;j<g;j++){
			if(i==j){
				a[i][j]=1;
			}
			/*if (i!=j){
				a[i][j]=7;
			}*/
			printf ("%d ",a[i][j]);
			
		}
		printf ("\n");
	}


	return 0;
}
