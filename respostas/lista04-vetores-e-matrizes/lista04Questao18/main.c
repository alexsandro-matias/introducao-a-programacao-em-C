#define TAMANHO 10
#include <stdio.h>
#include <stdlib.h>



/**

18. Faça um programa que leia um vetor de 10 números. Leia um número x. Conte os
múltiplos de um número inteiro x num vetor e mostre-os na tela.


**/


int main()
{
    int numero = 0 , i = 0, vetor[TAMANHO];
    printf("Informe um número X inteiro qualquer: ");
    scanf("%d" ,  &numero);
    printf("\n");

    printf("------- Leitura dos dos dados -------\n");
    printf("\n");

    for (i = 0 ; i < TAMANHO; i++)
    {
        printf("Digite o %do numero. " , i+1);
        scanf("%d" ,  &vetor[i]);

    }

    printf("------- apresentacao dos valores -------\n");
    printf("\n");
    printf("Os valores digitados múltiplos X são: ");

    for (i = 0 ; i < TAMANHO ; i++ )
    {
        if (vetor[i] % numero == 0)
        {
            printf(" [%d] ", vetor[i] );
        }
    }


    return 0;
}
