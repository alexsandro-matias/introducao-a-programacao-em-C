	

/*

Escreva um programa que lê o raio de um círculo (um número real, do tipo double) e calcula a área, o diâmetro e o comprimento
– Observação: para ler um número real do tipo double, utilize %lf
– Os resultados dos cálculos devem ser impressos com 4 casas decimais




*/


	#include <stdio.h>

	# define PI 3.1415
	
	int main(void) {
	float raio , comprimento , area , diametro;
	printf("Informe o valor do raio:\n");
	scanf("%f", &raio); 
	

	diametro = 2 * raio;
	comprimento = 2 * PI * raio;
	area = PI * raio * raio;


	printf("Raio = %.4f\n"  , raio);
	printf("Diâmetro = %.4f\n"  , diametro);
	printf("Comprimento = %.4f\n"  , comprimento);
	printf("Área = %.4f\n"  , area);
	return 0;
}
