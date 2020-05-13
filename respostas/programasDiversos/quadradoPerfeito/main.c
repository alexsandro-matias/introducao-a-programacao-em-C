#include <stdio.h>
#include <stdlib.h>

int main()
{
    int soma = 0 , cont = 0 , i = 0 , numero , quadradoImpares;

    printf("Digite um numero positivo: ");
    scanf("%d" , &numero);

    for (i = 1 ; soma < numero ; i = i + 2 , cont++)
    {
        soma = soma + i;
        quadradoImpares = cont*cont;

    }

    if( quadradoImpares == numero)
    printf("O numero eh quadrado perfeito\n");

    else
    printf("O numero nao eh quadrado perfeito\n");



    system("pause");
    return 0;
}
