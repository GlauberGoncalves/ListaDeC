/*
Escreva uma função que peça dois números inteiros ao usuário e exibe 
o valor soma seguido pelo maior deles.
*/

#include <stdio.h>


void SomaNumeros(int x , int y)
{
    int soma, maior;
    
    soma = x + y;
    
    if (x > y){
        maior = x;
    }else{
        maior = y;
    }
   system("clear");
   printf("\n%d %d\n", soma, maior);
}





int main( )
{
    int numero[2] ;
    
    printf("Informe o primeiro numero \n"); scanf("%d", &numero[0]);
    printf("Informe o segundo  numero \n"); scanf("%d", &numero[1]);
    
    SomaNumeros(numero[0], numero[1]);

}