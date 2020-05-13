#include <stdio.h>
#include <stdlib.h>
# include <math.h>

/*

25 - Fac¸a uma func˜ao que receba um inteiro N como parametro, calcule e retorne o resultado
da seguinte serie:
S = 2/4 + 5/5 + 10/6 + ... + (N2 + 1)/(N + 3)


*/

float calculoSerie(int n){
    int i;
    float expressao , somaSerie = 0;



    for (i = 1 ; n >= i ; i++){
        expressao = ( (pow(i,2) + 1) / (i + 3));
        somaSerie = somaSerie + expressao;
        }



    return somaSerie;
}




int main()
{
    int numero;
    float serie;

    printf("Calculo da serie:\n");
    printf("S = 2/4 + 5/5 + 10/6 + ... + (N2 + 1)/(N + 3)\n");
    printf("Digite um valor de N:");
    scanf("%d" , &numero);

    serie = calculoSerie(numero);

    printf("O valor da serie eh %.3f" , serie);



    return 0;
}
