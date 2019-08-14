/*

5) Escreva um programa que imprima a tabuada de qualquer número solicitado
pelo usuário.

*/

	# include <stdio.h>
	# include <stdlib.h>

	int main(){

	    int numero , i , produto;


		printf("Digite um número:");
		scanf("%d" , &numero);


        for (i = 1; i <=10  ; i++ ){

            produto = numero * i;
            printf("%10d X %d = %d\n" , numero , i , produto);
        }



	return 0 ;

	}
