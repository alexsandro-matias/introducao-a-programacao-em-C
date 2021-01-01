#include <stdio.h>
#include <stdlib.h>
#define TAMANHO 10


/**


Faça um programa que leia dez conjuntos de dois valores, o primeiro representando o
numero do aluno e o segundo representando a sua altura em metros. Encontre o aluno
mais baixo e o mais alto. Mostre o numero do aluno mais baixo e do mais alto, juntamente
com suas alturas.

**/

int main()
{
    int codigoAluno[TAMANHO];
    float alturaAluno[TAMANHO] , maiorAltura, menorAltura;

    printf("Digite o numero do aluno: ");
    scanf("%d" , &codigoAluno[0]);


    printf("Digite a altura do aluno (m): ");
    scanf("%f" , &alturaAluno[0]);

    maiorAltura = alturaAluno[0];
    menorAltura = alturaAluno[0];




    for (int i = 1 ; i < TAMANHO ; i++ )
    {
        printf("Digite o numero do aluno: ");
        scanf("%d" , &codigoAluno[i]);

        printf("Digite a altura do aluno (m): ");
        scanf("%f" , &alturaAluno[i]);

        if (alturaAluno[i] > maiorAltura)
        {
            maiorAltura = alturaAluno[i];
        }

        if (alturaAluno[i] < menorAltura)
        {
            menorAltura = alturaAluno[i];
        }

    }

    printf("\n\n");
    printf("Maior altura: %.2f m.\n" , maiorAltura);
    printf("Menor altura: %.2f m.\n" , menorAltura);

    return 0;
}
