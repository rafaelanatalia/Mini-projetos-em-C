#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int n1, n2, n3;
	printf("Digite o primeiro número: ");
	scanf("%d",&n1);
	printf("Digite o segundo número: ");
	scanf("%d",&n2);	
	printf("Digite o terceiro número: ");
	scanf("%d",&n3);
	printf("Os números digitados foram: %d, %d e %d.\n",n1,n2,n3);

	if (n1>n2)
		if (n2>n3)
			printf("A ordem decrescente é: %d, %d e %d",n1,n2,n3);	
		else 
			if(n1>n3)	
				printf("A ordem decrescente é: %d, %d e %d",n1,n3,n2); 
				else
					printf("A ordem decrescente é: %d, %d e %d",n3,n1,n2); 
	else
		if (n2>n3)
			if(n1>n3)	
				printf("A ordem decrescente é: %d, %d e %d",n2,n1,n3); 	
			else 
				printf("A ordem decrescente é: %d, %d e %d",n2,n3,n1); 
		else
			printf("A ordem decrescente é: %d, %d e %d",n3,n2,n1); 								
}
	