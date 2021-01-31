#include <stdio.h>
#include <stdlib.h>

/*

2. Escreva um programa que contenha duas variaveis inteiras. Compare seus enderecos e
exiba o maior endereco.

*/

int main()
{
    int variavel1 = 10;
    int variavel2 = 11;



    printf("Endereco da variavel 1 - %d\n" , &variavel1);
    printf("Endereco da variavel 2 - %d\n" , &variavel2);

	printf("Logo:\n");

    &variavel1 > &variavel2 ? printf("A variavel 1 está num endereco de memoria posterior a variavel 2\n") : printf("A variavel 2 está num endereco de memoria posterior a variavel 1\n");


    return 0;
}
