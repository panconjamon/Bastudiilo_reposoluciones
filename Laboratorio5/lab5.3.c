#include <stdio.h>
#include <stdlib.h>
//Escriba un programa que permita leer un número natural de 4 cifras, no todos iguales. Implementa la
//función numero mayor (int numero), que calcula el mayor número que se puede formar con las cifras
//del número ingresado, y la función numero menor(int numero) que calcule el menor número que se
//puede formar con las cifras del número ingresado.
void descomponedor()
{
	int numero;
	int a;
	int b;
	int c;
	int d;
	printf(" Ingrese un numero de cuatro digitos");
	scanf ("%d",&numero);
	if (numero>1000){
	a = numero/1000;
	b = (numero%1000)/100;
	c = (numero%1000)%100/10;
	d = (numero%1000)%100)%10/1;
}
	printf ("%d,%d,%d,%d",a,b,c,d);
			
		}
	}

int main (){
	descomponedor();
	return 0;
}
