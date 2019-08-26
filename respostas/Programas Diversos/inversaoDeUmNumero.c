/*
 O programa faz a inversão de um valor positivo digitado - se o cara digitar 1234 - o programa vai retornar um valor 4321

*/


# include <stdio.h>


int main() {

	int numero , numeroInvertido;

	printf("Informe um numero a ser invertido: ");
	scanf("%d" , &numero);

	while( numero != 0 ){
        numeroInvertido = numero % 10;
        printf("%d" , numeroInvertido);
        numero = numero /= 10;

        }

  	return 0;

}
