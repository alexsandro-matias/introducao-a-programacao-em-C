/*

3 - Faça um programa que leia um numero inteiro positivo N
e imprima todos os números naturais de 0 até N em ordem decrescente.



*/

	# include <stdio.h>
	# include <stdlib.h>

	int main(){

	    int  numero;
	    do{

	printf("digite um valor positivo: ");
        scanf("%d" , &numero);
      } while(numero <0);




        for( ; numero >=1 ; numero --){

          printf("%d\t" , numero);
                                    }



      


	return 0 ;

	}
