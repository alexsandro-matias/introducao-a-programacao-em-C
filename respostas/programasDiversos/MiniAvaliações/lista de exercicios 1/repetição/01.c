/*

1) Escreva um programa que, além de imprimir os valores ímpares de 0 a 100,
também imprima a quantidade de valores ímpares nesse intervalo.
*/

	# include <stdio.h>
	# include <stdlib.h>

	int main(){
    int total = 0 , i = 2 ;

    for (i = 1 ; i < 100 ; i++){

        if ( i % 2 != 0){
            printf("%d\t" , i);
            total++;

        }


    }

    printf("\nO total de numeros impares compreendidos entre 0 e 100 eh %d" , total);

	return 0 ;

	}
