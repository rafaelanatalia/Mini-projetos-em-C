#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main (){
	setlocale(LC_ALL,"Portuguese");
	int contador,contadornovo=0;
	int vetor[100], pares[50];
	
	for(contador=0;contador<100;contador++){
		vetor[contador]=contador+1;
		
		if( (vetor[contador]%2) == 0 ){
			pares[contadornovo] = vetor[contador];
			contadornovo++;
		}			
	}
	
	for(contador=0;contador<50;contador++)
		printf("\nPares: %d",pares[contador]);	
}