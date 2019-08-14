#include <stdio.h>
#include <stdlib.h>
//#define 5 5


/*

35. Faça um programa que leia dois numeros a e b (positivos menores que 10000) e:
• Crie um vetor onde cada posicao e um algarismo do numero. A primeira posicao é
o algarismo menos significativo;

• Crie um vetor que seja a soma de a e b, mas faça-o usando apenas os vetores
construidos anteriormente.

Dica: some as posicoes correspondentes. Se a soma ultrapassar 10, subtraia 10 do
resultado e some 1 a proxima posicao.


*/


int main()
{
    const int;

    int i , primeiro[5] , segundo[5] , soma[5] , a , b ;



    // Inicializando os vetores com zero

    for (i = 0 ; i < 5 ; i++){
    primeiro[i] = 0;
    segundo[i] = 0;
    soma[i] = 0;

    }

    // leitura do números

    printf("Digite um número:");
    scanf("%d" , &a);


    printf("Digite o segundo número:");
    scanf("%d" , &b);


    // Jogando os valores para dentro de cada casa do vetor


    for(i = 4 ; a > 0 ; i--){

    primeiro[i] = a%10;

    a /= 10 ;


    }

    for(i = 4 ; b > 0 ; i--){

    segundo[i] = b%10;

    b /=10 ;


    }


    printf("\n");


    for (i = 0 ; i < 5 ; i++){
    printf("%d " , primeiro[i]);

    }

    printf("\n");


    for (i = 0 ; i < 5 ; i++){
    printf("%d " , segundo[i]);

    }

    /*

    A soma dos vetores das unidades até os valores
    relativos maiores

    */


    for(i = 4 ; i > 0  ; i--){

    soma[i] = primeiro[i] + segundo[i];

    if(soma[i] > 10){

    soma[i-1] = soma[i-1] + 10;

    soma[i] = soma[i] - 10;

    }



    }

    printf("\n");
    printf("------------------");
    printf("\n");

    for (i = 0 ; i < 5 ; i++){
    printf("%d " , soma[i]);

    }

    return 0;
}
