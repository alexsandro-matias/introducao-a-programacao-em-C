
/*
3) Escreva um algoritmo em C que solicita o total gasto pelo cliente de
uma loja, imprime as opções de pagamento, solicita a opção desejada e
imprime o valor total das prestações (se houverem).

a) Opção: a vista com 10% de desconto
b) Opção: em duas vezes (preço da etiqueta)
c) Opção: de 3 até 10 vezes com 3% de juros ao mês (somente para compras
acima de R$ 100,00).

*/

float pagamento(int opcao , float valor){   // Calcula primeiramente a média
    float parcela;
    int quantidadeParcelas;

    if(opcao == 1){
    parcela = valor*0.9;

    return parcela;
    }

    if(opcao == 2){
    parcela = valor / 2;
    return parcela;
    }

    if(opcao == 3){
    printf("Digite a quantidade de parcelas:");
    scanf("%d" , &quantidadeParcelas);
    parcela = valor * 1,03 * quantidadeParcelas;
    return parcela;

   }


    return 0;
    }


int main(){

    float valor = 1 , resultado = 1;
    int opcao = 1;

    printf("Digite uma dessas opcoes:\n\n");
    printf("****************************************************************************\n");
    printf("\n1 - A vista com 10%% de desconto\n");
    printf("2 - Em duas vezes (preco da etiqueta)\n");
    printf("3 - De 3 ate 10 vezes com 3%% a.m somente para compras maiores de R$ 100\n\n");
    printf("****************************************************************************\n\n");
    scanf("%d" , &opcao);

    printf("****************************************************************************\n\n");
    printf("Digite o valor do produto:");
    scanf("%f" , &valor);

    resultado = pagamento(opcao , valor);

    printf("O valor pago sera %.2f" , resultado);





    return 0;
    }
