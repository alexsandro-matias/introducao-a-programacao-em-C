#include <stdio.h>


int main(void) {
	float x, y, z;
	printf("Informe dois números reais:\n");
	scanf("%f", &x); //Lê um número real e armazena em x
	scanf("%f", &y); //Lê um número real e armazena em y
	z = x * y; //A variável z recebe o produto de x e y
	//Imprime o resultado da multiplicação
	printf("Produto entre o %.1f e %.1f é igual a %.2f\n",x, y, z);
	return 0;
}
