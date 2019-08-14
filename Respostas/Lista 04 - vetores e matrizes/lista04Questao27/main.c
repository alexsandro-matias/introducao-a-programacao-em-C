#include <stdio.h>
#include <stdlib.h>

int TAMANHO = 5;


/*

27. Leia 10 (TAMANHO = 6) números inteiros e armazene em um vetor. Em seguida escreva os elementos
que são primos e suas respectivas posições no vetor.


*/


int verificaPrimo(int numero){

    int i , contador = 0;

    for (i = 1 ; i <= numero ; i++){

        if(numero%i==0){
        contador++;
        }
    }

        if(contador==2)
        return numero;

        else
        return 0;
}



int main()
{
    int i , numero[TAMANHO] , j = 0 , numerosPrimo[TAMANHO] , posicaoPrimos[TAMANHO] , possivelPrimo;


    for (i = 0 ; i < TAMANHO ; i++){
    printf("Digite o numero %d:" , i+1);
    scanf("%d" , &numero[i]);
    }

    for (i = 0 ; i < TAMANHO; i++){


        possivelPrimo = verificaPrimo(numero[i]);




        if( possivelPrimo != 0){

        printf("Numero primo = %d\n" , numero[i]);
        printf("Sua posicao= %d\n\n" , i+1);
            }
    }



/*

for (i = 0 ; j >= i ; i++){
printf("%d - %d\n" , numerosPrimo[j] , posicaoPrimos[j]);

    }


*/





 return 0;

}
