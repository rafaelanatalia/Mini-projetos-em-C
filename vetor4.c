#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	int numeros[5]; 
	int contador, soma=0; 
	setlocale(LC_ALL,"Portuguese"); 
	
	for(contador = 0; contador < 5; contador++){
		printf("Digite um número: ");
		scanf("%d",&numeros[contador]);
		soma = soma + numeros[contador];
	}
	
	printf("\nA soma é: %d \n",soma);	
	//numeros[0] = 10; 
	//numeros[1] = 20; //numeros[2] = 30;
	//printf("\nDigite o valor para o Índice 2: ");
	//scanf("%d",&numeros[2]);	
	//numeros[3] = 40;
	//numeros[4] = 50;
		
	for(contador = 0; contador < 5;contador++)
		printf("\n%dª Posição - Índice %d: %d",contador+1,contador,numeros[contador]);
	
	
//	printf("\n1ª Posição - Índice 0: %d",numeros[0]);
//	printf("\n2ª Posição - Índice 1: %d",numeros[1]);	
//	printf("\n3ª Posição - Índice 2: %d",numeros[2]);
//	printf("\n4ª Posição - Índice 3: %d",numeros[3]);
//	printf("\n5ª Posição - Índice 4: %d",numeros[4]);

}