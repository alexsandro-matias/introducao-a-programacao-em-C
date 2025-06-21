# include <stdio.h>

	int main()
	{
		float soma = 0  , taxaMensal , aporteMensal , capitalInicial ;
		int meses;
		
		printf("Digite o Capital Inicial do Investimento: ");
		scanf("%f" , &capitalInicial);
		
		printf("Informe o Aporte Mensal: ");
		scanf("%f" , &aporteMensal);
		
		
		printf("Informe a taxa mensal de juros (%% a.a): ");
		scanf("%f" , &taxaMensal);
		
		taxaMensal /= 100;
		
		printf("Informe o tempo da aplicação em meses: ");
		scanf("%d" , &meses);
		
		for(int i = 0 ; i <= 1 ; i++)
		soma = capitalInicial + aporteMensal;

				
		for (int i = 1 ;  i <= meses ; i++)
		soma = soma * ( 1 + taxaMensal) + aporteMensal ; 
		
		printf("Valor final = %.2f\n" , soma);
		
	}
