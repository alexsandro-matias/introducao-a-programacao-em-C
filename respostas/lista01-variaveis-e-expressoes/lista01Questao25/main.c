#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*

01.25 - Leia um valor de área em acres e  apresente-o convertido em m². A
fórmula de convers˜ao é:

M = A * 4048,58

M -> área em metros quadrados
A -> área em acres.

*/



int main()
{
    setlocale(LC_ALL , "");

    float acres , metrosQuadrados;

    printf("Informe um valor de área em acres: ");
    scanf("%f" , &acres);

    metrosQuadrados = acres* 4048.58;

    printf("%.2f acres = %f m²" , acres , metrosQuadrados);



    return 0;
}
