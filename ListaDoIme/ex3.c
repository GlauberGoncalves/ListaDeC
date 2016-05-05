/*
    3.  Dado um número inteiro positivo n,
    imprimir os n primeiros naturais ímpares.
*/

#include <stdio.h>

int main()
{
    int numero,cont, i;
    cont = -1;
    printf("Informe o numero..: ");
    scanf("%d",&numero);
    
    for (i=1;i<=numero;i++)
    {
	cont = cont + 2;
        printf("%d ", cont);
    }
    printf("\n\n");
 return 0;

}