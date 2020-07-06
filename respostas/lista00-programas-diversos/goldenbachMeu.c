# include <stdio.h>
# include <stdlib.h>

int avaliaPrimo (int numero)
{
	int i , cont = 0;
	
	for (i = 1 ; i <= numero ; i++)
	{
	if(numero % i == 0 )
	cont++;
	}
	
	if(cont == 2)
	return numero;
	
	else 
	return 0;

	
	
	
}




int main()
{
		int numero , testePrimo , testeN1 , primo1 , primo2 , j;

		
		printf("digite um número par:");
		scanf("%d", &numero);
		
		
		for (j = 1 ; j <= numero ; j++)
		{
			
		testeN1 = avaliaPrimo(j);
		
		if(testeN1 != 0)
		{
		primo1 = testeN1;
		primo2 = numero - testeN1;
		
		}
		
		if(avaliaPrimo(primo2) != 0)
			{
		
		if(primo1+primo2 == numero)
				{
				printf("%d e %d \t" , primo1 , primo2);
				break;
		
				}
			}
		}
		
	
		
		
		
		
		
	
	
	

		
}


