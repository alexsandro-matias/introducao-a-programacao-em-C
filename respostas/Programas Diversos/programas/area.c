
# include <stdio.h>
# include <stdlib.h>

int main(){

float PI = 3+1/7;
float raio , area;

    printf("digite o valor do raio:");
    scanf("%f" , &raio);


    area = raio * raio * PI;

    printf("o valor do area do circulo eh: %.2f" , area);

    return 0 ;

}
