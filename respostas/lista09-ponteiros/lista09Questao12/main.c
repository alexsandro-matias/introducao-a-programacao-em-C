#include <stdio.h>
#include <stdlib.h>
#define TAMANHO 3

/*

12. Faça um programa que leia três valores inteiros e chame uma função que receba estes 3
valores de entrada e retorne eles ordenados, ou seja, o menor valor na primeira variável,
o segundo menor valor na variável do meio, e o maior valor na última variável. A função
deve retornar o valor 1 se os três valores forem iguais e 0 se existirem valores diferentes.
Exibir os valores ordenados na tela.


*/

int ordenacao(int *vetor)

{
    int i = 0, j = 0,  aux;


    // Situação que todos os valores são iguais

    if (vetor[i] == vetor[i+1] && vetor[i] == vetor[i+2])
    {
        return 0;

    }


    // Situação que todos os valores são diferentes

    else
    {


        for (i = 0 ; i < TAMANHO  ; i++)
        {
            for ( j = i+1 ; j < TAMANHO ; j++ )
            {
                if (vetor[i] > vetor[j])
                {
                    aux = vetor[j];
                    vetor[j] = vetor[i];
                    vetor[i] = aux;
                }

            }

        }

        return 1;

    }




}




int main()
{

    int numeros[TAMANHO], i, retorno;

    for (i = 0 ; i < TAMANHO ; ++i )
    {
        printf("Digite o %dº número: ", i+1);
        scanf("%d", &numeros[i]);
    }

    int *numerosPonteiro = numeros;

    retorno = ordenacao(numeros);

    if (retorno == 0)
    {
        printf("Todos os valores são iguais a %d\n", numeros[2]);
    }

    if (retorno == 1)
    {
        printf("Os três valores não todos iguais.\n");

        printf("Os valores ordenados são: \n");

        for (i = 0 ; i < TAMANHO ; i++)
            printf(" %d ", numeros[i]);


    }

    return 0;
}
