#include <stdio.h>
#include <stdlib.h>
/*

33. Dados n e dois números inteiros positivos, i e j, diferentes de 0, imprimir em ordem
crescente os n primeiros naturais que são múltiplos de i ou de j e ou de ambos. Exemplo:
Para n = 6, i = 2 e j = 3 a saı́da deverá ser: 0,2,3,4,6,8.

*/

int main()
{
    int primeiro , segundo , maior , menor , quantidade = 0 , i;

    printf("Digite o primeiro número natural diferente de zero do intervalo: ");
    scanf("%d" , &primeiro);

    while (primeiro <= 0)
     {
        printf("Número digitado inválido. Digite um valor positivo: ");
        scanf("%d" , &primeiro);
     }

    printf("Digite o segundo número natural diferente de zero do intervalo:");
    scanf("%d" , &segundo);

    while (segundo <= 0)
     {
        printf("Número digitado inválido. Digite um valor positivo: ");
        scanf("%d" , &segundo);
     }

     if (primeiro > segundo)
      {
          maior = primeiro;
          menor = segundo;
      }

     if (primeiro < segundo)
      {
          maior = segundo;
          menor = primeiro;
      }

    printf("Digite o valor de múltiplos do intervalo escolhido: ");
    scanf("%d" , &quantidade);

    while (quantidade > 0 )
    {


    }
        ;

    return 0;
}
