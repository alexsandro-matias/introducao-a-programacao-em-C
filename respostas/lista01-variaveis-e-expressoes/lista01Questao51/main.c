#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

/*

51. Escreva um programa que leia as coordenadas x e y de pontos no R²
e calcule sua distância da origem (0, 0).

 */



int main()
{
	setlocale(LC_ALL , "");

	float x , y , distancia;


    printf("Cálculo de coordenadas até origem.\n");
    printf("-------------------------------------\n");

    printf("\n\n");

    printf("Digite uma coordenada no modelo (X,Y): ");
    printf("\n\n");


	printf("-------------------------------------\n");

    printf("Digite o valor de X: ");
    scanf("%f" , &x);
    while (x <= 0)
    {
    	printf("Número digitado deve ser um número positivo não nulo. Digite outro valor:");
    	scanf("%f" , &x);
    }

    printf("Digite o valor de Y: ");
    scanf("%f" , &y);

    while (y <= 0)
    {
    	printf("Número digitado deve ser um número positivo não nulo. Digite outro valor:");
    	scanf("%f" , &y);
    }


	distancia = sqrt(x*x + y*y);

	printf("A distância da origem: %f" , distancia);


    return 0;
}
