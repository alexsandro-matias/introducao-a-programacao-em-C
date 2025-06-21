#include <stdio.h>
#include <stdlib.h>


//4. Faça um programa que leia 2 valores inteiros e chame uma função que receba estas
//2 variáveis e troque o seu conteúdo, ou seja, esta função é chamada passando duas
//variáveis A e B por exemplo e, após a execução da função, A conterá o valor de B e B
//terão o valor de A.


void trocaVariaveis(int *a, int *b)
{
    int temporaria = *a;
    *a = *b;
    *b = temporaria;
}



int main()
{
    int primeiro, segundo;


    printf("Digite a primeira variavel: ");
    scanf("%d",&primeiro);

    printf("Digite a segunda variavel: ");
    scanf("%d",&segundo);


    trocaVariaveis(&primeiro, &segundo);

    printf("\n");
    printf("------------- Trocando as variaveis -------------\n\n");
    printf("Primeira variavel agora sera: %d.\n", primeiro);
    printf("segunda variavel agora sera: %d.\n", segundo);

    return 0;
}
