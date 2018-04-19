// Se inicia programa//
// Se declaran las variables enteras, con el fin de que al ingresar un numero de 1 a 9 salga una figurita//
// Las variables que se usaran para alcanzar dicho fin son, delimite, i,o,p//
// Se le pide al usuario ingresar el limite del programa entre 1 y 9//
// se reiteran el limite de ciclos que el usuario ingreso//
// se termina el while//
// se retorna a 0//
// se finaliza programa//
#include <stdio.h>
int main (void)
{
	int delimite;
	int i;
	int o;
	int p;

	while (delimite<1||delimite>9){
	printf("¿que numero pondría?: \n");
	scanf("%d",&delimite);}
	
	for(i=1;i<=delimite;i++){

		for(o=1;o<=i;o++){
		printf("%d",o);

			if(o==i){

				for(p=o-1;p>0;p--){
				printf("%d",p);
				}
			}
		}
		printf ("\n");
	}
		
		return 0;
	}
