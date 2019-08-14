/*

2) Imagine que você, como programador(a), trabalhando na seleção brasileira de
basquetebol em plena final dos jogos olímpicos do Rio 2016. A seleção adversária
é nada menos que os Estados Unidos cuja média de altura igual a 2m. Diante
disso, o treinador da equipe brasileira, solicita que você, de última hora e bem
rapidamente, faça um programa em C que receba a altura, em metros, de todos os
10 jogadores do Brasil e calcule a média da altura da equipe. Escreva um
algoritmo em linguagem C que resolva esse problema...e seja rápido, o treinador
está esperando!

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
