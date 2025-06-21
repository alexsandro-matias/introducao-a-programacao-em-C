#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>


// JUROS FIXOS

float poupanca(float juros,float tempo)
{
    float poupanca= pow((1+juros),tempo);
    return poupanca;
}

float rendaF(float lucro,float tributo,float inflacao)
{
    float rendaF = (lucro-(tributo-lucro))-inflacao;
    return rendaF;
}

float rendaV(float juros,float tempo)
{
 float rendaV=pow((1+juros),tempo);
 return rendaV;
}
int main() 
{
    setlocale(LC_ALL,"portuguese");
    int decisao;
    float dinheiro,tempo,Tp=0.05,Tv=0.15,i=0.0731,l=0.10,t=0.15,Total,Total1,P,P1,RF,RF1,RV,RV1;
     //P=POUPANÇA  RV=RENDA VARIAVEL  RF=RENDA FIXA
    printf("\tDigite o valor do deposito\n");
    scanf("%f",&dinheiro);
    printf("\tDigite o tempo em meses\n");
    scanf("%f",&tempo);
    printf("Você irá fazer depositos regulares (1-SIM  2- NAO)?\n");
    scanf("%d",&decisao);

    if(decisao==1)
    {
     Total=(1 + 0.05)*((pow(1.05,tempo)-1)/0.05)*dinheiro;
     printf("O Valor total será %f reais\n",Total);
     printf("Em %2.f meses\n",tempo);
    }
    
    else{

    P=poupanca(Tp,tempo);
    P1=P*dinheiro;
    RF=rendaF(l,t,i);
    RF1=RF*dinheiro;
    Total1=RF1+dinheiro;
    RV=rendaV(Tv,tempo);
    RV1=RV*dinheiro;
    printf("Em %2.f meses\n",tempo);
    printf("NA POUPANÇA(sem aporte mensal): %f reais\n",P1);
    printf("NA RENDA FIXA :%f reais\n",Total1);
    printf("NA RENDA VARIÁVEL:%f reais\n",RV1);
}
    return 0;
}
