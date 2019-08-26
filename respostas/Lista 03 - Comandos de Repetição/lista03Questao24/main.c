#include <stdio.h>
#include <stdlib.h>

/*


24. Escreva um programa que leia um número inteiro e calcule a soma de todos os divisores
desse número, com exceção dele próprio. Ex: a soma dos divisores do número 66 é
1 + 2 + 3 + 6 + 11 + 22 + 33 = 78

*/

int main()
{
    int numero , i , soma = 0, opcao;

    printf("Digite o valor:");
    scanf("%d" , &numero);

    for (i = 1 ; numero > i ; i++){

        if(numero%i==0)
            soma = soma + i;


    }

    printf("A soma dos divisores de %d\n\n" , soma);


    printf("Deseja continuar:\n");

    printf("1 - SIM\n");
    printf("2 - NÃO\n");

    scanf("%d" , &opcao);


    if(opcao==1)
        return main();

    else
        return 0;

    return 0;



}
