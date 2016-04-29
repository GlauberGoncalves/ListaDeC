/*
20. Fazer um programa em C para imprimir a tabela ASCII.
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i;
    for(i=1;i<=255;i++)
    {
        printf("%d = %c ",i,i);
        if ((i % 5) == 0)
            printf("\n");
    }

    return 0;
}
