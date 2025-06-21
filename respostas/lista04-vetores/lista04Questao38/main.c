#include <stdio.h>
#include <stdlib.h>



/*

 ́
38. Peça ao usuario para digitar dez valores numeros e ordene por ordem crescente esses
valores, guardando-os num vetor. Ordene o valor assim que ele for digitado. Mostre ao
final na tela os valores em ordem.

*/

int main()
{
    int tamanho = 1 , j , i , aux , antes[10] , depois[10];


    while( tamanho < 9 ){


        // Leitura dos valores antes do ordenamento//
        for (i = 0 ; tamanho > i ; i++){
        printf("digite um valor:");
        scanf("%d" , &antes[i]);
                                        }


        // transferência do vetor antes para o vetor depois


        for (i = 0 ; i < tamanho ; i++)
        depois[i] = antes[i];


        // Ordenar o vetor depois

        for (i = 0 ; i < tamanho-1 ; i++){
            for (j = i+1 ; j < tamanho ; j++){
            aux = depois[j];
            depois[j] = depois[i];
            depois[i] = aux;
                                             }
                                         }



        for (i = 0 ; i < tamanho ; i++)
        printf("| %d | " , antes[i]);

         printf(" ==> " , depois[i]);

        for(i = 0 ; i < tamanho ; i++)
        printf("| %d | " , depois[i]);


    tamanho++;

    }



    return 0;
}
