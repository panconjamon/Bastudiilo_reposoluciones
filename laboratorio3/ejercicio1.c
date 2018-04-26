// Se inicia programa //
// se declara la funcion//
// Se declaran variables tipo decimal  en una funcion, con el fin de sumar las horas_dias trabajadas//
// Se declara un for con el limite de dias//
// se retorna una variable distinta de 0 llamada horas_dias que indica las horas totales que trabajo durante los 6 dias//
// se retorna la variable horas_dias que es la totalidad de horas que trabajo en 6 dias//
// se declara una funcion llamada calculo_sueldo con un parametro horas, dentro de la funcion se declaran variables decimales,tal como sueldo ,pago_horas//
// se pide al usuario el valor de de cada hora trabajada//
// se le asigna un valor a pago_hora//
// se calcula el sueldo//
// se retorna el sueldo//
// En un procedimiento llamado imprimir_pago con dos parametros tipo decimal , x y z//
// en un int main se imprime el valor de  y z //
// se retorna a 0//
// se finaliza programa//
#include <stdio.h>
// Calculo de horas trabajadas de un trabajador//
float horas(){
float horas_trabajadas;
float horas_dias=0;
int i=1;
	for(i=1;i<=6;i++){
		printf ("ingrese horas trabajadas del dia %d:\n",i);
		scanf ("%f",&horas_trabajadas);
		horas_dias=horas_dias+horas_trabajadas;
	}
	return  horas_dias;
}
float calculo_sueldo(float horas){
	float sueldo;
	float pago_hora;
	printf ("ingrese el valor de cada hora trabajada:\n");
	scanf ("%f",&pago_hora);
	//x=horas();
	sueldo=(horas*pago_hora);
	return sueldo;
}
void imprimir_pago(float z, float x){
	printf ("El sueldo total es:%.0f\n",z);
	printf ("Las horas trabajas son:%.2f\n",x);
}		
int main (void){
	float z;
	float x;
	x=horas();
	z=calculo_sueldo(x);
	imprimir_pago(z,x);
	return 0;
}
