#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAMANHO 6

/**
40. Faça uma funç˜ão que receba um vetor de inteiros e
retorne quantos valores pares ele possui.

 **/


int paresDoVetor(int *vpares)
{
    int totalpares = 0;
    int contador;

    for (contador = 0; contador < TAMANHO ; contador++)
    {
        if (vpares[contador] % 2 == 0)
        {
            totalpares++;
        }
    }

    return totalpares;
}



int main()
{

//   vetor de teste
   int vetor[TAMANHO] = {1 , 2 , 7 , 9, 8, 10};
   int i;

// Para carga do vetor:

//    int vetor[TAMANHO];
//    int i;
//
//    for (i = 0 ; i < TAMANHO ;i++ )
//    {
//        printf("Digite o %do numero: " , i+1);
//        scanf("%d" , &vetor[i]);
//    }


    printf("O vetor completo: ");
    // Exibição do vetor
    for (i = 0; i < TAMANHO; i++)
    {
        printf(" %d" , vetor[i]);

    }
        // Quebra de Linha
        printf("\n");

    int pares = paresDoVetor(vetor);

    printf("A quantidade elementos pares no vetor: %d", pares);


    return 0;
}


