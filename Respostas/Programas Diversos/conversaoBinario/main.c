#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int opcao1 , opcao2;
    setlocale(LC_ALL , "");

    printf("Qual a base que você está?\n\n");
    printf("1 - Decimal \n");
    printf("2 - Binária\n");
    printf("3 - Octal \n");
    printf("4 - Hexadecimal\n");
    printf("\n\n");
    scanf("%d" , &opcao1);

    while( opcao1 != 1 || opcao1 != 2 || opcao1 != 3 || opcao1 != 4 )
    {
    if( opcao1 != 1 || opcao1 != 2 || opcao1 != 3 || opcao1 != 4)
    printf("Opção Inválida. Digite um valor válido: \n\n");
    printf("Qual a base que você está?\n\n");
    printf("1 - Decimal \n");
    printf("2 - Binária\n");
    printf("3 - Octal \n");
    printf("4 - Hexadecimal\n");
    scanf("%d" , &opcao1);
    }





    int numero , binario[8] , i ;

    printf("Digite um número para decimal para ser convertido em Binário: ");
    scanf("%d" , &numero);

    for (i = 0 ; i < 8 ; i++)
    {
        binario[i] = numero % 2;
        numero /= 2;

    }

    for(i = 7 ; i >= 0 ; i--)
    printf("%d" , binario[i]);

    return 0;
}
