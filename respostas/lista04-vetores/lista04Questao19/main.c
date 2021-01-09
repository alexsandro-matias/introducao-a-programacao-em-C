#include <stdio.h>
#include <stdlib.h>
#define TAMANHO 5

/**

19. Faça um vetor de tamanho 50 preenchido com o seguinte valor: (i+5 * i)%(i+1), sendo
i a posicão do elemento no vetor. Em seguida imprima o vetor na tela.

**/

int main()
{
    int i , numeros[TAMANHO];

    printf("Seguindo a sequencia: (i + 5 * i) %% (i + 1 ) \n");

    printf("i\tValor da sequencia\n" , i);

    for (i = 0; i < TAMANHO ; i++)
    {
        numeros[i] = ( (i+5 * i) % (i+1) );

    }

    for (i = 0; i < TAMANHO ; i++)
    {
         printf("%d \t\t%d \n" , i , numeros[i]);

    }


    return 0;
}
