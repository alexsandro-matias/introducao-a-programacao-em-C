/*
 1 - Crie uma função que receba como parâmetro um número inteiro e devolva o seu dobro.
 *
 */

#include <stdio.h>
#include <stdlib.h>


int dobro(int numero)
{

    return 2 * numero;

}

int main()
{

    int numero;
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    numero = dobro(numero);

    printf("O dobro do número digitado é: %d", numero);

    return (EXIT_SUCCESS);
}

