/*
 * File:   main.c
 * Author: Aluno
 *
 * Created on 6 de Maio de 2016, 11:30
 */

#include <stdio.h>
#include <stdlib.h>
#define TAMANHO 4


int main() {



    int i , v[TAMANHO] , v1Impar[TAMANHO], v2Par[TAMANHO] , j = 0 , k = 0 , a =0 , b =0;

    for (i = 0 ; i < TAMANHO ; i++){
    printf("Digite um valor:");
    scanf("%d" , &v[i]);
    }


    for (i = 0 ; i < TAMANHO ; i++){




    for (a = 0 ; a < j ; a++ )
    if(v[i] == v[a]){
        b = 1;
        break;
        }

    if(a == 0){
        if(v[i]%2 == 0){
            v2Par[j] = v[i];
            j++;

        }
    }
    else{
    v1Impar[k] = v[i] ;
        k++;
    }

      }

    printf("\n\n ");
    printf("valores Impares ");
    for (i = 0 ; i < k ; i++)
        printf("%d\t" , v1Impar[i]);



    printf("\n\n ");
    printf("valores pares ");
    for (i = 0 ; i < j ; i++)
    printf("%d\t" , v2Par[i]);


    printf("\n\n");



    return (EXIT_SUCCESS);
}

