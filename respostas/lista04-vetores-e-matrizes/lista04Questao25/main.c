#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define TAMANHO 3

/**

25. Faça um programa para determinar a próxima jogada em um Jogo da Velha. Assumir que
o tabuleiro é representado por uma matriz de 3 x 3, onde cada posição representa uma
das casas do tabuleiro. A matriz pode conter os seguintes valores -1, 0, 1 representando
respectivamente uma casa contendo uma peça minha (-1), uma casa vazia do tabuleiro
(0), e uma casa contendo uma peça do meu oponente (1).
Exemplo:

**/

int main()
{
    int i = 0 , j = 0, jogo[TAMANHO][TAMANHO];


    void limpaTela()
    {
        system("cls");
    }

    void aguardaMovimento()
    {
        getchar();
    }

    void jogada()
    {
        limpaTela();
        aguardaMovimento();
    }

    for (i = 0 ; i < TAMANHO ; i++)
    {
        for (j = 0; j < TAMANHO ; j++ )
        {
            jogo[i][j] = 0;
        }
    }

    jogada();

    for (i = 0 ; i < TAMANHO ; i++)
    {
        for (j = 0; j < TAMANHO ; j++ )
        {
            printf("| %d |" , jogo[i][j]);
        }

        printf("\n");
    }



    printf("Hello world!\n");
    return 0;
}
