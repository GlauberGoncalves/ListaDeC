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
    
    int candidato1, candidato2, voto;
    char decisao[2];
  
    //requisitando dados do usuario
 do
    {
        printf("\nInforme o numero de seu candidato (1 ou 2)\n ");
        scanf("%d",&voto); 
        // Area de processamento dos dados 
        
            if (voto == 1)
                candidato1=candidato1+1;
            else candidato2=candidato2+1;    
        
        
        printf("\n Deseja continuar (s/n)\n");
        scanf("%c", decisao);
    }
 while (decisao != "n");

    
    // Resposta ao usuario

    return 0;
    
    
}