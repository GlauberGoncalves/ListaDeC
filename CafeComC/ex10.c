/*
10. Descubra o maior entre 3 números fornecidos pelo usuário
*/
#include <stdio.h>

int main()
{
    int numero, maior, i;
    maior=-2147483648;
   system("cls || clear");
   for (i=1;i<=3;i++)
   {
    printf("\nInforme %d numero\n",i);
    scanf("%d", &numero);
        if (numero > maior)
            maior = numero;
        system("cls || clear");
            
   }
   printf("\nO maior numero digitado foi o %d\n",maior);
    return 0;
}