/*

 53. Faça um programa para ler as dimensões de um terreno (comprimento c e largura l),
bem como o preço do metro de tela p. Imprima o custo para cercar este mesmo terreno
com tela.

 */

#include <stdio.h>
#include <stdlib.h>

int main()
{

   float comprimento , largura , tela;

    printf("Digite um valor do comprimento do terreno:");
    scanf("%f" , &comprimento);

    printf("Digite um valor da largura do terreno:");
    scanf("%f" , &largura);

    printf("Digite o valor área da tela:");
    scanf("%f" , &tela);



    tela = comprimento * largura * tela;

    printf("O valor da cerca será %.2f" , tela);


    return (EXIT_SUCCESS);
}

