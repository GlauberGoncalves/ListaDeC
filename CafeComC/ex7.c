/*
7. Em qualquer triângulo retângulo, o quadrado do comprimento da hipotenusa é igual à soma
dos quadrados dos comprimentos dos catetos. Faça um programa para ler 2 catetos de um
triângulo retângulo e calcular a hipotenusa.
*/
#include <stdio.h>
#include <math.h>

int main()
{
    //declaração das variaveis 
    
    float CatetoUm, CatetoDois, hipotenusa;
    
    //requisitando dados do usuario
   
    printf("Informe o primeiro cateto: ");
        scanf("%f",&CatetoUm);
    printf("Informe o segundo cateto: ");
        scanf("%f",&CatetoDois);    
    
    // Area de processamento dos dados
   
    hipotenusa = (CatetoUm*CatetoUm) + (CatetoDois*CatetoDois);
    
    // Resposta ao usuario
    
    printf("O valor da Hipotenusa é %f\n\n",hipotenusa);
    
    return 0;
    
    
}