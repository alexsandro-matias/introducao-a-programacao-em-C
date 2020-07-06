
//  40. Elabore um programa que faça leitura de vários números inteiros, até que se digite um
// número negativo. O programa tem que retornar o maior e o menor número lido.

# include <stdio.h>
# define QUANTIDADENUMEROS 5


int main ()
{

    int numeros[QUANTIDADENUMEROS], maior, menor, numeroLido = 0;

    printf("Digite um valor qualquer. Para sair do programa digite um número negativo: ");
    scanf("%d" , &numeroLido);
    maior = numeroLido;
    menor = numeroLido;

    for(int i = 0; (i < QUANTIDADENUMEROS-1) && (numeroLido >= 0); i++ )
    {
            printf("Digite um valor: ");
            scanf("%d" , &numeroLido);

            if(numeroLido > maior)
            {
                maior = numeroLido;
            }

             if((numeroLido < menor) && numeroLido >= 0)
            {
                menor = numeroLido;
            }


    }

    printf("Maior número digitado: %d\n" , maior );
    printf("Menor número digitado: %d\n" , menor);

}


