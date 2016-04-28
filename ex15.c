/*
Faça o programa que apresenta a seguinte saída, perguntando ao usuário o
número máximo (no exemplo, 9). Este número deve ser sempre ímpar.
1 2 3 4 5 6 7 8 9
  2 3 4 5 6 7 8
   3 4 5 6 7
    4 5 6
      5
*/
#include <stdio.h>

int main()
{
    int quantidade, i, cont, cont2, linhas;
    
    
    printf("\nDigite o numero maximo\n");
    scanf("%d", &quantidade);
    printf("\n");
    cont = 0;
    cont2 = 0;
    linhas = (quantidade / 2);  // Quantidades de linhas geradas
    linhas = linhas + 1;  // Quantidades de linhas geradas

   do
    {
    for(i=cont;i<=quantidade;i++) // Imprime a sequancia de cada linha
        {
            if ((i - cont) > 0)
            printf("%d ", i);
            cont2++;
        }
        printf("\n");
        cont++;                   // cont é a var responsavel por começar a 
       for(i=1;i<=cont;i++)      // sequancia aumentando um a cada linha
            printf("  "); // -> imprime o espaço no inicio de cada linha
        quantidade = quantidade -1 ;    // var quantidade diminui 1 para 
                                       // imprimir o ultimo numero da linha anterior - 1;
      
    } while (cont != linhas);        // repete 
   return 0; 
}