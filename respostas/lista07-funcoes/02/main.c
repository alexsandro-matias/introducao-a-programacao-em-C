/* 
 2 - Faça uma função para verificar se um número é um quadrado perfeito.
 * Um quadrado perfeito é um número inteiro não negativo que pode ser expresso como o quadrado de outro número inteiro.
 * Ex: 1, 4, 9...
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void quadradoPerfeito(float numero) {
    int i = 1, produto = 1;
    for (i = 1; produto < numero; i++) {
        produto = i * i;
    }

    if (produto == numero) {
        printf("O número é quadrado perfeito.");

    } else {
        printf("O número não é quadrado perfeito.");
        
        }



}

/*
 * 
 */
int main() {
    float numero;

    printf("Digite um número");
    scanf("%f", &numero);
    

    
    quadradoPerfeito(numero);
    
    


    return (EXIT_SUCCESS);
}

