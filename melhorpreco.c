/*1.	Faça um programa que pergunte o preço de três produtos e informe qual produto você deve comprar, 
sabendo que a decisão é sempre pelo mais barato.

*/


#include <stdio.h> 
#include <stdlib.h>
 #include <locale.h> 

 int main(){
     setlocale(LC_ALL,"Portuguese"); 
     char continua;
double p1,p2,p3,menor; 

do{

system("cls");
printf("\nSoftware que verifica o menor preço.");
printf("\nPor favor, utilize valores diferentes.\n");
 printf("\nDigite o preço do produto 1: R$"); 
scanf("%lf",&p1);
printf("\nDigite o preço do produto 2: R$"); 
scanf("%lf",&p2);
printf("\nDigite o preço do produto 3: R$"); 
scanf("%lf",&p3);

if(p1<p2 && p1<p3)
printf("\nO Produto 1 tem o menor preço: R$%.2lf.\n",p1);
else if(p2<p1 && p2<p3)
printf("\nO Produto 2 tem o menor preço: R$%.2lf.\n",p2); 
else if(p3<p1 && p3<p2)
printf("\nO Produto 3 tem o menor preço: R$%.2lf.\n",p3);
else
printf("Foram digitados produtos com o mesmo valor ou valor inválido!");

printf("\nDeseja continuar (S/N)? "); 
fflush(stdin); 
scanf("%c",&continua);
}

while(toupper(continua) != 'N');
 printf("\nPrograma finalizado.\n\n"); 
 system("pause");
}
