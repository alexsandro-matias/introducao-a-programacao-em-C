/*

2 - Faça um programa que leia 10 inteiros e imprima sua media.



*/

	# include <stdio.h>
	# include <stdlib.h>

	int main(){

	    int soma = 0 , i  , numero;
        float media;


	    for(i = 0 ; i < 10 ; i++){

        printf("digite um %d° valor: " , i+1);
        scanf("%d" , &numero);

        soma = soma + numero;


             }
        media = soma / i;

        printf("A média dos %d números é igual a %.3f" , i ,media);



	return 0 ;

	}
