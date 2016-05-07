/*
8.  Dado um inteiro não-negativo n, determinar n! 
*/
#include <stdio.h>

int fatorial( int x )
{
    int i, resultado;
    
    resultado = x;
    x--;
    for(i=x;i<=1;i--){
    resultado = resultado * i;
    }
 return resultado;    

}

int main( )
{
  int n;
  
  printf("\nDigite N\n");  
  scanf("%d",&n);
  
  printf("\nX^N = %d \n\n", fatorial(n)); 
}
