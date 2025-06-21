#include <stdio.h>
#include <stdlib.h>
#define TAMANHO 50


/*

Questão 1
Escreva um pseudocódigo que armazena números digitados pelo usuário. Eles
serão armazenados até que o número 0 seja digitado. Após o usuário digitar 0,
calcule a média dos números armazenados sem levar em conta o 0.
Escreva um número: 8
Escreva um número: 2
Escreva um número: 2
Escreva um número: 0
Média: 4
Observação: considere que o usuário digite no máximo 50 números.

*/


int main()
{
    int i;

    float media = 1 , notas[TAMANHO] , soma = 0 ;

    for (i = 1 ; i <= 50 ; i++ )
    {
    	printf("Escreva um número: ");
    	scanf("%f" , &notas[i]);

    	if (notas[i] == 0)
        break;

        soma += notas[i];

    	media = (soma) / (i);
    }

    printf("Média = %.2f\n" , media);


    return 0;
}
