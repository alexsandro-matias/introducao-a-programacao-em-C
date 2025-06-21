# include <stdio.h>

	
	float potencia(float base , float expoente){
	
	int i = 1;
	float potencia = 1;
	
	if(expoente < 0 ){
	
	for(i = -1 ; expoente <= i ; expoente++)
	potencia = potencia * 1/base;
			}
	
	else{
	
	for (i = 1 ; i <= expoente ; i++ )
	potencia = potencia * base;
	}

	return potencia;
					   }



	int main(){
	
	float base , expoente , expoenteFinal;
	
	printf("Digite uma base:");
	scanf("%f", &base);

	printf("Digite um expoente:");
	scanf("%f", &expoente);

	expoenteFinal = potencia(base , expoente);

	printf("%.2f elevado a %.2f é igual a %.2f\n\n", base , expoente , expoenteFinal);

	
	

	return 0;
	}
