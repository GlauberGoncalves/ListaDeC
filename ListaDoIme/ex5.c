/*
    5.  Uma loja de discos anota diariamente durante o mês de março
    a quantidade de discos vendidos. Determinar em que dia desse mês 
    ocorreu a maior venda e qual foi a quantidade de discos vendida nesse dia. 
*/

#include <stdio.h>


int main()
{
  int i;
  float maior[2], marco[32];
  maior[0] = -999999;
  
  // Gera numeros de vendas para cada mês
   for(i=1;i<=31;i++)
      {
       if (i <5)
          marco[i] = i * 500;
       else marco[i] = i * 200;
      }
      
      for(i=1;i<=31;i++)
        {
          if (maior[1] < marco[i])
           maior[0] = marco[i];
           maior[1] = i;
        }
        
       printf("O dia com maior venda foi %0.f \n", maior[1]);
       printf("Foram vendidos %.0f discos \n", maior[0]);
 return 0;
}