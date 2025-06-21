#include <stdio.h>
#include <stdlib.h>
#define TAMANHO 6

/**

9. Crie um programa que lê 6 valores inteiros pares e,
em seguida, mostre na tela os valores lidos na ordem inversa.
 *
 */


int main()
{
    int i, valores[TAMANHO], auxiliar = 0;


    for (i = 0 ; i < TAMANHO;i++ )
    {
        printf("Digite o %do valor par: " , i+1);
        scanf("%d" , &auxiliar);

        while (auxiliar % 2 != 0)
        {
          printf("O valor digitado nao eh par. Digite outro valor: ");
          scanf("%d" , &auxiliar);
        }

        valores[i] = auxiliar;

    }

    printf("Os valores pares digitado em ordem inversa: ");

    for (i = TAMANHO-1 ; i >= 0; i--)
    {
        printf(" - %d - ", valores[i]);
    }

    return 0;
}
