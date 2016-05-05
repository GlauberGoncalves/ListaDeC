/*
    2.  Dado um número inteiro positivo n, 
    calcular a soma dos n primeiros números inteiros positivos. 
*/

#include <stdio.h>

int main()
{
    int numero, soma, i;
    
    printf("Informe o numero..: ");
    scanf("%d",&numero);
    
    for (i=1;i<=numero;i++)
    {
        soma+= i;
    }
    printf("A soma dos nrs é : %d\n\n", soma);
    
    
 return 0;

}