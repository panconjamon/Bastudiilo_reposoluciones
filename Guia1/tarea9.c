/* Se inicia el programa de revision de comisiones */
// Se le avisa al usuario el porcentaje de las comisiones //
// Se declaran las variables tipo int del problema (sueldobase,ventas,sueldototal)//
// Se declaran las variables tipo float del problema (comision)//
// Se le pregunta al usuario cual es su sueldo base//
// Se le pide al usuario el numero de ventas //
// Se calcula el valor de la comision //
// Se calcula el sueldo total //
// Se imprime el sueldo total que recibe  //
// Se retorna a 0 //
// Se finaliza programa //

#include <stdio.h>

int main()
{
	
	printf ("Revision de comisiones-\n");
	printf("El porcentaje semanal de las comisiones es el 7/100 de las ventas\n");
	int sueldobase, ventas, sueldototal;
	float comision;
	printf("¿Cual es su sueldo base?:\n");
	scanf("%d",&sueldobase);
	printf("Ingrese numero de ventas:\n");
	scanf("%d",&ventas);
	comision= (ventas*0.07);
	printf("La comision es de: $ %.6f\n",comision);
	sueldototal= (sueldobase+comision);
	printf("El sueldo total que recibe es: $ %d",sueldototal);
	return 0;
}
