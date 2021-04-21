#include <stdio.h>
#include <stdlib.h>
#define TAM 5

/***

1. Crie um programa que:
(a) Aloque dinamicamente um array de 5 números inteiros,
(b) Peça para o usuário digitar os 5 números no espaço alocado,
(c) Mostre na tela os 5 números,
(d) Libere a memória alocada.

**/

int main()
{
    int *vetor = (int*) malloc(TAM*sizeof(int)); //Observe o cast
    if (vetor != NULL)
    {
        for (int i = 0; i < TAM; i++)
        {
            printf("Digite o %do elemento: ", i+1);
            scanf("%d", &vetor[i]);
        }

        printf("\n\n\n");

        for (int i = 0; i < TAM; i++)
        {
            printf(" %d ", vetor[i]);
        }

        printf("\n\n\n");

        free(vetor);
    }
    else
    {
        printf("Erro na alocacao de memória\n");
    }
    return 0;
}

