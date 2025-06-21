#include <stdio.h>
#include <stdlib.h>

short verificaPositivo(int numero)
{
    if(numero == 0 )
    {
        return 0;
    }
    else if(numero > 0 )
    {
        return 1;
    }
    else
    {
        return -1;
    }

}
/**
 *
 *
 3. Faça uma função para verificar se um número é positivo ou negativo. Sendo que o valor
    de retorno será 1 se positivo, -1 se negativo e 0 se for igual a 0.
 *
 **/


int main()
{
    int valor = 0, retorno = 0;


    printf("Digite um número inteiro qualquer: ");
    scanf("%d" , &valor);

    retorno = verificaPositivo(valor);

    printf("Valor Retornado: %d" , retorno);

    return 0;
}



