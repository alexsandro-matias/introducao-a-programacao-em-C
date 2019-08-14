#include <stdio.h>
#include <stdlib.h>

float pagamento(int opcao , float valor, int quantidadeParcelas){   // Calcula primeiramente a média
    float parcela;

    if(opcao == 1){
    parcela = valor * 0.9;
    return parcela;
    }

    if(opcao == 2){
    parcela = valor / 2;
    return parcela;
    }

    if(opcao == 3){

    if (valor > 100){
    parcela = (valor/quantidadeParcelas) * 1.03;
    return parcela;
                    }

    else
        return valor/quantidadeParcelas;

    }


    return 0;
    }


int main(){

    float valor , resultado;
    int opcao, quantidadeParcelas=1;

    printf("Digite uma dessas opcoes:\n\n");
    printf("****************************************************************************\n");
    printf("\n1 - A vista com 10%% de desconto\n");
    printf("2 - Em duas vezes (preco da etiqueta)\n");
    printf("3 - De 3 ate 10 vezes com 3%% a.m somente para compras maiores de R$ 100\n\n");
    printf("****************************************************************************\n\n");
    scanf("%d" , &opcao);

    if (opcao==3){
     printf("Digite a quantidade de parcelas:\n\n");
     scanf("%d" , &quantidadeParcelas);
    }

    printf("****************************************************************************\n\n");
    printf("Digite o valor do produto:");
    scanf("%f" , &valor);

    resultado = pagamento(opcao, valor, quantidadeParcelas);


     if (opcao==3){
     printf("o valor vai ficar %f em %d de %f " , (quantidadeParcelas*resultado), quantidadeParcelas, resultado);
    }
    else
    printf("O valor pago sera %.2f" , resultado);

    return 0;
    }
