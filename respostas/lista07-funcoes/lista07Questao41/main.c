#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAMANHO 6

/**
41. Façaa uma função que receba um vetor de inteiros e retorne o maior valor.

 **/


int maiorNoVetor(int *vpares)
{
    int maior = vpares[0];
    int contador;


    for (contador = 0; contador < TAMANHO ; contador++)
    {
        if (vpares[contador] > maior)
        {
            maior = vpares[contador];
        }
    }

    return maior;
}



int main()
{

//   vetor de teste
   int vetor[TAMANHO] = {1 , 2 , 14 , 9, 8, 12};
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

    int maiordoVetor = maiorNoVetor(vetor);

    printf("O maior numero do e vetor: %d", maiordoVetor);


    return 0;
}


