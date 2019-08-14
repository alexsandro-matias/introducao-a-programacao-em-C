/*
 
 5. Leia um vetor de 10 posições. Contar e escrever quantos valores pares ele possui.
 
 */



#include <stdio.h>
#include <stdlib.h>


int main() {
    
    int i , valor[9] , contador;
    
    for (i = 0 ; i <= 9 ; i++){
        printf("Digite um valor");
         scanf("%d" , &valor[i]);
        }
    
    for (i = 0 ; i <= 9 ; i++){
        if (valor[i] % 2 == 0 )
            contador++;
        }
    printf("A quantidade de números pares digitados foi %d." , contador);
       

    return (EXIT_SUCCESS);
}

