
/*
7.  Dados n e uma seqüência de n números inteiros, determinar a 

soma dos números pares. 
*/
#include <stdio.h>

int main()
{
   int sequencia, i, soma, num;

  printf("\nInforme a quantidade de numeros");
  printf(" da sequencia: ");
  scanf("%d", &sequencia);

  for( i=1; i <= sequencia; i++){
  printf("\nInforme o %d numero\n", i);
  scanf("%d", &num);
  if ( num % 2 == 0){
    soma+= num;
   }
    printf("\nA soma dos pares é %d\n\n", soma);

    
    }
 return 0;    
}