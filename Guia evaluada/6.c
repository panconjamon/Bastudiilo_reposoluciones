/*En una estación meteorológica registramos la temperatura (en grados centı́grados) cada hora durante
una semana. Almacenamos el resultado en una matriz de 7 X 24 (cada fila de la matriz contiene las 24
mediciones de un dı́a). Diseña un programa que lea los datos por teclado y muestre:
La máxima y mı́nima temperaturas de la semana.
La máxima y mı́nima temperaturas de cada dı́a.
La temperatura media de la semana.
La temperatura media de cada dı́a.
El número de dı́as en los que la temperatura media fue superior a 30 grados.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define dias 7
#define horas 24

void llenar_matriz(int matriz[dias][horas] ){
	srand(time(NULL));
	int num;
	for(int i=0; i<dias;i++){
		for (int j=0; j<horas; j++){
			num =(rand()%42)+1; 
			matriz[i][j]=num;
			
		}
	}

}
void grados_dia(int matriz[dias][horas]){
	int mayor, menor;
	
	for(int i=0; i<dias;i++){
		mayor=0;
		menor=100;
		for (int j=0; j<horas; j++){
			if (menor< matriz[i][j]){
			}
			else{
				menor= matriz[i][j];
			}
			if (mayor> matriz[i][j]){
			}
			else{
				mayor= matriz[i][j];
			}
		}
		printf("la T° maxima de dia %d es:  [%d°C]\n", i+1, mayor);
		printf("la T° minima de dia %d es:  [%d°C]\n", i+1, menor);
	} 
	printf("\n");
	
}
void grados_semana(int matriz[dias][horas]){
	printf ("\n");
	int mayor=0, menor=100;
	
	for(int i=0; i<dias;i++){
		for (int j=0; j<horas; j++){
			if (menor< matriz[i][j]){
			}
			else{
				menor= matriz[i][j];
			}
			if (mayor> matriz[i][j]){
			}
			else{
				mayor= matriz[i][j];
			}
		}
	} 
	printf("\n");
	printf("T° maxima de la semana es:  [%d°C]\n", mayor);
	printf("T° minima de la semana es:  [%d°C]\n", menor);
}
	
void imprimir_matriz(int matriz[dias][horas]){
	for(int i=0; i<dias;i++){
		printf ("Dia %d:",i+1);
		for (int j=0; j<horas; j++){
			printf("[%d] ", matriz[i][j]);
		}
		printf("\n");
	}
	
}
void media_semana_dia(int matriz[dias][horas]){
	int suma=0 ;
	
	printf("\n");
	
	for(int i=0; i<dias;i++){
		for (int j=0; j<horas; j++){
			suma= (suma + matriz[i][j]);
		}
		suma = suma/24;
		printf("La media del dia %d es: [%d°C]\n",i+1,suma);
		suma=0;
	}
	
}
void media_superior(int matriz[dias][horas]){
	int suma=0, contador_dias=0, media=0 ;
	
	printf("\n");
	
	for(int i=0; i<dias;i++){
		for (int j=0; j<horas; j++){
			suma= (suma + matriz[i][j]);
			
		}
		media= suma/24;
		
		if (media>30){
			contador_dias=contador_dias+1;
		}
		suma=0;
	}
	printf("Dias con la media superior a 30°C: [%d]\n", contador_dias);
	
}


int main(){
	printf ("-------------------------------Programa de medición de T°---------------------------------------\n");
	int matriz[dias][horas];
	llenar_matriz(matriz);
	imprimir_matriz(matriz);
	printf ("\n");
	grados_dia(matriz);
	grados_semana(matriz);
	media_semana_dia(matriz);
	media_superior(matriz);
	

	return 0;
}

