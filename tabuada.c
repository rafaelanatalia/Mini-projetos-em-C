#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    int contador,tabuada=7;
    printf ("Tabuada do 7:");

    for(contador = 1; contador <=10; contador++)
    {

        printf("\n  %d x %d= %d",contador,tabuada,tabuada*contador);
    }
}
