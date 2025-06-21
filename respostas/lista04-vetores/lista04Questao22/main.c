#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAMANHO 10

int main()
{
    setlocale(LC_ALL , "");



    /**


    22. Faça um programa que leia dois vetores de 10 posições e calcule outro vetor contendo
    nas posições pares os valores do primeiro e nas posições ímpares os valores do segundo.


    **/


    int primeiro[TAMANHO] , segundo[TAMANHO] , terceiro[2*TAMANHO] , i , j , k;

    int aux = TAMANHO;



    printf("Primeiro vetor:\n\n");

    for (i = 0; i < TAMANHO ; i++ )
    {
        printf("Digite %d° valor: " , i+1);
        scanf("%d" , &primeiro[i]);

    }

    printf("\n\n");
    printf("Segundo vetor:\n\n");

    for (j = 0; j < TAMANHO ; j++ )
    {
        printf("Digite %d° valor: " , j+1);
        scanf("%d" , &segundo[j]);

    }

    printf("\n\n");

    for (k = 0 , i = 0 , j = 0 ; k < TAMANHO*2 ;k++ )
    {
        if (k % 2 == 0)
        {
            terceiro[k] = primeiro[i];
            i++;
        }

        else
        {
            terceiro[k] = segundo[j];
            j++;
        }
    }

    printf("\n\n");

    printf("Primeiro Vetor: ");
    for (i = 0 ; i < TAMANHO ;i++ )
    printf(" %d " , primeiro[i]);

    printf("\n\n");

    printf("Segundo Vetor: ");

    printf("\n\n");

    for (j = 0 ; j < TAMANHO ;j++ )
    printf(" %d " , segundo[j]);

    printf("\n\n");

    printf("--------------------");

    printf("\n\n");

    printf("Primeiro vetor nas posições pares e o segundo vetor nas posições ímpares ");

    printf("\n\n");

    printf("Vetor Final: ");
    for (k = 0 ; k < 2*TAMANHO ;k++ )
    printf(" %d " , terceiro[k]);


    printf("\n\n");





    return 0;
}
