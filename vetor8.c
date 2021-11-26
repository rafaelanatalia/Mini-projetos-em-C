#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main (){
	setlocale(LC_ALL,"Portuguese");
	int contador,contadorpares=0,contadorimpares=0;
	int vetor[100], pares[50], impares[50];
	
	for(contador=0;contador<100;contador++){
		vetor[contador]=contador+1;	
		if( (vetor[contador]%2) == 0 ){
			pares[contadorpares] = vetor[contador];
			contadorpares++;
		}
		else{
			impares[contadorimpares] = vetor[contador];
			contadorimpares++;
		}
	}
	printf("\nPares:");
	for(contador=0;contador<50;contador++)
		printf(" %d",pares[contador]);
	printf("\n\nÍmpares:");	
	for(contador=0;contador<50;contador++)
		printf(" %d",impares[contador]);	
}