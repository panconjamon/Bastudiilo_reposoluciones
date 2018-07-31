/*Del ejercicio anterior, incluya además la posibilidad de encontrar el patrón y transformar las minúsculas
por mayúsculas, por ejemplo si el usuario ha digitado tacaaat, en la cadena de ADN impreso en pantalla
debe mostrarse destacado como TACAAAT*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int mayus(char secuence[1000], int lensecuence, char subsecuence[100], int lensubsecuence){
	int i, j;
	for (i=0; i<lensecuence; i++){
		for (j=0; j<lensubsecuence; j++){
			if(secuence[i]==subsecuence[j]){
				if (secuence[i]==97){ 
				secuence[i]=65;
				}
				if (secuence[i]==116){
					secuence[i]=84;
				}
				if (secuence[i]==99){
					secuence[i]=67;
				}
				else if (secuence[i]==103){
					secuence[i]=71;
				}	
			}
		}
	}
	printf("\n");
	return 0;
}	 	
		
int main (){
	int sustitucion;
	char secuence [1000]="gtgggggggtttatgcctttagaacagcagactactgataactccaatcctgggttgaaaatgccaagggcgccagagagccaaacgatgagcgttggaccacaaacgataaaaactcactttctccgtggggtgaaagcgattctttctggcccgtatccgccagcacttaaagttgcattcggcgcggccctaccgctgctaattggggtaattgtcctaggattgtacgtaacgcttggcgggcacagccgcaagaaagcccacgcagccgcgatagatgctttggtcgagaagcacgaagcatgctacaaggtccaagcaaagattgcacacggcaggcttgccttacagtccgctgtggtgtctgttgcggatgccagcatgcaacaactccagttcgtgcagcaaggaattctcatgtgtgtcggagagctcgacgatatgcagaagttccggacccgactggataatgaaatcagtgccatcaaccagcgaattcccagcattgtcgaggaggtaagaaaacacaccgacgatgcgcttgagtggaatcttgctagaaccaagaacattttagagggcactgaagagcgcctgaaggatatgggcaatgagttggtgcgctacctagacgatgctcgcgccctcattgaaaatgcacgtatagctgcaggatcaatgcaacacctcgttggtgatgaggtgagaaagcagcttgctgaggttctagtaaaagttgcagaagtaagtaatggctttattgcgcttaagaagagtgtatctggctatttggaaaaaagcagtggacttgttgctagggaagttagggcaatcctggatgaccgcatgcgaagcctgcggaccatgtacaaaatgtgggatgcagaacaaaactccgtagtcagcgtgtgtaccacgctccaaaaggcaagcatggaggctgccgcggtagcaagt";
	char subsecuence[100];
	
	printf ("Ingrese una subsecuence (maximo 100 aminoacidos): ");
	scanf ("%s", subsecuence);
	sustitucion = mayus(secuence, strlen(secuence), subsecuence, strlen(subsecuence));
	
	printf ("%d", sustitucion);
	printf("Secuecnia original: \n%s\n", secuence); 
	mayus(subsecuence, strlen(secuence), subsecuence, strlen(subsecuence));
	printf ("Sub secuence ingresada: %s\n", subsecuence);
		
	return 0; 
}

