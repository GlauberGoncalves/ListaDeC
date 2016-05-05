/*
2. Faça um programa em C para somar os números inteiros de 1 a 100 e informar qual é a
média.
*/

#include <stdio.h>

int main()
		{
			int 	i, soma;
			float  media;
				for(i=1;i<=100;i++)
					soma = soma + i;
					media = soma/2;
			
			printf("A media é %f ",media);
				return 0;
		}
