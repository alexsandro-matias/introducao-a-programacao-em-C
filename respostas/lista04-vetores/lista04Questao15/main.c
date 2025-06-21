#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAMANHO 20
#define MAGICO 987645




/*

15. Leia um primeiro com 20 números inteiros.
Escreva os elementos do primeiro eliminando elementos repetidos.

*/

int main()
{

    setlocale(LC_ALL , "");

    int i , j , primeiro[TAMANHO] , tamanhoFinal , k;

    tamanhoFinal = TAMANHO;


    for (i = 0 ; i < TAMANHO; i++ )
    {
        printf(" Digite o %d° número: " , i+1);
        scanf("%d" , &primeiro[i]);
    }




    int segundo[TAMANHO];

    for (i = 0; i < tamanhoFinal; i++ )
    {
        segundo[i] = primeiro[i];
    }

    /**
    Verificando quanto números são iguais
    Fazendo a varredura.
    Inicialmente a quantidade total do vetor final será igual ao inicial,
    uma vez que todos os números podem ser diferentes.
    Mas se houver algum valor igual,
    preciso decrementar a quantidade de posições do vetor.
    com o comando:

     tamanhoFinal--;


    **/


    for (i = 0; i < TAMANHO - 1 ; i++)
    {
        for (j = i + 1 ; j < TAMANHO ;j++ )
        {
            if (primeiro[i] == segundo[j])
            {
                 tamanhoFinal--;
                 segundo[j] = MAGICO;


            }

        }

    }



    /*

    Determinando o tamanho do vetor,
    já com a quantidade de casas repetidas excluidas

    */

    printf(" \n\n");

    printf("Primeiro vetor:  ");

    for (i = 0 ; i < TAMANHO; i++ )
    {
        printf(" %d " , primeiro[i]);
    }


    printf(" \n\n");

    printf("Vetor sem os números repetidos:  ");


    for (i = 0 ; i < TAMANHO; i++ )
    {
        if (segundo[i] != MAGICO)
        {
            printf(" %d " , segundo[i]);
        }

    }

    printf(" \n\n");



    return 0;
}
