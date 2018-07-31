/*Ordene utilizando algún método la cadena de ADN.*/
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
void ordenamientoInsercion (char nucleotido[] , int n){
	int i,j;
	int aux;
	for (i=1; i<n; i++){
		j=i;
		aux=nucleotido[i];
		while (j>0 && aux<nucleotido[j-1]){
			nucleotido[j]=nucleotido[j-1];
			j--;
		}
		nucleotido[j]=aux;
	}
}

void seleccion(char nucleotido[], int n){
	int indicemenor,i,j;
	for(i=0;i<n-1;i++){
		indicemenor=i;
		for(j=i+1;j<n;j++){
			if (nucleotido[j]<nucleotido[indicemenor])
			indicemenor=j;
			if(i!= indicemenor){
				int aux=nucleotido[i];
				nucleotido[i]=nucleotido[indicemenor];
				nucleotido[indicemenor]=aux;
			}
		}		
	}	
}

int main(){
	char nucleotido[10000]={"gtgggggggtttatgcctttagaacagcagactactgataactccaatcctgggttgaaaatgccaagggcgccagagagccaaacgatgagcgttggaccacaaacgataaaaactcactttctccgtggggtgaaagcgattctttctggcccgtatccgccagcacttaaagttgcattcggcgcggccctaccgctgctaattggggtaattgtcctaggattgtacgtaacgcttggcgggcacagccgcaagaaagcccacgcagccgcgatagatgctttggtcgagaagcacgaagcatgctacaaggtccaagcaaagattgcacacggcaggcttgccttacagtccgctgtggtgtctgttgcggatgccagcatgcaacaactccagttcgtgcagcaaggaattctcatgtgtgtcggagagctcgacgatatgcagaagttccggacccgactggataatgaaatcagtgccatcaaccagcgaattcccagcattgtcgaggaggtaagaaaacacaccgacgatgcgcttgagtggaatcttgctagaaccaagaacattttagagggcactgaagagcgcctgaaggatatgggcaatgagttggtgcgctacctagacgatgctcgcgccctcattgaaaatgcacgtatagctgcaggatcaatgcaacacctcgttggtgatgaggtgagaaagcagcttgctgaggttctagtaaaagttgcagaagtaagtaatggctttattgcgcttaagaagagtgtatctggctatttggaaaaaagcagtggacttgttgctagggaagttagggcaatcctggatgaccgcatgcgaagcctgcggaccatgtacaaaatgtgggatgcagaacaaaactccgtagtcagcgtgtgtaccacgctccaaaaggcaagcatggaggctgccgcggtt"};
	printf ("secuencia de nucleotidos\n");
	printf ("\n");
	printf("%s\n\n ",nucleotido);		
	ordenamientoInsercion(nucleotido, strlen(nucleotido));
	printf ("		Secuencia de nucleotidos ordenada alfabeticamente\n");
	printf ("\n");
	printf ("%s\n", nucleotido);
		
	return 0;
}
