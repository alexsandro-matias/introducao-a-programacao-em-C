# include <stdio.h>
# define TAMANHO 10

	int main()
	{
		int numeros[TAMANHO] , repetidos[TAMANHO/2];
		
		
		for (int i = 0 ; i < TAMANHO ; i++)
		{
		printf("Digite o %d° número: " , i+1 );
		scanf("%d" , &numeros[i]);
		}
		
	}
