#include <stdio.h>
#include <stdlib.h>

/*
17. Leia um vetor de 10 posições e atribua valor 0 para todos os elementos que possuírem
valores negativos.

*/

int TAMANHO = 6;

int main()
{
    int i , v[TAMANHO];

    for(i = 0 ; i < TAMANHO ; i++){
	printf("Digite um valor:");
	scanf("%d" , &v[i]);
								}


    printf("antes \t");
    for(i = 0 ; i < TAMANHO ; i++)
    printf("%d\t" , v[i]);



    for (i = 0 ; i < TAMANHO ; i++){
        if(v[i]<0)
        v[i] = 0;
    }

    printf("\n\ndepois \t");
    for(i = 0 ; i < TAMANHO ; i++)
    printf("%d\t" , v[i]);



    return 0;
}
