#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL , "");

    int numero , binario[16] , i ;

    printf("Digite um número para decimal para ser convertido em Binário: ");
    scanf("%d" , &numero);

    for (i = 0 ; i < 16 ; i++)
    {
        binario[i] = numero % 2;
        numero /= 2;

    }

    for(i = 15 ; i >= 0 ; i--)
    printf("%d" , binario[i]);

    return 0;
}
