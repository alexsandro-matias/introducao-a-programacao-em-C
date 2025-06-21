/*
 21. Faça um programa que receba do usuário dois vetores, A e B, com 10 números inteiros
cada. Crie um novo vetor denominado C calculando C = A - B. Mostre na tela os dados
do vetor C.
 
 */

#include <stdio.h>
#include <stdlib.h>

int main() {

    int a[9] , b[9] , c[9] , i;
    
    for (i = 0 ; i <= 9 ; i++){
        printf("Digite o %dº do primeiro Vetor:" , i+1);
        scanf("%d" , &a[i]);
    
    }
    
    
     for (i = 0 ; i <= 9 ; i++){
        printf("Digite o %dº do segundo Vetor:" , i+1);
        scanf("%d" , &b[i]);
     
      }
    
    printf("\n\n");
    
     for (i = 0 ; i <= 9 ; i++){
         c[i] = a[i] - b[i];
    
    }
    
    
     for (i = 0 ; i <= 9 ; i++){
         printf("%d\t" , c[i]);
    
    }
    
    
    return (EXIT_SUCCESS);
}

