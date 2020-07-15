/*
 6 - Faça uma função que receba 3 números inteiros como parâmetro,
 * representando horas, minutos e segundos, e os converta em segundos.
 */

#include <stdio.h>
#include <stdlib.h>
int somaSegundos(int horas, int minutos , int segundos)
{
    segundos = (3600*horas) + (minutos * 60) + segundos;
    return segundos;
}

int main()
{
    int horas , minutos , segundos , soma;

    printf("Digite o valor de horas:");
    scanf("%d" , &horas);

    printf("Digite o valor de minutos:");
    scanf("%d" , &minutos);

    printf("Digite o valor de segundos:");
    scanf("%d" , &segundos);

    soma = somaSegundos(horas , minutos , segundos);
    printf("O valor em segundos é: %d" , soma);

    return (EXIT_SUCCESS);
}

