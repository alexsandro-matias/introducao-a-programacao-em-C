#include <stdio.h>
#include <stdlib.h>
#define TAMANHO 10

int ordenaVetor(int vetor[] , int size)
{
    int i , j , aux;
    for (i = 0 ; i < size-1  ;i++ )
    {
        for (j = i + 1; j < size ; j++)
        {
            if(vetor[i] > vetor[j])
            {
                aux = vetor[i];
                vetor[i] = vetor[j];
		vetor[j] = aux;
            }
        }

    }

    return *vetor;
}

void imprimeVetor(int vetor[], int size)
{
	int i = 0;
	for (i = 0 ; i < size; i++)
	{
		printf(" %d ", vetor[i]);
	}
	printf("\n");
}


int main()
{
    int v[TAMANHO] = {9,5,6,7,8,4,3,1,2,0};
    int tamanho = TAMANHO;
    int  i = 0;

    imprimeVetor(v, tamanho);
    ordenaVetor(v , tamanho);
    imprimeVetor(v, tamanho);

    return 0;
}
