#include <stdio.h>
#include <stdlib.h>


void imprima(int i){
    int j;
    for(j = 1 ; i >= j ; j++)
    printf("*");
}

int main()
{
    int base , linhas , i;
    printf("Digite um numero de linhas:\n");
    scanf("%d" , &linhas );
    base = (2*linhas) - 1;
    for( i = 1 ; i <= base ; i = i + 2){
        printf("\n");
        imprima(i);

    }

    return 0;
}
