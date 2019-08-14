#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*

Leia um valor de área em metros quadrados m² e apresente-o convertido em acres. A
fórmula de convers˜ao é:

A = M * 0.000247

M -> área em metros quadrados
A -> área em acres.

*/



int main()
{
    setlocale(LC_ALL , "");

    float acres , metrosQuadrados;

    printf("Informe um valor de área em metros quadrados (m²): ");
    scanf("%f" , &metrosQuadrados);

    acres = metrosQuadrados * 0.000247;

    printf("%.2f m² = %f acres" , metrosQuadrados , acres);



    return 0;
}
