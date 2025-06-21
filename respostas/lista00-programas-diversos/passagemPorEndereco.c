# include <stdio.h>


#define TAM 10


void imprimir(int numeros[], int tamanho) {
int i;
for (i = 0; i < tamanho; i++)
	printf("%d ", numeros[i]);
printf("\n\n");
}


void dobrar(int numeros[], int tamanho) {
int i;
for (i = 0; i < tamanho; i++)
	numeros[i] *= 2;
}





int main() {
	int v[TAM] = {1, 2, 3, 4, 5};
	imprimir(v, TAM);
	dobrar(v, TAM);
	imprimir(v, TAM);
	return 0;
}
