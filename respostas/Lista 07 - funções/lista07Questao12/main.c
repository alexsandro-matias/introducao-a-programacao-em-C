#include <stdio.h>
#include <stdlib.h>

/*

12 - Escreva uma func¸ ˜ao que receba um n´umero inteiro maior do que zero e retorne a soma
de todos os seus algarismos. Por exemplo, ao numero 251 correspondera o valor 8 (2
+ 5 + 1). Se o numero lido n˜ao for maior do que zero, o programa terminar´a com a
mensagem “Numero invalido”.
*/


int somaDigitos(int numero){
    int resto , soma;

    while(numero>0){
    resto = numero % 10;
    soma = soma + resto;
    numero = numero/10;
                    }

    return soma;

}



int main()
{
    int numero, soma = 0 , resto, somadosDigitos;
    printf("Digite um numero positivo nao nulo:");
    scanf("%d" , &numero);

    if(numero<0)
    printf("Numero digitado invalido");


    if(numero>0)
    somadosDigitos = somaDigitos(numero);


    printf("A soma dos digitos do numero digitado eh %d" , soma);

    return 0;
}
