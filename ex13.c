/*
13. Leia o peso, salário e sexo(m/f) de 10 pessoas e: a) Mostrar a média do 
peso das mulheres que tem mais de 50 kg b) Mostrar a média do salário dos
homens que recebem entre R$ 1000 e R$ 3000.
*/

#include <stdio.h>

int main()
{
    int cont1, cont2, i;
    float peso, salario, 
          MediaM, MediaH;
          
    char sexo[2];
    
    cont1 = 0.00; peso = 0.00;
    cont2 = 0.00;
    // Dados digitados pelo usuario
   for(i=1;i<=10;i++)
   {
        printf("\nDigite seu peso\n");
            scanf("%f",&peso);
        printf("\nDigite seu salario\n");
            scanf("%f", &salario);getchar();
        printf("\nDigite seu sexo (m/f)");
           scanf("%c", sexo);
        
        // estrutura condicional e formulas logicas  
          if ((sexo == "m") && (peso > 50))
          {
              MediaM = MediaM + peso;
              cont1 = cont1 + 1;
          }
        
          if ((sexo == "f") && ((salario >= 1000) && (salario <= 3000)))
          {
              MediaH = salario;
              cont2 = cont2 + 1;
          }system("cls || clear");
   } 
    
    //  Area de processamento
      MediaM = MediaM / cont1;
      MediaH = MediaH / cont2;
    
    //  Mostra resultado na telaa média do 

        
        printf("\nA media do peso das mulheres que tem mais");
        printf("de 50 kg é  %f\n",MediaM);
        printf("\nA media dos salarios dos homens que recebem");
        printf("entre R$ 1000 é R$ 3000 %f\n",MediaH);
        getchar();
        
      
        
    return 0;    
    
    
}