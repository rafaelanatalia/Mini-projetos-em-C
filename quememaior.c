/* Faça um Programa que leia três números e mostre o maior e o menor deles.*/

#include <stdio.h>

#include <stdlib.h>

#include <locale.h>

int main(){

setlocale(LC_ALL"Portuguese");

char continua;

double p1.p2,p3,menor;

do{

system("cls");


digitados.");
 
printf("\nSoftware que verifica o maior e o menor número entre os números

printf("\nPor favor, utilize números diferentes.\n");
printf("\nDigite o preço do produto 1: "); 
scanf("%d",&n1);
printf("\nDigite o preço do produto 2: "); 
scanf("%d",&n2);
printf("\nDigite o preço do produto 3: "); 
scanf("%d",&n3);

maior = n1; if(n2>maior)
maior = n2; if(n3>maior)
maior = n3;

menor = n1; if(n2<menor)
menor = n2; if(n3<menor)
menor = n3;
 

printf("\n\nO maior número é: %d.\n",maior); 
printf("\nO menor número é: %d.\n",menor); 
printf("\nDeseja continuar (S/N)? "); 
fflush(stdin);
scanf("%c",&continua);
}while(toupper(continua) != 'N'); 
printf("\nPrograma finalizado.\n\n"); 

system("pause");
}
