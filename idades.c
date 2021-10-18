#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int idade, soma=0, contador=0;
	double media=0;
	char continua = 's';
	
	while(continua == 's'){
		printf("\nDigite a idade: ");
		scanf("%d",&idade);
		soma = soma + idade;
		contador++;
		printf("Deseja continuar (s/n)?");
		fflush(stdin);
		scanf("%c",&continua);
	}

	media = (float) soma / (float)contador;
	printf("\nA média das idades é: %.2lf anos.",media);
	printf("\nForam digitadas %d idades.",contador);

}