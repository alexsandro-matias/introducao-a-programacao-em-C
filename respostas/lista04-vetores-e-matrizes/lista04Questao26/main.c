/*
26 - Faça um programa que calcule o desvio padrão de um vetor v contendo n = 10 números,
onde m é a media do vetor.
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    
    int i;
    float media , nota[9] , soma = 0 , dispersao[9] , somaDispersao = 0 ;
    double desvioPadrao , variancia;
    
    for (i = 0 ; i <= 9 ; i++){
    printf("Digite a %iª Nota:" , i+1);
    scanf("%f" , &nota[i]);
    soma = soma + nota[i];
    }
    media = soma /i;
    
    for (i = 0 ; i <= 9 ; i++){
        dispersao[i] = (media - nota[i]) * (media - nota[i]);
        }
    
    for (i = 0 ; i <= 9 ; i++)
        somaDispersao = somaDispersao + dispersao[i];
    
    variancia = somaDispersao/(i);
    
    desvioPadrao = sqrt(variancia);
    
    
    
    
    printf("para os valores apresentados:\n" );
    
    for(i = 0 ; i <= 9 ; i++)
    printf("%f\t" ,nota[i] );
    printf("\n\n");
    
    printf("Tem como Média = %f\n" , media );
    printf("Tem como Variância = %f\n" , variancia );
    printf("Tem como Desvio Padrão = %f" ,desvioPadrao);
    
    
    return 0;
}
