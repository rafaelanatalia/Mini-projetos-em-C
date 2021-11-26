/*Faça um Programa que pergunte em que turno você estuda. 
Peça para digitar M-Matutino ou V-Vespertino ou N-Noturno. Imprima a mensagem "Bom Dia!",
 "Boa Tarde!" ou "Boa Noite!" ou "Valor Inválido!", conforme o caso. */


#include <stdio.h> 
#include <stdlib.h>
#include <locale.h> 
int main(){
setlocale(LC_ALL,"Portuguese");
char opcao,continua;
do{
system("cls");
printf("Turno de Estudo: \n M - Matutino \n V - Vespertino \n N - Noturno"); 
printf("\nDigite uma letra: ");

fflush(stdin);

scanf("%c",&opcao); 

switch(toupper(opcao)){
case 'M':
printf("\nBom dia!\n"); break;
case 'V':
printf("\nBoa tarde!\n"); break;
case 'N':
printf("\nBoa noite!\n"); break;
 
default:

}
 

printf("\nValor Inválido!\n");
 
printf("\nDeseja continuar (S/N)? "); 

fflush(stdin); 

scanf("%c",&continua);

}while(toupper(continua) != 'N');

 printf("\nPrograma finalizado.\n\n"); 

 system("pause");




}
 
