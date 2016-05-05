/*
4. Faça um programa em C para gerar a sequencia de Fibonacci : 1, 1, 2, 3, 5, 8, 13, 21, 34,
55, 89, 144, 233, 377, 610, 987, 1597, 258….
*/
#include <stdio.h>

int main()
{
		int n1,n2,n3,i;
		n1=0;
		n2=1;
		n3=1;
		
		
		for(i=1;i<=20;i++)		
			{
				printf("%d ",n1);
				n3 = n1 + n2;
				
				n1 = n2;
				n2 = n3;
			}
		return 0;	
}