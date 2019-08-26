/*

4) Faça um programa que recebe três valores A, B e C e diga se eles podem
formar um triângulo.
Dica: Na definição matemática, qual é a condição para se formar um triângulo?

*/

	# include <stdio.h>
	# include <stdlib.h>

	int main(){

	    int lado1, lado2, lado3 = 0, maior = 0, menor = 0 , medio;

		printf("digite o 1º lado:");
		scanf("%d" , &lado1);


		printf("digite o 2º lado:");
		scanf("%d" , &lado2);

		printf("digite o 3º lado:");
		scanf("%d" , &lado3);

		if ((lado1 > lado2) && (lado1 > lado3)) {
		maior = lado1;

		if (lado2 > lado3) {
        medio = lado2;
		menor = lado3;
                            }

		else {
		medio = lado3;
		menor = lado2;
		}
                                                }



		if ((lado2 > lado1) && (lado2 > lado3)) {
			maior = lado2;

			if (lado1 > lado3) {
            medio = lado1;
			menor = lado3;
			}

			else {
			medio = lado3;
			menor = lado1;
			}

                                                }

		if ((lado3 > lado1) && (lado3 > lado2)) {
			maior = lado3;

			if (lado1 > lado2) {
            medio = lado1;
			menor = lado2;
			}

			else {
			medio = lado2;
			menor = lado1;}
			}

        printf("O lado maior é %d, o mediano é %d e o menor é %d\n" , maior , medio , menor);

        if( (maior < (medio + menor)) )
		printf("Logo o triângulo existe, pois a soma dos menores é maior que o maior lado.\n");

		else

        printf("Logo o triângulo não existe, pois a soma dos menores é menor ou igual ao que o maior lado.\n");


	return 0 ;

	}
