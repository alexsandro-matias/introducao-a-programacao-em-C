#include <stdio.h>
#include <stdlib.h>
/*

32. Faça um programa que simula o lançamento de dois dados, d1 e d2, n vezes,
e tem como saı́da o número de cada dado e a relação entre eles (>,<,=) de cada lançamento.

*/

int main()
{
    int vezes , dado1 , dado2 , d1Maior = 0 , d2Maior = 0 , iguais = 0 , i ;
    printf("Digite a quantidade de arremessos dos dois dados: ");
    scanf("%d" , &vezes);

    for (i = 0; i < vezes  ; i++)
    {
        printf("Digite o valor do primeiro dado: ");
        scanf("%d" , &dado1);

        printf("Digite o valor do segundo dado: ");
        scanf("%d" , &dado2);


        if (dado1 > dado2)
        d1Maior++;

        else if (dado1 == dado2)
        iguais++;

        else
        d2Maior++;

    }
        printf("\n\n");
        printf("Quantidade de arremessos: %d\n" , i);
        printf("Quantidade valores dos dados foram iguais: %d\n" , iguais);
        printf("Quantidade vezes que o valor primeiro dado foi maior que o segundo: %d\n" , d1Maior);
        printf("Quantidade vezes que o valor segundo dado foi maior que o primeiro: %d\n" , d1Maior);
        ;


    return 0;
}
