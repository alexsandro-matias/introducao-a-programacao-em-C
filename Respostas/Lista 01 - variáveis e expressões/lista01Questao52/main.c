/*

52. Três amigos jogaram na loteria. Caso eles ganhem, o prêmio deve ser repartido pro-
porcionalmente ao valor que cada deu para a realização da aposta. Faça um programa
que leia quanto cada apostador investiu, o valor do prêmio, e imprima quanto cada um
ganharia do prêmio com base no valor investido.
 
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    
   float comprimento , largura , tela;
    
    printf("Digite um valor do comprimento do terreno:");
    scanf("%f" , &comprimento);
    
    printf("Digite um valor da largura do terreno:");
    scanf("%f" , &largura);
    
    printf("Digite o valor área da tela:");
    scanf("%f" , &tela);
    
    
    
    tela = comprimento * largura * tela;
    
    printf("O valor da cerca será %.2f" , tela);
        

    return (EXIT_SUCCESS);
}

