#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAMANHO 5


int main()
{
    setlocale(LC_ALL , "");

    /*

    12. Fazer um programa para ler 5 valores e,
    em seguida, mostrar todos os valores lidos
    juntamente com o maior, o menor e a média dos valores.

     */

    int valores[TAMANHO] , i , maior , menor;
    double media, soma = 0;

    for (i = 0 ; i < TAMANHO  ; i++ )
    {
        printf("Digite o valor: ");
        scanf("%d" , &valores[i]);
        soma += valores[i];

    }

    maior = valores[0];
    menor = valores[0];

    for (i = 0 ; i < TAMANHO  ; i++ )
    {
        if (valores[i] > maior)
        {
            maior = valores[i];
        }
    }

    for (i = 0 ; i < TAMANHO  ; i++ )
    {
        if (valores[i] < menor)
        {
            menor = valores[i];
        }
    }

    printf("\n\n");
    printf("Valores: ");


    for (i = 0 ; i < TAMANHO  ; i++ )
    {
        printf("  %d  " , valores[i]);
    }

    media = soma / TAMANHO;

    printf("\n\n");
    printf("Maior: %d\n" , maior);
    printf("Menor: %d\n" , menor);
    printf("Media: %.2lf\n" ,media);


    return 0;
}
