/*
12. Exiba a tabuada de um número fornecido pelo usuário.
*/
#include <stdio.h>

int main()
{
    int numero, i;
   
   printf("\nInforma um numero \n");
   scanf ("%d", &numero);
    
    for (i=1;i<=10;i++)
            printf("%d x %d = %d\n",i,numero, i * numero);

    return 0;
}