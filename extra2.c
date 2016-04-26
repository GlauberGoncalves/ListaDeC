/*
4.  Dados um inteiro x e um inteiro não-negativo n, calcular x n.
*/
#include <stdio.h>

int main()
{
    int x,n;
    float resultado;
    
    printf("\nInforme x\n");
    scanf("%d",&x);
    
    printf("\nInforme n\n");
    scanf("%d",&n);
    
    // Processamento
    
    resultado = (1.00 / (x^n));
   
   // imprime resultado 
    printf("\nResultado %f", resultado);
    
    return 0;
}