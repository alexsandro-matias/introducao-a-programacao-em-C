#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define TAMANHO 3

/**

25. Faça um programa para determinar a próxima jogadaX em um Jogo da Velha. Assumir que
o tabuleiro é representado por uma matriz de 3 x 3, onde cada posição representa uma
das casas do tabuleiro. A matriz pode conter os seguintes valores -1, 0, 1 representando
respectivamente uma casa contendo uma peça minha (-1), uma casa vazia do tabuleiro
(0), e uma casa contendo uma peça do meu oponente (1).
Exemplo:

**/

void carregamentoDosDados(int *game[TAMANHO][TAMANHO])
{

        for (int i = 0 ; i < TAMANHO ; i++)
        {
            for (int j = 0; j < TAMANHO ; j++ )
            {
                game[i][j] = 0;
            }

        }


}

void apresentacao(int *game[TAMANHO][TAMANHO])
{
    for (int i = 0 ; i < TAMANHO ; i++)
    {
        for (int j = 0; j < TAMANHO ; j++ )
        {
            printf("  |%d|  " , game[i][j]);
        }

        printf("\n");

    }

}

void limpaTela()
{
    system("cls");
}


void aguardaMovimento()
{
    getchar();
}

void jogadaX(int *game[TAMANHO][TAMANHO])
{
    int linha, coluna;
    printf("Digite a linha e coluna da jogador -1: \n");
    printf("Linha e Coluna: ");
    scanf("%d %d", &linha, &coluna);

    game[linha-1][coluna-1] = -1;

    limpaTela();
    apresentacao(game);
    aguardaMovimento();
}


void jogadaY(int *game[TAMANHO][TAMANHO])
{
    int linha, coluna;
    printf("Digite a linha e coluna da jogador 1: \n");
    printf("Linha e Coluna: ");
    scanf("%d %d", &linha, &coluna);

    game[linha-1][coluna-1] = 1;

    limpaTela();
    apresentacao(game);
    aguardaMovimento();
}


int main()
{
    int jogo[TAMANHO][TAMANHO], quantidadeX, quantidadeY = 0;

    carregamentoDosDados(jogo);

    apresentacao(jogo);

     while(quantidadeX <= 3 || quantidadeY <= 3 )
    {
        jogadaX(jogo);
        quantidadeX++;

        jogadaY(jogo);
        quantidadeY++;
    }



    return 0;
}
