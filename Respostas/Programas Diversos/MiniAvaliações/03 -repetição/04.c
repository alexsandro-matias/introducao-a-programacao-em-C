/*

4) Escreva um algoritmo em C que, recebendo os inteiros base e expoente, efetue
o cálculo de potência.

*/

	# include <stdio.h>
	# include <stdlib.h>

	int main(){

	    int base , expoente , potencia = 1 , i = 1;


		printf("Digite o valor da base:");
		scanf("%d" , &base);

		printf("Digite o valor do expoente:");
		scanf("%d" , &expoente);




        for (i = 1; i <= expoente ; i++ ){

            potencia = base * potencia;

        }

        printf("Assim, %d elevado a %d é igual a %d" , base , expoente , potencia);


	return 0 ;

	}
