#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int sorteado,chute;
	srand(time(NULL));
	sorteado = (rand()%99) + 1;	
	while(1){

		printf("\nDigite o chute: ");
		scanf("%d",&chute);
		
		if (sorteado == chute){
			printf("\nAcertou!");
			printf("\nSorteado: %d\n\n",sorteado);
			break;
		}else{
			printf("\nErrou!");
			if (sorteado > chute)
				printf("\nO sorteado é maior!");
			else
				printf("\nO sorteado é menor!");				
		}		
	}
}
