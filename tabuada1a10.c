#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int contador,tabuada;
	for(tabuada = 1 ; tabuada <=10 ; tabuada++)
	{
		printf("\nTabuada do número %d:",tabuada);
		for(contador = 0 ; contador <= 10 ; contador++)
		{
			printf("\n %d x %d = %d",tabuada,contador,contador*tabuada);
			Sleep(500);
		}
	}
}