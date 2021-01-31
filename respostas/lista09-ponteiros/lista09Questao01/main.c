#include <stdio.h>
#include <stdlib.h>

//1. Escreva um programa que declare um inteiro, um real e um char, e ponteiros para inteiro,
//real, e char. Associe as variaveis aos ponteiros (use &). Modifique os valores de
//cada variavel usando os ponteiros. Imprima os valores das variaveis antes e após a
//modificaçao.

int main()
{
    int inteiro = 10, *ponteiroInteiro;
    ponteiroInteiro = &inteiro;


    float real = 3.14,*ponteiroReal;
    ponteiroReal = &real;


    char caractere = 'A';
    char *ponteiroCaractere = &caractere;


    printf("Variavel Inteira antes: %d\n", inteiro);
    printf("Variavel real antes: %f\n", real);
    printf("Variavel caractere antes: %c\n", caractere);

    *ponteiroInteiro = 123;
    *ponteiroReal = 123.4567;
    *ponteiroCaractere = 'Z';

    printf("Variavel Inteira depois: %d\n", inteiro);
    printf("Variavel real depois: %f\n", real);
    printf("Variavel caractere depois: %c\n", caractere);

    return 0;
}
