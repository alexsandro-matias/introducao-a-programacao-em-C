/*

5) Faça um programa que receba três inteiros e informe o maior e o menor
número.

*/

	# include <stdio.h>
	# include <stdlib.h>

	int main(){

	   int numero1, numero2, numero3 = 0, maior = 0, menor = 0;

		printf("digite o 1º número:");
		scanf("%d" , &numero1);

		printf("digite o 2º número:");
		scanf("%d" , &numero2);

		printf("digite o 3º número:");
		scanf("%d" , &numero3);


		if ((numero1 > numero2) && (numero1 > numero3)) {
		maior = numero1;
		if (numero2 > numero3) {
		menor = numero3;}
		else {
		menor = numero2;}
		}

		if ((numero2 > numero1) && (numero2 > numero3)) {
			maior = numero2;
			if (numero1 > numero3) {
			menor = numero3;}
			else {
			menor = numero1;}
			}

		if ((numero3 > numero1) && (numero3 > numero2)) {
			maior = numero3;
			if (numero1 > numero2) {
			menor = numero2;}
			else {
			menor = numero1;}
			}


		printf("O maior número é %d\n" , maior);
		printf("O menor número é:%d\n"  , menor);






	return 0 ;

	}
