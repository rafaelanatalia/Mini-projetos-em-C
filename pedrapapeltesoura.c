#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int sorteado, chute;
	srand(time(NULL));
	sorteado = (rand()%3) + 1;
	printf("\n--------------------------------");
	printf("\nEscolha entre: ");
	printf("\n  1 - Pedra    ");
	printf("\n  2 - Papel    ");
	printf("\n  3 - Tesoura  ");
	printf("\n--------------------------------");
	printf("\nDigite: ");
	scanf("%d",&chute);
	printf("Jogador: %d X %d Computador",chute,sorteado);
	if(chute == sorteado)
		printf("Empate");
	else if (chute == 1 && sorteado == 2)
			printf("\nO computador venceu!");
	else if (chute == 1 && sorteado == 3)
			printf("\nParabéns! Você venceu!!!");
	//Parcial - Vamos continuar na próxima aula
}