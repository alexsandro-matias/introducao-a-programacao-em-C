#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//8. Sejam a e b os catetos de um triângulo, onde a hipotenusa é obtida pela equação:
//hipotenusa =
//p
//a² + b². Faça uma função que receba os valores de a e b e calcule o
//valor da hipotenusa através da equação.

float calculahipotenusa(float a , float b)
{

	return pow(a*a + b*b,0.5);
}



int main()
{
	float primeiroCateto, segundoCateto, hipoteusa;


    printf("Digite o valor do primeiro cateto: ");
    scanf("%f", &primeiroCateto);

    printf("Digite o valor do segundo cateto: ");
    scanf("%f", &segundoCateto);

    hipoteusa = calculahipotenusa(primeiroCateto, segundoCateto);

    printf("%.2f² = %.2f² + %.2f² ", hipoteusa, primeiroCateto, segundoCateto);
    return 0;
}
