/*

3) Segundo a fundação Pró-Sangue, para doar sangue é necessário basicamente
atender a alguns requisitos como: Estar em boas condições de saúde, ter entre 16
e 69 anos, pesar no mínimo 50kg, estar descansado (ter dormido ao menos 6h nas
últimas 24h), estar alimentado e não ter se alimentado de comidas gordurosas nas
últimas 4h. Faça um algoritmo em C que, semelhante a um questionário, solicite
essas informações do usuário e ao fim, informe se o mesmo está apto para doar
sangue.

*/

	# include <stdio.h>
	# include <stdlib.h>

	int main(){

	    int Condicao , idade , horasDescansadas , comidasGordurosas;

	    float peso ;

		printf("O doador está em boas condições de saúde:\n");
		printf("1 - SIM\n");
		printf("2 - NÃO\n");
		scanf("%d" , &Condicao);

        printf("Informe a idade do doador:");
        scanf("%d" , &idade);


        printf("Informe o peso do doador:");
        scanf("%f" , &peso);

        printf("Informe a quatidade de horas dormidas na última noite:");
        scanf("%d" , &horasDescansadas);

        printf("Informe a quatidade de horas que o doador digeriu comidas gordurosas:");
        scanf("%d" , &comidasGordurosas);


        if ( (Condicao == 1) && ( idade>=16 ) && (idade <= 69) && (peso >=50) && (horasDescansadas >= 6) && (comidasGordurosas >= 4))
            printf("O doador está apto para doação");

        else
             printf("O doador não está apto para doação");




	return 0 ;

	}
