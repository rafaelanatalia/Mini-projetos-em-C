#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	double preco, soma;
	char continua;
	soma = 0;
	
	do{
		printf("Digite o valor: ");
		scanf("%lf",&preco);
		soma = soma + preco;
		printf("Deseja continuar (s/n)?");
		fflush(stdin);
		scanf("%c",&continua);
	}while(continua == 's');
	printf("A soma é: %.2lf ", soma);
}