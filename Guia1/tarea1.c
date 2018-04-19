// Se inicia el programa //
// Bienvenido al programa de entrega de matricualas y promedio de claificaciones//
// Declaramos variables de tipo int (totaldenotas, codigodecarrera, anoingreso,numeroseleccio)//
// Declaramos variables tipo float  ( c1, c2, c3 ,suma , promedio)
// Se pide el valor de las variables en el programa//
// Se le pide al usuario ingresar valor de c1//
// se le asigno un valor a la variable c1//
// se le pide al usuario ingresar un valor a la variable c2//
// se le asigno el valor a la variable c2//
// Se le pide al usuario ingresar un valor a la variable c3//
// se le ingreso el valor a la variable c3//
// Se suman las calificaciones //
// Se calcula la variable promedio//
// Se le pide el usuario el año de ingreso //
// Se le pide al usuario el codigo de carrera //
// Se le pide al usuario el numero de seleccion//
// Se imprime el numero de matricula //
// Se imprime el promedio de notas //
// Se retorna a 0 //
// Se finaliza el programa //


#include <stdio.h>

int main()
{
	printf("Sitema de entrega de matriculas y promedio de calificaciones\n");
	int totaldenotas, codigodecarrera, anoingreso, numerodeseleccion;
	float c1 ,c2 ,c3 , suma, promedio;
	totaldenotas = 3;
	printf("Ingrese calificacion 1:\n");
	scanf("%f", &c1);
	printf("\n");
	printf("Ingrese calificacion 2:\n");
	scanf("%f", &c2);
	printf("\n");
	printf("Ingrese calificacion 3:\n");
	scanf("%f", &c3);
	printf("\n");
	suma = c1+c2+c3;
	promedio=suma/totaldenotas;
	printf("Ano de ingreso:");
	scanf("%d", &anoingreso);
	printf("Ingrese codigo de carrera:");
	scanf("%d", &codigodecarrera);
	printf("Ingrese numero de seleccion:");
	scanf("%d", &numerodeseleccion);
	printf("Su numero de matricula es:%d,%d,%d", anoingreso, codigodecarrera, numerodeseleccion);
	printf("\n");
	printf("Su promedio de notas es: %.1f", promedio);
	return 0;
}
