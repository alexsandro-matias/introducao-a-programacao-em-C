#include <stdio.h>
#include <stdlib.h>
#define TAMANHO 5

//11. Crie um programa que contenha um array contendo 5 elementos inteiros. Leia esse array
//do teclado e imprima o endereço das posiç˜oes contendo valores pares.

int main()
{
    int i, vetor[TAMANHO];

    // carregamento das variaveis para testes
    for (i = 0 ; i < TAMANHO; i++)
    {
        vetor[i] = i;
    }


    printf("Valores pares de endereco de memoria ");
    for (i = 0 ; i < TAMANHO; i++)
    {
        if(vetor[i]/2 == 0)
        {
            printf(" - %d - ", &vetor[i]);

        }
    }
    return 0;
}
