/*
8. Faça um programa em C par ler e contabilizar os votos de 2 candidatos: Canditado 1 e
Candidato 2. Após a leitura do voto, devese
perguntar se deseja continuar(s/n) . O programa
só termina quando o usuário não desejar mais continuar. Ao final, o programa deve informar
a percentagem de votos do candidato 1 e candidato 2.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    //declaração das variaveis 
    
    int candidato1, candidato2, voto, decisao;
    float porc1,porc2;
    
    candidato1=0;
    candidato2=0;
    //requisitando dados do usuario
  do
  {
      system("clear");
        printf("\nInforme o numero de seu candidato (1 ou 2)\n ");
        scanf("%d",&voto); 
       
        // Area de processamento dos dados 
        
            if (voto == 1)
                candidato1 = candidato1 + 1;
            else if (voto == 2)
                candidato2 = candidato2 + 1;
            system("cls || clear");  
                voto = 0;

        // Pergunta ao usuario se havera outro voto
        
        printf("\n Deseja continuar\n");
        printf("\n 1 - Sim\n");
        printf("\n 2 - Não\n");
        scanf("%d",&decisao);
        system("clear");
  }  
  while (decisao != 2);
    // Porcentagem dos votos
    voto = candidato1 + candidato2;
    porc1 = (((float)candidato1 / voto)*100);
    porc2 = (((float)candidato2 / voto)*100);
  
     // Mostra os votos
     system("cls || clear");
         printf("\n*************************************");
         printf("\n***  Fim da votação               ");
         printf("\n***                               ");
         printf("\n*** Candidato 1..: %d porcent     ",(int)porc1);
         printf("\n*** Candidato 2..: %d porcent     ",(int)porc2);
         printf("\n***                               ");
         printf("\n**********************************\n");
         printf("\n**********************************");        
         printf("\n***      Total de votos           ");
         printf("\n***  candidato 1: %d              ", candidato1);
         printf("\n***  candidato 2: %d              ", candidato2);
         printf("\n**********************************\n");
    return 0;
    
    
}