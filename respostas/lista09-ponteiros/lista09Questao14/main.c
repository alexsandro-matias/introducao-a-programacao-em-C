#include <stdio.h>
#include <stdlib.h>
#define TAM 12


/**


Crie uma função que receba dois parâmetros: um array e um valor do mesmo tipo do
array. A função deverá preencher os elementos de array com esse valor. N˜ao utilize
índices para percorrer o array, apenas aritmética de ponteiros.



**/

int calculaTamanhoDeUmElemento(double *vetor)
{
	cout << "" << endl;


    return sizeof(*vetor);
}


int main()
{
    int vetor[TAM];
    int tamanhoPelaFuncao = calculaTamanhoDeUmElemento(vetor);
    int tamanho = sizeof(vetor)/sizeof(vetor[0]);


    printf("%d\n",tamanhoPelaFuncao);
    printf("%d\n",tamanho);
    return 0;
}
