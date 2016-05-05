/*
19. Faça um programa em C para ler 2 números N1 e N2, trocar os valores 
de cada um e imprimí­los novamente. Exemplo: N1 = 2 e N2 = 4, vc deve
trocar N1 para N2 e N2 para N1.
*/

#include <stdio.h>

int main()
{
        int n1,n2,aux;

    printf("\nInforma A \n");
    scanf("%d", &n1);

    printf("\nInforme B \n");
    scanf("%d", &n2);

    aux = n1;
    n1 = n2;
    n2 = aux;

    printf("\nA = %d \n",n1);
    printf("\nB = %d \n",n2);
    
return 0;

}