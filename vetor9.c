#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main (){
	setlocale(LC_ALL,"Portuguese");
	int contador,contadorpares=0,contadorimpares=0;
	int vetor[100], pares[50], impares[50];
	int soma,somapares=0,somaimpares=0;
	for(contador=0;contador<100;contador++){
		vetor[contador]=contador+1;	
				
		if( (vetor[contador] %2) == 0 ){
			pares[contadorpares] = vetor[contador];
			somapares = somapares + pares[contadorpares];
			contadorpares++;
		}
		else{
			impares[contadorimpares] = vetor[contador];
			somaimpares = somaimpares + impares[contadorimpares];
			contadorimpares++;
		}
		soma = soma + vetor[contador];
	}
	printf("\nPares:");
	for(contador=0;contador<50;contador++)
		printf(" %d",pares[contador]);
	printf("\nA soma dos Pares é: %d",somapares);
	
	printf("\n\nÍmpares:");	
	for(contador=0;contador<50;contador++)
		printf(" %d",impares[contador]);
	printf("\nA soma dos Ímpares é: %d",somaimpares);	
	printf("\n\nA soma de todos os números é: %d",soma);
}