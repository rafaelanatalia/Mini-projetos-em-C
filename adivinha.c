#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int sorteado,chute;
	

	while(1){
		srand(time(NULL));
		sorteado = (rand()%5) + 1;
		printf("\nChute: ");
		scanf("%d",&chute);
		if (sorteado == chute)
			printf("\nAcertou!");
		else
			printf("\nErrou!");
	}
}