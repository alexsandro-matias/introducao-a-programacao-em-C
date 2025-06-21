/*

 19. Faça uma função que retorne o maior fator primo de um número.
 
 */

#include <stdio.h>
#include <stdlib.h>

int verficaPrimo(int num){

    int j , cont = 0 ;

    for (j = 1 ; j <= num ; j++){
    if(num%j==0)
    cont++;
    
    }
    if(cont == 2)
    return num;
    
    else
    return 0;
           
 }



int main() {
    
    int testePrimo , numero , i , maiorPrimo;
    
    printf("Digite um número:");
    scanf("%d" , &numero);
    
    
    for (i = 1 ; i <= numero ; i++){
        testePrimo = verficaPrimo(i);
        
        
        if(testePrimo != 0)
        maiorPrimo = testePrimo;
      
        
       
    }
    
    printf("%d" , maiorPrimo);
    return 0;
}