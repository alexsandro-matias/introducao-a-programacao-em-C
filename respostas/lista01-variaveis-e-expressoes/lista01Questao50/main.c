#include <stdio.h>
#include <stdlib.h>
#define ANO_ATUAL 2017
#define IDADE_DA_PEDRA 1900

/*
 * 50. Implemente um programa que calcule o ano de nascimento de uma pessoa a partir de
 * sua idade e do ano atual.
 */

int main()
{
	int anoAtual , anoNascimento , idade;

    printf("Digite o ano de nascimento:");
    scanf("%d" , &anoNascimento);

     while (anoNascimento < IDADE_DA_PEDRA)
    {
    	printf("Vixe! Essa pessoa não pode ser mais velha que Temer. Diz o ano certo:");
    	scanf("%d" , &anoNascimento);
    }

    printf("Digite o ano atual:\n");
    scanf("%d" , &anoAtual);

    while (anoAtual < ANO_ATUAL)
    {
    	printf("Deixe de ser mentiroso. Digite o ano certo: ");
    	scanf("%d" , &anoAtual);
    }


    idade = anoAtual - anoNascimento;

    printf("Idade do caboclo: %d." , idade);


    return 0;
}
