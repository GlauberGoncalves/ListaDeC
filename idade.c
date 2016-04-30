/*
        Programa idade tem como objetivo dizer a idade do usuario.
    O usuario respondera a simples perguntas dizendo somente sim ou não e,
    ao final de uma sequencia de perguntas, aparecera a idade correta.
    
    a versão sera dada da seguinde forma:
    v - versão + a data da alteração com 2 digitos, o mes de alteração com 2 
    digitos e a hora com 2 digitos 
    
    exemplo
        v300414 -30/04 as 14horas
    
****************************
*    Projeto               *
*        Glauber Gonçalves *
*        Programação C 1   *
****************************

    Seção de atualizações
    
    v300414 - incluido classificação "criança" na função classificação.


*/





#include <stdio.h>

/*
    Função classificação irá classificar uma pessoa em criança,
    adolescente, adulto e idoso.

*/
int classificacao(int numero)
{
    int resposta,IdadeMax,IdadeMin;
        
        
switch (numero){
   case 1:{
            printf("\nVocê é uma criança?\n");
            scanf("%d", &resposta);
        
            if(resposta == 1)
              {
                IdadeMin = 0;
                IdadeMax = 12;
            
                printf("Você tem menos de 13 anos? ");
                scanf("%d", &resposta);
               
                if(resposta == 1)
                  {
            	    IdadeMin = 0;
            	    IdadeMax = 12;
                  }else{
                    	 IdadeMin = 13;
                    	 IdadeMax = 150;
                       }
               }else
                   {
                       printf("Você tem mais de 11 anos?\n");
                       scanf("%d", &resposta);
                       
                       if (resposta == 1)
                           {
                              IdadeMin = 13;
                              IdadeMax = 150;
                           }
                       }
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
    int IdadeMin, IdadeMax;


      
    return 0;
}