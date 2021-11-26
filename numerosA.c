#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int contador, sorteado;
	
	printf("\nSorteio\n");
	srand(time(NULL));
	
	for(contador=1;contador<=5;contador++){
		sorteado = rand() % 100+1;
		printf("%d \n",sorteado);
	}	
}