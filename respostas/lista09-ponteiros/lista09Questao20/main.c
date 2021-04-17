#include <stdio.h>
#include <stdlib.h>
#define TAMANHO 6

/**

20. Implemente uma função que receba como parâmetro um array de números reais de
tamanho N e retorne quantos números negativos há nesse array. Essa função deve
obedecer ao protótipo:
int negativos(float *vet, int N);



**/

int negativos(float *vet, int N)
{
    int quantidadeNegativos = 0;

    for (int i = 0; i < N; i++)
    {
        if(vet[i] < 0)
        {
            quantidadeNegativos++;
        }
    }
    return quantidadeNegativos;
}

int main()
{
    float vetor[TAMANHO] = {2 , -5 , 9 , -2,-1, -9};

    int numerosNegativos = negativos(vetor , TAMANHO);

    printf(" %d " , numerosNegativos);



    return 0;
}
