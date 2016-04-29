/*
18. Faça um programa em C para ler 2 lados de um retângulo e calcular a área. A = b x h
*/

#include <stdio.h>

int main()
{
        float b,h, area;

    printf("\nInforme a altura \n");
    scanf("%f", &h);

    printf("\nInforme a base \n");
    scanf("%f", &b);

 area = b * h;

    printf("\nValor da area é %f \n", area );

return 0;

}