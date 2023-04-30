#include <stdio.h>
#include <stdlib.h>

/*

36 - Faca uma func˜ao n˜ao-recursiva que receba um numero inteiro positivo N e retorne o
superfatorial desse número. O superfatorial de um numero N é definida pelo produto dos
N primeiros fatoriais de N. Assim, o superfatorial de 4 é sf(4) = 1! * 2! * 3! * 4! = 288.


*/

int superFatorial(int n)
{
    int superFatorial = 1,  i;
    for (i = 1; i <= n; i++ )
    {
        superFatorial = superFatorial * i;
    }


    return superFatorial;

}



int main()
{
    int fatorialFinal = 1, num, j;

    printf("Digite um numero\n");
    scanf("%d", &num);

    for(j = 1 ;  j <= num ; num-- )
    {
        fatorialFinal = superFatorial(num) * fatorialFinal;

    }

    printf("O Superfatorial do Numero eh %d", fatorialFinal);








    return 0;
}
