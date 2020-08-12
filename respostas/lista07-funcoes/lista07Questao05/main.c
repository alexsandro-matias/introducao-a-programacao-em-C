#include <stdio.h>
#include <stdlib.h>
#define PI 3.1415


/**

5. Faça uma função e um programa de teste para o cálculo do volume de uma esfera.
Sendo que o raio é passado por parâmetro.


V = 4/3 * PI * R^3


**/

double volumeEsfera(double valorDoRaio)
{
    return 4*valorDoRaio * valorDoRaio * valorDoRaio * PI / 3;
}


int main()
{
    double raio, volume;
    printf("Digite o valor do Raio da esfera: ");
    scanf("%lf" , &raio);

    volume = volumeEsfera(raio);
    printf("O volume de uma esfera de raio %lf e igual a %lf." , raio, volume);

    return 0;
}
