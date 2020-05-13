#include <stdio.h>
#include <stdlib.h>
#define TAMANHO 10
#include <locale.h>
/*

11. Faça um programa que preencha um vetor com 10 números reais, calcule e mostre a
quantidade de números negativos e a soma dos números positivos desse vetor.

*/

int main()
{
    setlocale(LC_ALL , "");
    int i , vetor[TAMANHO] , quantidadeNegativos = 0 , somaPositivos = 0;

    for (i = 0; i < TAMANHO; i++ )
    {

        printf("Digite o número inteiro %d°: " , i+1);
        scanf("%d" , &vetor[i]);


        if(vetor[i] < 0)
        quantidadeNegativos++;

        if(vetor[i] > 0)
        somaPositivos = somaPositivos + vetor[i];


    }

    printf("A soma dos números positivos é: %d\n" , somaPositivos);
    printf("A quantidade de números negativos é: %d\n" , quantidadeNegativos);



}
