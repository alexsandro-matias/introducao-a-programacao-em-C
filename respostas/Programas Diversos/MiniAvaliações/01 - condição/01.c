/*

1) No Brasil o voto é obrigatório para pessoas entre 18 e 69 anos e facultativo para
pessoas entre 16 e 17, bem como acima dos 70 anos. Pessoas com idade inferior
a 16 anos não podem votar. Conforme essas instruções, escreva um programa que
receba a idade de uma pessoa e informe se ela pode ou não votar e se o voto é
facultativo ou obrigatório.

*/

	# include <stdio.h>
	# include <stdlib.h>

	int main(){

	    int idade;


		printf("Digite uma idade:");
		scanf("%d" , &idade);

		if(idade < 16)
            printf("Essa pessoa não pode votar.");

        if(  ( (idade >= 16) && (idade < 18) ) || (idade > 70))
            printf("Essa pessoa pode votar e seu voto é facultativo");

        else if  ( (idade >= 18) && (idade <= 70) )
            printf("Essa pessoa é obrigada a votar.");


	return 0 ;

	}
