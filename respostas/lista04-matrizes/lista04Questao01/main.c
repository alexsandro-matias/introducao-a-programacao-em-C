#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define tamanho 4

//Leia uma matriz 4 x 4, conte e escreva quantos valores maiores que 10 ela possui.
int main()
{
	setlocale(LC_ALL, "portuguese");
	int matriz[tamanho][tamanho];
	int numerosMaioresQue10 = 0;

for (int linha = 0; linha < tamanho; linha++)
{
	for (int coluna = 0; coluna < tamanho; coluna++)
	{
		if (matriz[linha][coluna])
		{
			numerosMaioresQue10++;
		}

	}

}

    printf("Quantidade de números maior que 10: %d\n\n", numerosMaioresQue10);
    return 0;
}
