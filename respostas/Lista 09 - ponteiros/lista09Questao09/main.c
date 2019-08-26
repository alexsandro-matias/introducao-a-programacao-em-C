#include <stdio.h>
#include <stdlib.h>


/*

9. Crie um programa que contenha uma matriz de float contendo 3 linhas e 3 colunas.

Imprima o endereço de cada posição dessa matriz.  ̃


*/

int main()
{
    float matriz[3][3];
    int i , j ;

    for (i = 0 ; i < 3 ; i++)
    {
        for (j = 0 ; j < 3 ; j++)
        {

         printf(" %d " , &matriz[i][j]);

        }
    printf("\n");

    }



    return 0;
}
