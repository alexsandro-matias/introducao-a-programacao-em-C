#include <stdio.h>
#include <stdlib.h>

//39. Escreva um programa que leia um número inteiro positivo n e em seguida imprima n
//linhas do chamado Triangulo de Pascal:
//1
//1 1
//1 2 1
//1 3 3 1
//1 4 6 4 1
//1 5 10 10 5 1
//...

int main()
{
    int quantidadeLinhas;
    printf("Digite o numero linhas: ");
    scanf("%d", &quantidadeLinhas);

    int pascal[quantidadeLinhas][quantidadeLinhas];

    int linha, coluna;


//    criando a matriz identidade, ou seja,
//	  todos itens da diagonal principal iguais a 1

    for (linha = 0; linha < quantidadeLinhas; linha++)
    {
        for (coluna = 0; coluna < quantidadeLinhas ; coluna++)
        {
            if (linha == coluna || coluna == 0)
            {
                pascal[linha][coluna] = 1;
            }
            else
            {
                pascal[linha][coluna] = 0;

            }

        }
    }





    for (linha = 0; linha < quantidadeLinhas; linha++)
    {
        for (coluna = 0; coluna < quantidadeLinhas ; coluna++)
        {

            if ((pascal[linha][coluna] != 1) && linha > 0)
            {
                pascal[linha][coluna] = pascal[linha-1][coluna] + pascal[linha-1][coluna-1];
            }

        }


    }


    for (linha = 0; linha < quantidadeLinhas; linha++)
    {
        for (coluna = 0; coluna < quantidadeLinhas ; coluna++)
        {
            if (pascal[linha][coluna] != 0)
            {
                printf("%d", pascal[linha][coluna]);

            }

        }

       printf("\n");
    }










    return 0;
}
