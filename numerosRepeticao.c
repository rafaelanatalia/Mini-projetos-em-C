#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int inicio, fim, contador;
	printf("\nDigite o valor inicial: ");
	scanf("%d",&inicio);
	printf("\nDigite o valor final: ");
	scanf("%d",&fim);
		
	for ( contador = inicio; contador <= fim; contador++){
		printf("\n%d ",contador);
	}
	
}