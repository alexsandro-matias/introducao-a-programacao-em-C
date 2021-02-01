#include <stdio.h>
#include <stdlib.h>

//5. Faça um programa que leia dois valores inteiros e chame uma funçao que receba estes
//2 valores de entrada e retorne o maior valor na primeira variável e o menor valor na
//segunda variável. Escreva o conteúdo das 2 variáveis na tela.

short trocaMaior(int *a, int *b)
{

    if(*a == *b)
    {
        printf("Os valores digitados sao iguais.");
        return 2;
    }

    if (*b > *a)
    {
        int auxiliar = *b;
        *b = *a;
        *a = auxiliar;
        return 3;
    }

}

int main()
{
    int primeiro, segundo;

    printf("Digite o primeiro: ");
    scanf("%d", &primeiro);

    printf("Digite o segundo: ");
    scanf("%d", &segundo);



    trocaMaior(&primeiro, &segundo);

    printf("Valor maior: %d\n", primeiro);
    printf("Valor menor: %d\n", segundo);

    return 0;
}
