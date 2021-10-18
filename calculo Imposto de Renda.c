#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL,"Portuguese");
	double salario, imposto;
	char continua = 's';
	
	while(continua == 's' || continua == 'S')
	{
		printf("Digite o sal�rio: ");
		scanf("%lf",&salario);
		printf("Valor digitado: %lf\n",salario);
		if(salario <= 1903.98)
		{
			printf("Isento de Imposto de Renda!\n");
		}
		else 
			if(salario >= 1903.99 && salario <= 2826.65)
			{
				imposto = (salario*7.5)/100;
				printf("Imposto de 7,5%%\n No valor de: %.2lf\n",imposto);
			} 
			else
				if(salario >= 2826.66 && salario <= 3751.05)
				{
					imposto = (salario*15)/100;
					printf("Imposto de 15%%\n No valor de: %.2lf\n",imposto);
				}
				else
					if (salario >= 3751.06 && salario <= 4664.68)
					{
						imposto = (salario*22.5)/100;
						printf("Imposto de 22,5%%\n No valor de: %.2lf\n",imposto);						
					}
					else
						{
							imposto = (salario*27.5)/100;
							printf("Imposto de 27,5%%\n No valor de: %.2lf\n",imposto);							
						}
		printf("Deseja continuar (s/n)?");
		fflush(stdin);
		scanf("%c",&continua);
		printf("\n");	
	}	
}
