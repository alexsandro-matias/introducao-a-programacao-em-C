#include <stdio.h>
#include <stdlib.h>
#define TAMANHO 5

/*

21. Escreva um programa que declare um vetor de inteiros e um ponteiro para inteiros. Associe
o ponteiro ao vetor. Agora, some mais um (+1) a cada posic˜ao do vetor usando o
ponteiro (use *).

*/


int main()
{
    int vetor[TAMANHO];

    int *vetorPonteiro = &vetor, i = 0;


    // Carregamento do vetor
    for (int i = 0; i < TAMANHO; i++)
    {
        *(vetor+i) = i;
    }

    for (int i = 0 ; i < TAMANHO ; i++)
    {
        printf(" - %d - ", *(vetor + i));

    }


    return 0;
}
