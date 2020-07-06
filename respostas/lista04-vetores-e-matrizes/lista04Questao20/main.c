#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAMANHO 10


/*

20. Escreva um programa que leia números inteiros no intervalo [0,50] e os armazene em um
vetor com 10 posições. Preencha um segundo vetor apenas com os números ímpares
do primeiro vetor. Imprima os dois vetores, 2 elementos por linha.


*/

int main()
{


    int primeiro[TAMANHO] , segundo[TAMANHO] , i = 0 , j = 0;

    setlocale(LC_ALL , "");

    for (i = 0 ; i < TAMANHO ; i++)
    {
        primeiro[i] = 0;
        segundo[i] = 0;
    }



    for ( i = 0 ; i < TAMANHO ; i++)
    {
        printf("Digite um número: ");
        scanf("%d" , &primeiro[i]);
    }



    for( i = 0 ; i < TAMANHO ; i++ )
    {
        if(primeiro[i] % 2 != 0)
        {
            segundo[j] = primeiro[i];
            j++;

        }


    }

    for (j = 0 ; j < TAMANHO ; j++)
    {
        if(segundo[j] != 0)
        printf("%d\t" , segundo[j]);
    }


}
