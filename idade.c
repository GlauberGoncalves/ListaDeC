/*
        Programa idade tem como objetivo dizer a idade do usuario.
    O usuario respondera a simples perguntas dizendo somente sim ou não e,
    ao final de uma sequencia de perguntas, aparecera a idade correta.
    
    a versão sera dada da seguinde forma:
    v - versão + a data da alteração com 2 digitos, o mes de alteração com 2 
    digitos e a hora com 2 digitos 
    
    exemplo
        v300414 -30/04 as 14horas
        
        
    A faixa etaria será
        criança     -  0 a 12;
        adolescente - 13 a 19;
        Jovem adulto- 20 a 59;
        Senhor      - 60 a 150;
    
****************************
*    Projeto               *
*        Glauber Gonçalves *
*        Programação C 1   *
****************************

*****************************************************************************
    Seção de ATUALIZAÇÕES
    
    v300414 - incluido classificação "criança" na função classificação.
    v020516 - incluido função elimina idade
              função classificação alterada para pergunta.


*/





#include <stdio.h>

// função elimina idade recebe um intervalo correspondente a idade 
// eliminada. x é menor que y.
int elimina_idade(int x , int y, int vetor[])
{
    int i;
    for (i=x;i<=y;i++)
    {
        vetor[i] = 0;
    }
    
  return 0;
}




/*
   Função pergunta recebe um numero de 1 a 4, faz pergunta e 
   elimina a faixa etaria que não há probabilidade.

*/
int pergunta(int numero, int vetor[])
{
    int resposta,idade_min,idade_max;
        
switch (numero){
   case 1:{
            printf("\nVocê é uma criança? (1-sim | 2-nao)\n");
            scanf("%d", &resposta);
            if (resposta == 1)
                {
                    idade_min = 13; // faixa que sera cortada das possibilidades
                    idade_max = 150;
                    elimina_idade(idade_min,idade_max,vetor);
                    break;
                }
            else numero = 2;    
           }
           
   case 2:{        
            printf("\nVocê é um(a)adolescente? (1-sim | 2-nao) \n");
            break;
          
           }

   case 3:{        
            printf("\nVocê é um jovem adulto? (1-sim | 2-nao) \n");
            break;
           }
   
   case 4:{        
            printf("\nVocê é um Senhor(a)? (1-sim | 2-nao) \n");
            break;
           }           
    }
    return 0;
}

/*
    função VetIdade atribui um numero a cada indice do vetor
    que representa um idade

*/
int VetIdade(int vetor[]) 
{
    int i;
    for(i=1;i<=151;i++){
        vetor[i] = i;
    }
        
    
}

/////////////Inicio do programa///////////
int main()
{
    int idade[151];  // vetor guarda todas as idades possiveis. Nesse caso
                    // 151 possiveis




      
    return 0;
}