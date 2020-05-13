/*

3) Fazer um programa no qual o usuário vai entrando sucessivamente com valores
positivos. Quando o usuário entrar com um valor negativo o programa para de
pedir valores e exibe: a quantidade de valores fornecidos e a média dos valores já
fornecidos.

*/

	# include <stdio.h>
	# include <stdlib.h>

	int main(){
    int i = 0 , numero ;
    float media , soma = 0 ;

    printf("Digite um numero:");
    scanf("%d" , &numero);

    while(numero >= 0){
        i++;
        soma = soma + numero;
        media = soma / i ;
        printf("Para terminar, digite um valor negativo. Se quiser continuar o calculo de media, digite outro numero positivo");
        scanf("%d" , &numero);

    }

     printf("media dos numeros positivos digitados: %.2f" , media);

	return 0 ;

	}
