#include <stdio.h>
#include <stdlib.h>
#define TAMANHO 2

/**

6. Leia duas matrizes 4 x 4 e escreva uma terceira com os maiores valores de cada posição
das matrizes lidas

*/

int main()
{
    int primeira[TAMANHO][TAMANHO] , segunda[TAMANHO][TAMANHO] , terceira[TAMANHO][TAMANHO], i , j;


    // primeira matriz
    printf("----------- Primeira Matriz -----------\n");
    for (i = 0 ; i < TAMANHO ; i++ )
    {
        for (j = 0 ; j < TAMANHO; j++)
        {
            printf("Leia o numero [%d][%d]: " , i , j);
            scanf("%d" , &primeira[i][j]);
        }

    }

    printf("\n");

    // Impressão da primeira matriz
    printf("----------- Primeira Matriz -----------\n");
    for (i = 0 ; i < TAMANHO ; i++ )
    {
        for (j = 0 ; j < TAMANHO; j++)
        {
            printf(" %d " , primeira[i][j]);
        }
        printf("\n");

    }



    printf("----------- Segunda Matriz -----------\n");
      // segunda matriz
    for (i = 0 ; i < TAMANHO ; i++ )
    {
        for (j = 0 ; j < TAMANHO; j++)
        {
            printf("Leia o numero [%d][%d]: " , i , j);
            scanf("%d" , &segunda[i][j]);
        }

    }

    // Impressão da segunda matriz
    printf("----------- Segunda Matriz -----------\n");
    for (i = 0 ; i < TAMANHO ; i++ )
    {
        for (j = 0 ; j < TAMANHO; j++)
        {
            printf(" %d " , segunda[i][j]);
        }
        printf("\n");

    }

      // terceira matriz
    printf("----------- Terceira Matriz -----------\n");

    for (i = 0 ; i < TAMANHO ; i++ )
    {
        for (j = 0 ; j < TAMANHO; j++)
        {

            if (primeira[i][j] > segunda[i][j])
            {
                terceira[i][j] = primeira[i][j];
            }
            else
            {
                terceira[i][j] = segunda[i][j];
            }

        }

    }

    // Impressão da segunda matriz
    printf("----------- Maior valores das duas matrizes -----------\n");
    for (i = 0 ; i < TAMANHO ; i++ )
    {
        for (j = 0 ; j < TAMANHO; j++)
        {
            printf(" %d " , terceira[i][j]);
        }
        printf("\n");

    }



    return 0;
}
