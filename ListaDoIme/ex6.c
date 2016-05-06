 /*
6  Dados o número n de alunos de uma turma de Introdução aos 

Autômatos a Pilha (MAC 414) e suas notas da primeira prova, 

determinar a maior e a menor nota obtidas por essa turma (Nota 

máxima = 100 e nota mínima = 0). 
*/

#include <stdio.h>

int main()
{
// Variaveis
   int NumAlunos, nota, maior, menor, i;
   maior = 0;
   menor = 100;   

//Requerendo dados do usuario
   printf("Informe a quantidade de alunos: \n");
   scanf("%d", &NumAlunos);
   
// Verifica a maior e a menor nota entre os alunos

   for(i=1; i <= NumAlunos; i++){
    printf("\nInforme a nota de 0 a 100 %d ", i);
    scanf("%d", &nota);
        if ( nota < menor){
        menor = nota;
        }
        if (nota > maior){
        maior = nota;
        }
     }
// Imprime resultados
 printf("\nA menor nota foi %d", menor);
 printf("\nA maior nota foi %d\n", maior);

return 0;
}
