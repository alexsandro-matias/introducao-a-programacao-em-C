#include <stdio.h>
#include <stdlib.h>

/*

6. Faça um programa que receba do usuário um vetor com 10 posições. Em seguida deverá
ser impresso o maior e o menor elemento do vetor.

*/


int main()
{
    int numeros[10] , i  , maior = 0 , menor = 0, aux;

    for (i = 0 ; i < 10 ; i++){
    printf("Digite o %dº número:" , i+1);
    scanf("%d" , &numeros[i]);

    aux = numeros[i];

    if ((menor < aux) && (menor<maior))
        menor = aux;


    if( (aux> maior) && (aux > menor)){
        maior = aux;
    }



    }


    printf("Maior = %d\n" , maior);
    printf("Menor = %d\n" , menor);


    return 0;
}
