/*
 10. Faça um programa para ler a nota da prova de 15 alunos e armazene num vetor,
calcule e imprima a média geral.
 
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int i;
    float media , nota[3] , soma;
    
    for (i = 0 ; i <= 3 ; i++){
    printf("Digite uma Nota:");
    scanf("%f" , &nota[i]);
    soma = soma + nota[i];
    }
    media = soma /i;
    
    printf("O valor da média dos %i números digitados é igual a %f" , i++ , media );
    

    return (EXIT_SUCCESS);
}

