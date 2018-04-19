//Se inicia programa//
//Se declaran variables tipo int candidato1, 2 y 3, votos , nulo , y totaldevotos/7
//se declara una variable tipo char//
// 
#include <stdio.h>
int main (void)
{
	printf ("Elecciones presidente centro alumno seccion ingeneria civil en Bioinformatica\n");
    int candidato1=0;
    int candidato2=0;
    int candidato3=0;
    int votos;
    int nulo=0;
    int totaldevotos=0;
    char x;
		while (x!= 'f'){
			printf ("Ingrese voto:\n");
	        scanf ("%d",&votos);
    switch(votos){
        case 1:
            candidato1=candidato1+1;
            break;
            
        case 2:
            candidato2=candidato2+1;
            break;
            
        case 3:
            candidato3=candidato3+1;
            break;
        
       if(votos!=0 || votos>3){ 
            nulo=nulo+1;
		}
             
            
	}//switch
	votos=0;
	printf ( "¿cerramos la votacion?\n");
	printf ("presione f si desea terminar\n");
	scanf  ("%c",&x);
    }//while
    totaldevotos= (candidato1+candidato2+candidato3+nulo);
   printf ("Los votos efectuados en la votacion fueron: %d\n",totaldevotos);
   printf ("Los votos obtenidos por el candidato1 son: %d\n",candidato1);
   printf ("Los votos obtenidos por el candidato2 son: %d\n",candidato2);
   printf ("los voto obtenidos por el candidato3 son: %d\n",candidato3);
   printf ("los votos nulos son: %d\n",nulo);
   if ((candidato2<candidato1)&&(candidato1>candidato3)){
        printf ("¡Felicidades!  Ha ganado el candidato1\n");
}
   if ((candidato1<candidato2)&&(candidato2>candidato3)){
	   printf (" ¡Congratulations!, Ha ganado el candidato2\n");
}
   if ((candidato3>candidato2)&&(candidato3>candidato1)){
	   printf ("¡congratulations! , Ha ganado el candidato3\n");
}
  
	return 0;
}

            
			
		
	
	
