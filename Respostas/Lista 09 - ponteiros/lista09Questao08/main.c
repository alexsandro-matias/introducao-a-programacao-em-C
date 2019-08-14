#include <stdio.h>
#include <stdlib.h>

/*

8. Crie um programa que contenha um array de float contendo 10 elementos.
Imprima o endereço de cada posiçao desse array.

*/

int main()
{
	int i;
	int TAMANHO = 10;
	float vetor[TAMANHO];


	for (i = 0 ; i < TAMANHO ; i++)
	printf("posicao %d: %20d\n" , i+1 , &vetor[i]);



    return 0;
}
