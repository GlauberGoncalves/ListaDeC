/*
30. Faça um programa para criar uma função que recebe largura e altura e 
retorna a área do retângulo.
*/
#include <stdio.h>

int main()
{
	float largura, altura, area;
	
	printf("\nInforme a largura \n");
	scanf("%f", &largura);

	printf("Informe a largura\n");
	scanf("%f", &altura);
		
	// Area de processamento	
		area = largura * altura;
		
	printf("A area é %f \n", area);
	
	return 0;
}