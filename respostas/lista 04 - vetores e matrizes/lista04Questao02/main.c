/*
2. Crie um programa que lê 6 valores inteiros e, em seguida, mostre na tela os valores lidos.
 
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main() {
    int numero[5] , i;
    
    for (i = 0 ; i <= 5 ; i++){
    
        printf("Digite um valor:");
        scanf("%d"  , &numero[i]);
    }
    
    for(i = 0 ; i <= 5 ; i++)
    printf("%d\t" , numero[i]);
    
    return (EXIT_SUCCESS);
}

