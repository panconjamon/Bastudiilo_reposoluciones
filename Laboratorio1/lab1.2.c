//Se inicia programa//
// se declaran variables tipo float /7
// se declaran variables tipo int//
// se le pregunta al usuario cuanto costo la comida//
//se calcula el iva//
// se calcula la propina//
// se calcula el totalfinal//
// se imprime el valor del iva y la propina//
// se ingresa la cantidad de amigos /7
// se imprime el valor a pagar por cada  uno/7
// se retorna a 0//
// se finaliza programa//  
#include <stdio.h>
int main (void){
	float total;
	float iva;
	float propina;
	float cadauno;
	int amigos;
	float totalfin;
	printf ("¿cuanto costo la comida?\n");
	scanf ("%f",&total);
	iva= (19*total)/100;
	propina= (10*total)/100;
	totalfin= (iva+propina+total);
	
	
	printf ("el total del consumo incluyendo el iva y la propina es :%.2f\n", totalfin);
	printf ("ingrese la cantidad e amigos");
	scanf ("%d",&amigos);
	cadauno=(totalfin/amigos);
	printf ("cada uno debe pagar :%.2f",cadauno);
return 0;
}
