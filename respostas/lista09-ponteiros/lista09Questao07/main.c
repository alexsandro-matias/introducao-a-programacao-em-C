#include <stdio.h>
#include <stdlib.h>

/*

7. Crie um programa que contenha uma func˜ao que permita passar por parametro dois
numeros inteiros A e B. A funç˜ao deverá calcular a soma entre estes dois núumeros e
armazenar o resultado na variável A. Esta funç˜ao n˜ao deverá possuir retorno, mas deverá
modificar o valor do primeiro par˜ametro. Imprima os valores de A e B na função principal.


*/

soma(int *num1Ponteiro, int *num2Ponteiro)
{

    *num1Ponteiro +=  *num2Ponteiro;

}



int main()
{
    int num1;
    int *num1Ponteiro = &num1;

    int num2;
    int *num2Ponteiro = &num2;

    printf("Digite a primeira variavel:");
    scanf("%d", &num1);

    printf("Digite a segunda variavel:");
    scanf("%d", &num2);

    soma(&num1, &num2);

    printf("O novo valor da primeira variavel (soma das variaveis): %d\n", num1);

    printf("O valor da segunda variavel nao se altera. Entao seu valor eh: %d\n", num2);


    return 0;
}
