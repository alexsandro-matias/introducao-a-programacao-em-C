
# include <stdio.h>
# include <stdlib.h>

int main(){

float PI = 3.14;
float raio , comprimento;

    printf("digite o valor do raio:");
    scanf("%f" , &raio);


    comprimento = 2 * raio * PI;

    printf("o valor do comprimento do circulo eh: %f" , comprimento);

    return 0 ;

}
