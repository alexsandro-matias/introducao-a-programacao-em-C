#include <stdio.h>
#include <stdlib.h>

// 17. Faça uma função que receba dois números inteiros positivos por
// parâmetro e retorne a soma dos N numeros inteiros existentes entre eles.

int retornaMaior(int a, int b)
{
    if (a > b)
    {
        return a;

    }
    else
    {
        return b;
    }
}

int retornaMenor(int a, int b)
{
    if (a < b)
    {
        return a;

    }
    else
    {
        return b;
    }
}

int somaDeIntervalo(int maior, int menor)
{
    int soma = 0;

    while (maior >= menor)
    {
        soma += menor;
        menor++;
    }

    return soma;

}


int main()
{


    int a, b;

    printf("Digite o primeiro numero positivo: ");
    scanf("%d", &a);

    // Permitindo apenas números positivos para a.
    while (a < 0)
    {
        printf("Numero digitado negativo. Digite um valor positivo: ");
        scanf("%d", &a);
    }

    // Permitindo apenas números positivos para b.
    while (b < 0)
    {
        printf("Numero digitado negativo. Digite um valor positivo: ");
        scanf("%d", &b);
    }

    // Existe a possibilidade
    // do primeiro valor digitado ser maior que o segundo.
	// Por isso deve ser ordenado para que seja percorrido de menor até
	// o maior número digitado.


    int maior = retornaMaior(a, b);
    int menor = retornaMenor(a, b);

    int somatorio = somaDeIntervalo(maior, menor);

    printf("A somatorio entre %d e %d: %d", a, b, somatorio);



    return 0;
}
