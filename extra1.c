/*
1.  Dada uma seqüência de números inteiros não-nulos, seguida por 0, imprimir
seus quadrados
*/
#include <stdio.h>

int main()
{
    int i, condicao, contador, numero[4];
    
    for (i=1;i<100;i++)
    {
      system("cls || clear");     
        printf("\nDigite um número inteiro não nulo\n");
        scanf("%d", &numero[i]);
        
        contador = contador + 1;
       
       system("cls || clear"); 
        printf("\nDeseja continuar (1-s || 2-n)\n");
        scanf("%d", &condicao);
           
            if (condicao == 2)
            break;
    }
    system("cls || clear"); 
     for (i=1;i<=contador;i++)
    {
        printf("\n Quadrado de %d é %d\n",numero[i],numero[i]*numero[i]);
    }
    
    return 0;
}