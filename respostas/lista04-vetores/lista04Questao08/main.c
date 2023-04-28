#include <stdio.h>
#include <stdlib.h>
# define TAMANHO 6

//Crie um programa que lê 6 valores inteiros e, em seguida, mostre na tela os valores lidos
//na ordem inversa.

int main()
{
    int vetor[TAMANHO];
    for (int i = 0; i < TAMANHO ; i++)
    {
        printf("Digite o %do. numero: ", i+1);
        scanf("%d", &vetor[i]);
    }

    for (int i = TAMANHO - 1 ; i >= 0; i--)
    {
        printf(" %d ", vetor[i]);
    }

    return 0;
}
