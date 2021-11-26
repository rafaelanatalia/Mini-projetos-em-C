#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int quantidade, contador=0;
	double operacoes, total=0, media=0;	
	printf("Digite a quantidade de operações financeiras realizadas: ");
	scanf("%d",&quantidade);	
	while(contador < quantidade){
		contador++;
		printf("\nDigite o valor da %dª operação: ",contador);
		scanf("%lf",&operacoes);
		total = total + operacoes;
	}
	media = total/quantidade;
	printf("\nO total é: R$%.2lf",total);
	printf("\nA média foi: R$%.2lf",media);
}