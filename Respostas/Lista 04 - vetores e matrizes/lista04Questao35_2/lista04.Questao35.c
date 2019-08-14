/*


 35. Faça um programa que leia dois números a e b (positivos menores que 10000) e:

• Crie um vetor onde cada posição é um algarismo do número. A primeira posição é
o algarismo menos significativo;

• Crie um vetor que seja a soma de a e b, mas faça-o usando apenas os vetores
construı́dos anteriormente.

Dica: some as posições correspondentes. Se a soma ultrapassar 10, subtraia 10 do
resultado e some 1 à próxima posição.

 */

#include <stdio.h>
#include <stdlib.h>

/*
 *
 */
int main(int argc, char** argv) {

  int   i , primeiro[5]  , segundo[5] , soma[5] , a = 0 , b = 0;


	for (i = 0 ; i <= 4 ; i++){
	soma[i] = 0;
	primeiro[i] = 0;
	segundo[i] = 0;
				}


    printf("Digite um valor:");
    scanf("%d" , &a);

    printf("Digite outro valor:");
    scanf("%d" , &b);

   i = 4;


    while (a > 0) {


        primeiro[i] = a % 10;
        a  = a / 10;
	i--;

    }

	i = 4;


	while( b > 0){

	segundo[i] = b % 10;
        b  = b / 10;
        i--;
		}


    	for (i = 4 ; i >= 0 ; i--){
	soma [i] = soma[i] + primeiro[i] + segundo[i];

	if (soma [i] >= 10){
	soma[i] = soma[i] - 10;
	soma[i-1] = soma[i-1]+1;

			}
				}


	for (i = 0 ; i < 5 ; i++){
	printf("%d\t" , primeiro[i]);
		}
	printf("\n");

	for (i = 0 ; i < 5 ; i++){
	printf("%d\t" , segundo[i]);
		}


	printf("\n");


	for (i = 0 ; i < 5 ; i++){
	printf("%d\t" , soma[i]);
		}








    return (EXIT_SUCCESS);
}


