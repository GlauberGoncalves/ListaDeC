/*
11.  Dado um inteiro positivo n, verificar se n é primo. 
*/

#include <stdio.h>

int main( )
{
    int n, max, i; 
    printf("\nDigite um numero \n");
    scanf("%d", &n);
    
    max = n;
    max--;

   for(i=2;i<=max;i++){
   if ( n % i == 0 )
     printf("%d não é primo\n", n);
       else printf("%d é primo\n", n);
 return 0;
 }
}