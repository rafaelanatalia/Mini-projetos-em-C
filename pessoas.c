#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	double peso, media, soma = 0;
	int contador = 0;
	char continua;
	
	do{
		printf("Digite o peso: ");
		scanf("%lf",&peso);
		soma = soma + peso;
		contador = contador + 1;
		
		printf("Deseja continuar (s/n)?");
		fflush(stdin);
		scanf("%c",&continua);
	}while(continua == 's');
	
	media = soma / contador; 
	printf("\nA média foi: %.3lf Kg.",media);
	printf("\nForam digitados %d pesos.",contador);