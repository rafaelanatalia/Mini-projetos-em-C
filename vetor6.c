#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int contador;
	int vetor[4];
	
	for(contador=0;contador<4;contador++){
		printf("\nDigite um número: ");	
		scanf("%d",&vetor[contador]);
	}	
	
	for(contador=0;contador<4;contador++)
		printf("Vetor: %d\n",&vetor[contador]);
	
}