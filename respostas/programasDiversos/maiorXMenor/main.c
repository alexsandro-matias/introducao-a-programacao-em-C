#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero , i , maior , menor;

    printf("Digite um valor:");
    scanf("%d" , &numero);

    maior = numero;
    menor = numero;

    for (i = 1 ; i <= 4 ; i++){

    printf("Digite um valor:");
    scanf("%d" , &numero);

    if(numero>maior)
    maior = numero;

    if(numero<menor)
    menor = numero;





    }

     printf("Maior:%d" , maior);
     printf("Menor:%d" , menor);


    return 0;
}