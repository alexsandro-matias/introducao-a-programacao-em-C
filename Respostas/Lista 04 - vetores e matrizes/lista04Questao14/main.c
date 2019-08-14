#include <stdio.h>
#include <stdlib.h>
#define TAMANHO 10


/*

14. Faça um programa que leia um vetor de 10 posições e verifique se existem valores iguais e os
escreva da na tela.

*/

int main()
{
    int i , numero[TAMANHO] , j = 0 , k = 0 , igual[TAMANHO];


    for (i = 0 ; i < TAMANHO ; i++){
    printf("Digite o numero %d:" , i+1);
    scanf("%d" , &numero[i]);
    }


    for (k = 0 ; k < TAMANHO ; k++){
    igual[k] = 0;
    }


    k = 0 ;

    for (i = 0 ; i < TAMANHO - 1 ; i++){
        for (j = i + 1 ; j < TAMANHO; j++){

            if(numero[j] == numero[i]){
            igual[k] = numero[j];
            numero[j] = -1;
            k++;
            }
        }

    }

    printf("\n\n=======Os numeros repetidos========\n\n");
    for (k = 0 ; k<TAMANHO ; k++){
        if( (igual[k] != 0) && (igual[k] != -1))
        printf("%d\n" , igual[k]);

    }







    return 0;
}
