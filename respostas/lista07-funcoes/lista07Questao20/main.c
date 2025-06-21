#include <stdio.h>
#include <stdlib.h>

//20.	Faça um algoritmo que receba um numero inteiro positivo N e calcule o seu fatorial, n!.

int calculafatorial(int numero)
{
    int fatorial = 1;
    for (int i = 1; i < numero ; numero--)
    {
        fatorial *= numero;
    }

    return fatorial;
}

int main()
{
    int fatorial, numero;
    printf("Digite um número: ");
    scanf("%d", &numero);
    fatorial = calculafatorial(numero);
    printf("%d! = %d", numero, fatorial );
    return 0;
}
