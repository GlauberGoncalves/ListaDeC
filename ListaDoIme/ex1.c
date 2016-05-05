/*
    Exercícios com Inteiros
    1.  Dada uma seqüência de números inteiros não-nulos, seguida por 0, 
    imprimir seus quadrados. 
*/

#include <stdio.h>

int main()
{
    int numero, quadrado, opcao;
    opcao = 0;
    
 do
 {
    printf("Informe o numero..: ");
    scanf("%d",&numero);
    
    quadrado = numero * numero;
    
    printf("Seu quadrado é %d \n", quadrado);
    printf("Deseja continuar? 1-s || 2-n..: ");
    getchar();
    scanf("%d", &opcao);
    system("cls || clear");

    
 }while (opcao != 2);
}