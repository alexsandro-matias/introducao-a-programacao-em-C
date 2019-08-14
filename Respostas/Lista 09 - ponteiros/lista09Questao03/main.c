#include <stdio.h>
#include <stdlib.h>

/*

3. Escreva um programa que contenha duas variaveis inteiras. Leia essas variaveis do
teclado. Em seguida, compare seus enderecos e exiba o conteudo do maior endereco.



*/

int main()
{
    int variavel1;
    int variavel2;

	printf("Digite um valor inteiro:");
	scanf("%d" , &variavel1);

	printf("Digite outro valor inteiro:");
	scanf("%d" , &variavel2);


    printf("\nEndereco da variavel 1 - %d\n" , &variavel1);
    printf("Endereco da variavel 2 - %d\n" , &variavel2);

	printf("Logo: ");

    &variavel1 > &variavel2 ? printf("A variavel 1 está num endereco de memoria posterior a variavel 2\n") : printf("A variavel 2 está num endereco de memoria posterior a variavel 1\n");


}
