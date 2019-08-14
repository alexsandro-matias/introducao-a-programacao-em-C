
# include <stdio.h>



    float converteDollar( float real){
	
	float dollar;
	
	dollar = real / 3.5;
	return dollar;
	
	
	}






    int main(){
    
    float real , dollar;
 
    printf("Digite o valor em reais:");
    scanf("%f" , &real);
    
    dollar = converteDollar(real);
    printf("o valor em dollares: %.2f" , dollar);
    
    
    
    return 0;
    }
