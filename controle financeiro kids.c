#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int quantidade,contador;
	double operacoes,total=0,media=0;
	
	printf("Digite a Quantidade de Operações financeira realizadas: ");
	scanf("%d", &quantidade);
	
	while(contador< quantidade){
		contador++;
		printf("\nDigite o valor da %d operaçao: ",contador);
		scanf("%lf",&operacoes);
		total=total+ operacoes;
	}
	media = total/ quantidade;
	printf(" O total é: R$%.2lf",total);
	printf ("A média de foi: R$%.2lf",media);
	
	}