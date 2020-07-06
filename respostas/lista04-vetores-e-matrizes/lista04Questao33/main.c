#include <stdio.h>
#include <stdlib.h>


int TAMANHO = 6;
/*

33. Faça um programa que leia um vetor de 15 ( TAMANHO = 6 ) posições e o compacte, ou seja, elimine as
posiçoes com valor zero. Para isso, todos os elementos à frente do valor zero, devem ser
movidos uma posição para trás no vetor.

*/


int main()
{

	int i = 0 , v[TAMANHO] , j;

    for( i = 0 ; i < TAMANHO ; i++){
    printf("Digite um valor:");
    scanf("%d" , &v[i]);
        }

    printf("Antes\n\n");
    for( i = 0 ; i < TAMANHO ; i++)
    printf("%d\t" , v[i]);



    for( i = 0 ; i < TAMANHO ; i++){

    if(v[i] == 0){
        j = i;

        for(j ; j < TAMANHO ; j++){
        v[j] = v[j+1];
        }

        TAMANHO--;

    }


        }

    printf("Depois\n\n");
    for( i = 0 ; i < TAMANHO ; i++)
    printf("%d\t" , v[i]);

    return 0;
}
