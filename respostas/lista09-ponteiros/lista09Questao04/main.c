#include <stdio.h>
#include <stdlib.h>


//4. Fa�a um programa que leia 2 valores inteiros e chame uma fun��o que receba estas
//2 vari�veis e troque o seu conte�do, ou seja, esta fun��o � chamada passando duas
//vari�veis A e B por exemplo e, ap�s a execu��o da fun��o, A conter� o valor de B e B
//ter�o o valor de A.


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
