#include <stdio.h>
#include <stdlib.h>
#define TAMANHO 5

/*


10. Crie um programa que contenha um array de inteiros contendo TAMANHO elementos.
Utilizando apenas aritmética de ponteiros,
leia esse array do teclado e imprima o dobro de cada valor lido.


*/

int main()
{
    int vetor[TAMANHO], i;

    for (i = 0 ; i < TAMANHO; i++ )
    {
        printf("Digite o valor do %dº número: ", i+1);
        scanf("%d", &vetor[i]);
    }
    printf("\n\n");

    printf("O valor original é: ");


    for (i = 0 ; i < TAMANHO; i++ )
    {
        printf(" %d  ", vetor[i]);
    }



    int *vetorPonteiro = vetor;




    for (i = 0 ; i < TAMANHO; i++, *vetorPonteiro++)
    {
        *vetorPonteiro *= 2;

    }

    printf("\n\n");


    printf("O valor do vetor depois do dobro é: ");

    for (i = 0 ; i < TAMANHO; i++ )
    {
        printf(" %d ", vetor[i]);
    }


    printf("\n\n");





    return 0;
}
