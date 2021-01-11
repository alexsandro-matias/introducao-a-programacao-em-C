#include <stdio.h>
#include <stdlib.h>
#define TAMANHO 10


/***

7. Gerar e imprimir uma matriz de tamanho 10 x 10, onde seus elementos s˜ao da forma:
A[i][j] = 2*i + 7*j 2 se i < j;
A[i][j] = 3*i^2 1 se i = j ;
A[i][j] = 4*i^3 5*j^2 + 1 se i > j.

**/

int main()
{
    int A[TAMANHO][TAMANHO] , i , j;

    for (i = 0 ; i < TAMANHO; i++ )
    {
        for (j = 0 ; j < TAMANHO ; j++ )
        {
            if(i < j)
            {
                A[i][j] = 2*i + 7*j;
            }

            if(i == j)
            {
                A[i][j] = 3 *  i * i - 1;
            }

            else
            {
                A[i][j] = (4 *  i * i * i) - (5 * j * j + 1) ;
            }

        }

    }

    for (i = 0 ; i < TAMANHO; i++ )
    {
        for (j = 0 ; j < TAMANHO ; j++ )
        {
            printf(" %d \t" , A[i][j]);

        }

        printf("\n");
    }


    return 0;
}
