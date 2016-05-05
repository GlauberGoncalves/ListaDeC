/*
31. Faça um programa para ler dois números a e b, depois trocar de valor entre 
eles e imprimir novamente a e b.*/
#include <stdio.h>

int main()
{
	int a, b;
	
	printf("Informe o primeiro numero \n");
	scanf("%d", &a);

	printf("Informe o segundo numero \n");
	scanf("%d", &b);
		
	// Area de processamento	
		b = a + b; 
		a = b - a; 
		b = b - a ;
		
	printf("%d e %d\n", a, b);
	
	return 0;
}