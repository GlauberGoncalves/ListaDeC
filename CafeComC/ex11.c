/*
11. Exibe 10 vezes o termo “Linguagem C” usando os três tipos de estruturas de
repetição existentes em C.
*/
#include <stdio.h>

int main()
{
    int i;
   
    // Utilizando o for
    system("cls || clear");
    for(i=1;i<=10;i++)
       {
        printf("%d Linguagem C - com For\n", i);
       }
        printf("digite qualquer tecla para continuar\n");
        scanf("%d", &i);
        system("cls || clear");
        i = 0;
    // Utilizando o while
    while (i != 10)
        {
            i = i + 1;
            
            printf("%d Linguagem C - com While \n",i);
        }    
    printf("digite qualquer tecla para continuar\n");
    scanf("%d", &i);
    system("cls || clear");
    i = 0;      
            
    do         
       {
           i = i + 1;
           printf("%d Linguagem C - com Do While \n",i); 
           

       }
     while (i < 10);
    return 0;
}