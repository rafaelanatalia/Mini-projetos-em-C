/* 	As Organizações Tabajara resolveram dar um aumento de salário aos seus colaboradores e lhe contrataram para desenvolver o programa que calculará os reajustes. Faça um programa que recebe o salário de um colaborador e o reajuste segundo o seguinte critério, baseado no salário atual:
•	Salários até R$ 280,00 (incluindo): aumento de 20%;
•	Salários entre R$ 280,00 e R$ 700,00 (incluindo): aumento de 15%;
•	Salários entre R$ 700,00 e R$ 1500,00 (incluindo): aumento de 10%;
•	Salários acima de R$ 1500,00: aumento de 5%. Após o aumento ser realizado, informe na tela:
•	O salário antes do reajuste;
•	O percentual de aumento aplicado;
•	O valor do aumento;
•	O novo salário, após o aumento.
*/

#include <stdio.h> 
#include <stdlib.h> 
#include <locale.h> 
int main(){
setlocale(LC_ALL,"Portuguese"); 
char continua;
double salario, percentual, aumento, novosalario; 

do{

system("cls");
printf("\n ===================		"); 
printf("\n	Empresas Tabajara");
printf("\n	Software para cálculo do aumento salarial"); 
printf("\n ===================		"); 
printf("\nDigite o salário: R$");
scanf("%lf",&salario);

if(salario <= 280.00){
percentual = 20;
}
else if(salario <= 700.00){
percentual = 15;
}
else if(salario <= 1500.00){ percentual = 10;
 
}
else{
    percentual = 5;
    }

    aumento = (salario*percentual)/100; 
    novosalario = salario + aumento;

printf("\n ======================	"); 
printf("\nO salário antes do reajuste: R$%.2lf",salario);
printf("\nO percentual de aumento aplicado: %.0lf%%",percentual); 
printf("\nO valor do aumento: R$%.2lf",aumento);
printf("\nO novo salário, após o aumento: R$%.2lf",novosalario); 
printf("\n ======================	"); 

printf("\nDeseja continuar (S/N)? "); 
fflush(stdin); 
scanf("%c",&continua);
}
while(toupper(continua) != 'N');
 printf("\nPrograma finalizado.\n\n"); 
 system("pause");

}