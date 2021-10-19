#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int quantidade, contador=0;
	double caloria, total=0;
	printf("Digite a quantidade de refeições: ");
	scanf("%d",&quantidade);	
	do{
		contador = contador + 1;
		printf("\nDigite as calorias da Refeição %d:",contador);
		scanf("%lf",&caloria);
		total = total + caloria;
	}while(contador < quantidade);
	printf("\n\n - O total de calorias digitadas foi: %.3lf",total);
}