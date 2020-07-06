#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.1415

/*

18. Implemente uma função que calcule a área da superfície e o volume de uma esfera de

raio R. Essa função deve obedecer ao protótipo:  ́

void calc_esfera(float R, float *area, float *volume)

A area da superfície e o volume sao dados, respectivamente, por:  ̃

A = 4 *  p * R²

V = 4/3 * p * R³

*/
 void calc_esfera(float *raioPonteiro, float *areaPonteiro, float *volumePonteiro)
{

*volumePonteiro = 4/3 * pow(*raioPonteiro , 3) * PI;

*areaPonteiro = PI * pow(*raioPonteiro , 2);


return 0;

}



int main()
{

    float raio;
    float *raioPonteiro = &raio;

    float area;
    float *areaPonteiro = &area;

    float volume;
    float *volumePonteiro = &volume;


    printf("Digite o valor do raio: ");
    scanf("%f" , &raio);

    calc_esfera(&raio , &area , &volume);

    printf("Volume: %.2f\n" , *volumePonteiro);
    printf("Área:   %.2f\n" , *areaPonteiro);


    return 0;
}
