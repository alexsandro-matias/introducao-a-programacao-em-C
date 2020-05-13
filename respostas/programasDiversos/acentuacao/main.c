#include <stdio.h>
#include <locale.h>    /* Biblioteca necessária para uso de configurações regionais. */

int main() {


    double numero = 1 , produto = 0 , i;
    setlocale(LC_ALL,""); // pacote de idiomas

    printf("Digite um número positivo: ");
    scanf("%lf" , &numero);

    if(numero < 0)
    {
        do
        {
         printf("Número digitado inválido. Digite outro valor: ");
         scanf("%lf" , &numero);
        } while(numero < 0);
    }

    for( i = 0; produto < numero; i += 0.00000001)
    {
    produto = i * i;
    }

    printf("A raiz quadrada de %.4lf é %.4lf" , numero , i);

    return 0;
}
