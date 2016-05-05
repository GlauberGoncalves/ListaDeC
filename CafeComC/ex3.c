/*
3. Faça um programa em C para ler o ano de nascimento do usuário, calcular e informar a
idade do mesmo.
*/

#include <stdio.h>

int main()
{
		int AnoDeNascimento, AnoAtual, idade;
		AnoAtual = 2016;
				printf("Informe o ano de seu nasc..: ");
				scanf("%d",&AnoDeNascimento);
		
		idade = (AnoAtual - AnoDeNascimento);
		printf("Sua idade é aproximadamente %d.\n",idade);

	 	return 0;
}