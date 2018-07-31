/*Escriba un programa con una función con la que se pueda buscar una subsecuencia determinada en
una gran secuencia de ADN, entregada por el usuario*/

#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void buscarconcordancia(char secuence[1000], char ADN2[100]) {
	int i;
	int suma=0;
	
	if (strstr(secuence, ADN2)) {
		printf("\nLa secuencia <%s>fue encontrado.\n", ADN2);
		for (i=0; i<strlen(secuence); i++){
			secuence[i]=ADN2 [i];
			suma++;
		}
			
	}
	else {
		printf("\nLa secuencia <%s> NO fue encontrado.\n", ADN2);
	}
	printf ("Hay %d concordancias", suma);
} 


int main() {
	char secuence[1000] = {"gtgggggggtttatgcctttagaacagcagactactgataactccaatcctgggttgaaaatgccaagggcgccagagagccaaacgatgagcgttggaccacaaacgataaaaactcactttctccgtggggtgaaagcgattctttctggcccgtatccgccagcacttaaagttgcattcggcgcggccctaccgctgctaattggggtaattgtcctaggattgtacgtaacgcttggcgggcacagccgcaagaaagcccacgcagccgcgatagatgctttggtcgagaagcacgaagcatgctacaaggtccaagcaaagattgcacacggcaggcttgccttacagtccgctgtggtgtctgttgcggatgccagcatgcaacaactccagttcgtgcagcaaggaattctcatgtgtgtcggagagctcgacgatatgcagaagttccggacccgactggataatgaaatcagtgccatcaaccagcgaattcccagcattgtcgaggaggtaagaaaacacaccgacgatgcgcttgagtggaatcttgctagaaccaagaacattttagagggcactgaagagcgcctgaaggatatgggcaatgagttggtgcgctacctagacgatgctcgcgccctcattgaaaatgcacgtatagctgcaggatcaatgcaacacctcgttggtgatgaggtgagaaagcagcttgctgaggttctagtaaaagttgcagaagtaagtaatggctttattgcgcttaagaagagtgtatctggctatttggaaaaaagcagtggacttgttgctagggaagttagggcaatcctggatgaccgcatgcgaagcctgcggaccatgtacaaaatgtgggatgcagaacaaaactccgtagtcagcgtgtgtaccacgctccaaaaggcaagcatggaggctgccgcggtagcaagt"}; 
	printf("\nSecuencia base:\n> %s\n", secuence);
	
	char ADN2[100]; 
	printf ("\nIngresa la secuence a buscar (max 100 caracteres): ");
	gets(ADN2); 

	buscarconcordancia(secuence, ADN2);

	return 0;
}
