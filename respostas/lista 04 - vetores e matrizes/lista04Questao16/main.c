#include <stdio.h>
#include <stdlib.h>
#define TAMANHO 5

/**

16. Faça um programa que leia um vetor de 5 posições para números reais e,
depois, um código inteiro.
Se o código for zero, finalize o programa;
se for 1, mostre o vetor na ordem direta;
se for 2, mostre o vetor na ordem inversa.

Caso, o código for diferente de 1 e 2
escreva uma mensagem informando que o código é inválido.


**/

int main()
{
    int vetor[TAMANHO] , i , opcao;

    for (i = 0 ; i < TAMANHO ; i++)
    {
        printf("Digite um valor: ");
        scanf("%d" , &vetor[i]);
    }

    printf("\n\n");

    printf("Escolha a ordem:\n");
    printf("1 - Para ordem direta digitada:\n");
    printf("2 - Para ordem inversa digitada:\n");
    scanf("%d" , &opcao);

    while ( (opcao != 1) && (opcao != 2) )
    {
        printf("Número digitado inválido. Digite outro valor: ");
        scanf("%d" , &opcao);
    }

    printf("\n\n");


    if (opcao == 1)
    {
        for (i = 0 ; i < TAMANHO; i++)
        printf("- %d - ", vetor[i]);

    }
    else
    {
        for (i = TAMANHO-1; i >= 0 ; i--)
        printf("- %d - ", vetor[i]);

    }

    printf("\n\n");


    return 0;
}
