/* 
 
 33. Faça uma função que receba um número N e retorne a soma dos algarismos de N!. Ex:
 ́
se N = 4, N! = 24. Logo, a soma de seus algarismos é 2 + 4 = 6.
 
 */

#include <stdio.h>
#include <stdlib.h>

int calculaFatorial (int num){

    int i , fatorial = 1;
    
    for(i = 1 ; num >= i ; num--)
    fatorial = fatorial * num;
    
    return fatorial;
    
}


int somaDosDigitos(int num){
    
    int resto , somaDigitos = 0;
    
    while(num > 0){
        resto = num % 10;
        somaDigitos = somaDigitos + resto;
        num = num / 10;
    }

    return somaDigitos;

}

int main() {
    int numero , fatorial , somaDigitos;
    
    printf("Digite um valor:");
    scanf("%d" , &numero);
    
    fatorial = calculaFatorial(numero);
    
    somaDigitos = somaDosDigitos(fatorial);
    
    printf("%d! = %d que tem a soma dos algarismo igual a: %d" , numero , fatorial , somaDigitos);
    
    
    return (EXIT_SUCCESS);
}

