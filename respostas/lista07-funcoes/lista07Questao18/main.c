#include <stdio.h>
#include <stdlib.h>

//18.	Faça uma função que receba por parâmetros dois valores X e Z.
//Calcule e retorne o resultado de X^Z para o programa principal. Atenção não utilize nenhuma função pronta de exponenciação.

int potenciacao(int base, int expoente)
{
    int  potencia = 1;
    for (int i = 1; i <= expoente ; i++)
    {
        potencia *= base;

    }
    return potencia;
}

int main()
{
    int base, expoente;
    int potencia;

    printf("Digite a base da potenciacao: ");
    scanf("%d", &base);

    printf("Digite o expoente da potenciacao: ");
    scanf("%d", &expoente);

    potencia = potenciacao(base, expoente);
    printf("%d elevado a %d = %d",base, expoente, potencia);



    return 0;
}
