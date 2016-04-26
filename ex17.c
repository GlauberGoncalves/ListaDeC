/*
17. Fazer um programa em C para ler uma quantidade N de alunos. Ler a nota de cada um
dos N alunos e calcular a média aritmética das notas. Contar quantos alunos estão com a
nota acima de 5.0. Obs.: Se nenhum aluno tirou nota acima de 5.0, imprimir mensagem:
Não há nenhum aluno com nota acima de 5.
*/
#include <stdio.h>

int main()
{
    int  QuantAlunos,i, contador;
    float notas[100], media;
    contador=0;
    
    
    printf("\nInforme a quantidade de alunos\n");
    scanf("%d", &QuantAlunos);
        system("clear");
    
    for(i=1;i<=QuantAlunos;i++)
    {
        printf("\nInforme a nota do aluno %d \n", i);
        scanf("%f", &notas[i]);
        media = media + notas[i];    
            
            if (notas[i] > 5)
            contador = contador + 1;
                
                system("clear");
    }
 
 media = (media / contador);
 system("clear");
 
  if (contador == 0)
    printf("\nNão há nenhum aluno com nota acima de 5\n");
 else    
    printf("%d com nota maior que 5\n", contador);
 
    printf("A media da nota dos alunos é %f \n", media);
 
 
 return 0;   
}