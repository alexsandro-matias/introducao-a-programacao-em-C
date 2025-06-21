#include <stdio.h>
#include <stdlib.h>

/*


ˆ
17. Escreva uma função que dado um numero real passado como parâmetro,
retorne a parte inteira e a parte fracionária deste número
Escreva um programa que chama esta função.
 ́
Protótipo:

void frac(float num, int* inteiro, float* frac);


*/

void frac(float num, int* inteiro, float* frac){}



int main()
{
    float numero;

    printf("Digite um número com casas decimais: ");
    scanf("%f" , &numero);

    float *numeroPonteiro = &numero;

    int parteInteira = *numeroPonteiro;

    printf("%d\n" , parteInteira);

    float parteDecimal = *numeroPonteiro - parteInteira;

    printf("%d\n" , parteDecimal);






    return 0;
}
