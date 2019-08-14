#include <stdio.h>
#include <stdlib.h>

/*

34 - Faca uma func˜ao n˜ao-recursiva que receba um numero inteiro positivo impar N e retorne
o fatorial duplo desse n´umero. O fatorial duplo é definido como o produto de todos os
numeros naturais ´ımpares de 1 ate algum numero natural ımpar N. Assim, o fatorial duplo
de 5!! é: 5!! = 1 * 3 * 5 = 15



*/

int fatorialDuplo(int n){
    int fatorialDuplo = 1 ,  i;
    for (i = 1; i <= n; i = i + 2 ){
    fatorialDuplo = fatorialDuplo * i;
    }


    return fatorialDuplo;

}



int main()
{
    int fatorialFinal , num;
    do
    {
    printf("Digite um valor impar\n");
    scanf("%d" , &num);
    } while (num%2 == 0);

    fatorialFinal = fatorialDuplo(num);

    printf("O fatorial do Numero eh %d" , fatorialFinal);








    return 0;
}
