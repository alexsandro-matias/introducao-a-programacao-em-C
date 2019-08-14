/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: alexsandro
 *
 * Created on 17 de Junho de 2016, 21:12
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    
    int matriz[3][3] , i , j;

    for (i = 0; i < 3; i++) {
        for (int j = 0 ; j < 3 ; j++){
            
            matriz [i][j] = 0;
            
        }
   
   }
    
    for (i = 0; i < 3; i++) {
        for (int j = 0 ; j < 3 ; j++){
            
         printf(" %d " , &matriz [i][j]);
            
        }
    printf("\n");
   }
    
    printf("Primeiro jogador:\n");
    printf("Digite a linha e depois a coluna da jogada:\n");
    scanf("%d %d " , &i &j);
    
    
    
    
    
   }
    
    

    return (EXIT_SUCCESS);
}

