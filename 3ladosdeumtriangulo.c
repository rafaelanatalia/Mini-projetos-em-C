/*	Faça um Programa que peça os 3 lados de um triângulo. O programa deverá informar se os valores podem ser um triângulo. Indique, caso os lados formem um triângulo, se o mesmo é: equilátero, isósceles ou escaleno.
Dicas:
•	Três lados formam um triângulo quando a soma de quaisquer dois lados for maior que o terceiro;
•	Triângulo Equilátero: três lados iguais;
•	Triângulo Isósceles: quaisquer dois lados iguais;
•	Triângulo Escaleno: três lados diferentes;
*/

#include <stdio.h> 
#include <stdlib.h> 
#include <locale.h>
 int main(){
     setlocale(LC_ALL,"Portuguese"); 
     char continua;
int lado1,lado2,lado3; 
do{

system("cls"); 
printf("\n==========================);
printf("\n	Classificador de Triângulos"); 
printf("\n==========================\n);
printf("\nDigite o tamanho do lado 1: "); 
scanf("%d",&lado1);
printf("\nDigite o tamanho do lado 2: "); 
scanf("%d",&lado2);
printf("\nDigite o tamanho do lado 3: ");
 scanf("%d",&lado3);

 if(lado1+lado2>lado3 && lado1+lado3>lado2 && lado2+lado3>lado1){ 
     printf("\nOs três lados digitados formam um: Triângulo "); 
     if(lado1 == lado2 && lado1 == lado3)
     printf("Equilátero.\n");
     else if(lado1 == lado2 || lado1 == lado3 || lado2 == lado3) 
     printf("Isósceles.\n");
     else
 printf("Escaleno.\n");
 }
 else
 printf("\nOs três lados NÃO formam um Triângulo.\n");
 printf("\n	============================\n");

 printf("\nDeseja continuar (S/N)? "); 
 fflush(stdin); 
 scanf("%c",&continua);
}
while(toupper(continua) != 'N'); 
printf("\nPrograma finalizado.\n\n"); 
system("pause");

}

