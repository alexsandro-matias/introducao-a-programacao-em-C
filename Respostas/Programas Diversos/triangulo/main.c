#include <stdio.h>
#include <stdlib.h>

int main()
{

    int adj1, adj2 ,  numero , repetido = 0;

    printf("digite um numero");
    scanf("%d" , &numero);


    while (numero > 0){

    adj1 = numero % 10;
    numero = numero / 10;
    adj2 = numero % 10;


    if(adj1 == adj2)
    repetido = adj1;


   }

    if(repetido!=0)
    printf("O numero %d esta proximo um do outro" , adj1 );

    else
    printf("nenhum numero se repete ao lado do outro");
    return 0;
}
