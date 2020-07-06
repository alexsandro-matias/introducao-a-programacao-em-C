
/*

2) Faça um programa que receba um número inteiro e verifique se este número é par ou ímpar.

*/



# include <stdio.h>
# include <stdlib.h>
# include <math.h>

int main() {
	int numero;

	printf("Digite um numero:");
	scanf("%d" , &numero);


	if(numero%2==0)
    printf("O numero eh par\n");

    else
    printf("O numero eh impar\n");



	 system("PAUSE");

	return 0;

}
