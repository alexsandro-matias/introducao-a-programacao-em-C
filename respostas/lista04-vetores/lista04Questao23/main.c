#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAMANHO 5


/**

23.	Ler dois conjuntos de números reais, armazenando-os em vetores e calcular o produto escalar entre eles.
Os conjuntos têm 5 elementos cada. Imprimir os dois conjuntos e o produto escalar,
sendo que o produto escalar e dado por: x1 * y1 + x2 * y2 + ... + xn * yn.

**/
int main()
{

    int primeiro[TAMANHO], segundo[TAMANHO];

    printf("-------------- Primeiro Conjunto de Dados --------------\n");
    for (int i = 0; i < TAMANHO ;i++ )
    {
        printf("Digite o %do: ", i+1 );
        scanf("%d" , &primeiro[i]);
    }

    printf("\n\n");

    printf("-------------- Segundo Conjunto de Dados --------------\n");
    for (int i = 0; i < TAMANHO ;i++ )
    {
        printf("Digite o %do: ", i+1 );
        scanf("%d" , &segundo[i]);
    }

    printf("\n\n");

    printf("-------------- Produto entre conjuntos --------------\n");
    for (int i = 0; i < TAMANHO ;i++ )
    {
        printf("%d X %d = %d \n", primeiro[i], segundo[i], primeiro[i] * segundo[i] );

    }

    return 0;
}
