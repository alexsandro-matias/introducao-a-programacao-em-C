#include <stdio.h>
#include <stdlib.h>

//10. Faça uma função que receba
//dois números e retorne qual deles é o maior.

int Calculamaior(int primeiro, int segundo)
{
    if (primeiro > segundo)
    {
        return primeiro;
    }
    else
    {
        return segundo;
    }
}

int main()
{
    int primeiro, segundo;

    printf("Digite o primeiro numero: ");
    scanf("%d", &primeiro);

    printf("Digite o segundo numero: ");
    scanf("%d", &segundo);

    int maior = Calculamaior(primeiro, segundo);

    printf("O maior valor digitado foi %d." , maior);


    return 0;
}
