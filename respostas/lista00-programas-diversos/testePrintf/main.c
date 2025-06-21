
#include <stdio.h>
#include <stdlib.h>

int testeIguais(int numero1 , int numero2){
    
    if(numero1 == numero2)
        return 1;
    else
        return 0;




}

int main() {
    int a , b , resultadoLogico;
    
    
    printf("Digite um número:");
    scanf("%d" , &a);
    
    printf("Digite um número:");
    scanf("%d" , &b);
    
    resultadoLogico = testeIguais(a , b);
    
    if (resultadoLogico == 0)
    printf("Os números digitados são diferentes");
    
    
    
    
    
   
}

