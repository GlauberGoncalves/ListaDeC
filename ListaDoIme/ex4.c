/*
    4.  Dados um inteiro x e um inteiro não-negativo n, calcular xn. 
*/

#include <stdio.h>


int potencia(int x, int n)
{
    int i, pot;

    if (n > 1)
    {
     pot = x;
     for(i=2;i<=n;i++)
      pot = pot * x;
    }
    else
     if (n < 0)
    {
        n = n * (-1);
        pot = x;
        
        for(i=2;i<=n;i++)
         pot = pot * x;
         pot = 1/pot;
    
    }
    if (n == 1)
     pot = x;
  return pot;  
}


int main()
{
    int n, x, resultado;
    
    printf("\nInforme o valor de X ");
    scanf("%d", &x);
    system("clear");
    
    printf("\nInforme o valor de N ");
    scanf("%d", &n);
    system("clear");    
    
    resultado = potencia(x,n);
    printf("\n%d^%d = %d \n",x, n, resultado);    
 return 0;   
}