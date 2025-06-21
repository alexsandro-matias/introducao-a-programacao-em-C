#include <stdio.h>
#include <stdlib.h>
#define tamanho 3
#include <locale.h>
//11. Leia uma matriz de 3 x 3 elementos. Calcule a soma dos elementos que est˜ao na diagonal
//secundária.

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int matriz[tamanho][tamanho] = {1,2,3,4,5,6,7,8,9};
    int somatorioDiagonalSecundaria = 0;
    int constante = tamanho - 1;

    for (int linha = 0; linha < tamanho; linha++)
    {
        for (int coluna = 0; coluna < tamanho; coluna++)
        {
            if ( (linha + coluna) == constante)
            {
                somatorioDiagonalSecundaria += matriz[linha][coluna];
            }

        }
    }



    printf("--- Matriz ---\n");

    for (int linha = 0; linha < tamanho; linha++)
    {
        for (int coluna = 0; coluna < tamanho; coluna++)
        {
            printf(" %3d ", matriz[linha][coluna]);

        }

        printf("\n");

    }

    printf("\n");
    printf("Somatório dos elementos da diagonal secundária: %d\n\n", somatorioDiagonalSecundaria);


    return 0;
}
