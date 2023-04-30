#include <stdio.h>
#include <stdlib.h>
#define TAMANHO 3
// 12. Leia uma matriz de 3 x 3 elementos. Calcule e imprima a sua transposta.

int main()
{
    // Matriz apenas para teste.
    int matriz[TAMANHO][TAMANHO] = {1,2,3,4,5,6,7,8,9};
    int matrizTransporta[TAMANHO][TAMANHO];
    int coluna = 0, linha = 0;


    printf("Matriz Inicial:\n");
    for (linha = 0; linha < TAMANHO; linha++)
    {
        for (coluna = 0; coluna < TAMANHO ; coluna++)
        {
            printf(" %d ", matriz[linha][coluna]);

        }
        printf("\n");
    }

    // Cálculo de transposição da Matriz:
    // Valor de linha se torna coluna e vice-versa.
    for (linha = 0; linha < TAMANHO ; linha++ )
    {
        for (coluna = 0; coluna < TAMANHO; coluna++)
        {
            matrizTransporta[linha][coluna] = matriz[coluna][linha];
        }
    }


    printf("\n");
//    Impressão da da matriz Transposta
    printf("Matriz Transposta:\n");
    for (linha = 0; linha < TAMANHO; linha++)
    {
        for (coluna = 0; coluna < TAMANHO ; coluna++)
        {
            printf(" %d ", matrizTransporta[linha][coluna]);

        }
        printf("\n");
    }

    return 0;
}
