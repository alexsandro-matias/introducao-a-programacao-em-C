
/*

1) Leia um número fornecido pelo usuário. Se esse número for positivo.
calcule a raiz quadrada do número. Se o número for negativo, mostre uma mensagem dizendo que o número é inválido.


*/



# include <stdio.h>
# include <stdlib.h>
# include <math.h>

int main() {
	float raiz , numero;

	printf("Digite um numero:");
	scanf("%f" , &numero);


	while(numero<0){
        printf("numero negativo. Digite outro valor\n");
        scanf("%f" , &numero);
        }

	if(numero >= 0){
        raiz = sqrtf(numero);
        printf("a raiz de %.4f eh %.4f\n" , numero , raiz);


	}

	 system("PAUSE");

	return 0;

}
