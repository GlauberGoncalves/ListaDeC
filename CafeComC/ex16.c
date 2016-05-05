/*
16. Escreva um programa que leia 3 notas de um aluno e a média das notas dos exercícios realizados por ele. Calcular a média de aproveitamento, usando a fórmula: MA = (N1 + N2*2 + N3*3 + ME)/7.
*/

#include <stdio.h>

int main()
{
     float nota[3], me, ma;
     int i;
   for(i=0;i<=2;i++)
     {
       printf("\nInforme a nota %d", i+1);
        scanf("%f", &nota[i]);
      }
    printf("\nInforme a Media das notas dos exercicios");
    scanf("%f", &me);

     ma = (nota[1] + nota[2]*2 + nota[3]*3 + me) / 7;

     if (ma < 4)
        printf("\nConceito E\n");
     else if (ma < 6)
        printf("\nConceito D\n");
     else if (ma < 7.5)
       printf("\nConceito C\n");
     else if(ma < 9)
       printf("\nConceito B\n");
     else  printf("\nConceito B\n");
    
 return 0;
}