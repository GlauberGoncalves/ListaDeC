/*
8.  Dado um inteiro não-negativo n, determinar n! 
*/
#include <stdio.h>

int fatorial( int x )
{
    int y, resultado;
 y = x - 1;
if ( x > 0)
 resultado = x * fatorial( y );
 
return resultado;
}

int main( )
{
  int n;
  
  printf("\nDigite N\n");  
  scanf("%d",&n);
  
  printf("\nX^N = %d \n\n", fatorial(n)); 
}
