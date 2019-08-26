#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
/*

Escreva um programa em c que receba um numero, caso este numero seja positivo
retorne a sua raiz quadrada, caso seja negativo retorne que a entrada não é valida

*/
int main()
{
    double numero , raiz;
    printf("Digite um número");
    scanf("%lf" , &numero);


    if (numero < 0)
    {
        printf("Número negativo. Impossível extrair raiz quadrada.");
    }
    else
    {
        raiz = sqrt(numero);
        printf("A raiz de %lf é %lf" , numero , raiz);
    }


    return 0;
}
