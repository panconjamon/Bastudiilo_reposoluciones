#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//Debe crear un programa de apuestas en donde el usuario pueda escoger una de las dos opciones (A o
//B) y el programa por el azar determinará el número mayor y sabremos si ganamos o perdemos. Si los
//dos números fueran iguales se deberá repetirse el juego hasta que sean distintos. Una vez el usuario
//haya introducido su apuesta, el programa mostrará el valor aleatorio generado para A y B y dirá si
//hemos ganado la apuesta (apostamos al número más alto) o perdido. Por último el programa deberá
//llevar un contador de ganadas y perdidas, porque lo que nos decir cuántas partidas hemos ganado y
//perdido hasta el momento. Tras una jugada, nos preguntará si queremos jugar otra vez.


// Se declara una funcion llamada aleatoria
// Dentro de la funcion aleatoria se declara la varibale numero 
// la variable numero se igual al rand()%100
// y se retorna la variable numero
// se declara un procedimiento void, denominado apuestas
// dentro del procedimiento se declara a,b con el fin de tener 2 numeros aleatorios
// se declara perder y unpunto con el fin de utilizarlos como contadores
// se declara una variable char con el fin de finalizar el programa
// se utiliza srand(time(NULL))
// se utilia un while con un condicional de fin igual a 's' ó 'S'
// se declara una variable para ver la seleccion del usuario (a ó b)
// Se llama a la funcion aleatoria y se iguala a la variable a
// Se llama a la funcion aleatoria y se iguala a la variable b
// se imprime a
// se imprime b
// se  le pide al usuario su opcion (a ó b)
// a traves del condicional if  y contadores se evaluan los numeros aleatorios junto con la opcion del usuario
// se imprime la cantidad de puntos al ganar
// se imprime la cantidad de partidas perdidas
// se le pregunta al usuario si quiere seguir jugando
// se cierra el procedimiento
// se declara el int main
// se llaman las funciones
// y se retorna a 0
int aleatorio(){
	int numero;
	numero =(rand()%100)+1;
	//printf ("El numero a imprimir es %d\n",numero);
	return numero;
}
void apuestas(){
	int a;
	int b;
	int perder;
	int unpunto;
	char fin='s';
	unpunto=0;
	perder=0;
	srand (time(NULL));
	
	while (fin =='s'|| fin =='S'){
	char seleccion;
	a=  aleatorio();
	b= aleatorio();
	printf ("a = %d\n",a);
	printf ("b= %d\n",b);
	printf ("¿Apuestas por A o B?\n");
	scanf (" %c",&seleccion);
	if(seleccion=='a' && a>b){
		unpunto++;
		printf ("Gano\n");
	}
	else if (seleccion == 'b'&& b>a){
		unpunto++;
		printf ("gano\n");
	}
	else{
			perder++;
			printf ("perdio\n");
			
	printf (" Lleva %d partidas ganadas\n",unpunto);
	printf ("Lleva %d partidas perdidas\n",perder);
	printf ("¿Quieres seguir jugando? (s/n):\n");
	scanf (" %c",&fin);
	while (getchar()!='\n');
}
}
}

int main(){
	aleatorio();
	apuestas();
	return 0;
}

