/*

2) Escreva um programa em C, que receba do teclado um número qualquer e
informe se o mesmo é par ou ímpar.

*/

	# include <stdio.h>
	# include <stdlib.h>

	int main(){

	    int numero;


		printf("Digite um numero:");
		scanf("%d" , &numero);

		if(numero%2==0)
            printf("O número é par.");


        else
            printf("O número é ímpar.");


	return 0 ;

	}
