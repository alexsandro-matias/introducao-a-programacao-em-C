#include <stdio.h>
#include <stdlib.h>
#include <math.h>



float valorFixo(float capitaInicial , short int tempo){

    float rendimento, taxa = 0.005; // taxa de 5% a.m

/*
Como o cálculo está vinculado a um valor de renda Fixa, O cálculo somente vai
englobar o valor inicial

 */
    rendimento = capitaInicial * pow(1.0095 , tempo);

    return rendimento;

}

float valorVariavel(float aporte){

    float rendimento = 0 , soma = 0 , lucro;

    rendimento = aporte * 1.002;

    return rendimento;




}



int main()
{
    char ;
    short int tempo = 0 , i, opcao = 1 ;
    float valorInicial = 0 , rendaFixa = 0 , rendaVariavel = 0 , lucroRendaFixa = 0;
    float lucroRendaVariavel , aporte , somatorioAportes = 0 , somatorioRendaVariavel = 0;


    printf("==============================================================\n");
    printf("Considere as seguinte possibilidades de investimento:=========\n");
    printf("1 - Um valor Inicial por um tempo fixo\n");
    printf("2 - Aportes varáveis mensais por períodos que você deseja\n");

    printf("Para o primeiro caso, digite um valor inicial:");
    scanf("%f" , &valorInicial);

    printf("Digite um tempo em meses do investimento:");
    scanf("%d" , &tempo);

    rendaFixa = valorFixo(valorInicial , tempo);

    lucroRendaFixa = rendaFixa - valorInicial;




    // Renda Variável

    printf("Agora vamos para a segunda Situação.");



    while( opcao == 1){

    printf("Digite um valor de aporte:");
    scanf("%f" , &aporte);

    somatorioAportes = somatorioAportes + aporte;

    rendaVariavel = valorVariavel(aporte);

    somatorioRendaVariavel = somatorioRendaVariavel + rendaVariavel;

    printf("Pretente adicionar mais valor de aporte?\n");
    printf("1 - SIM\n");
    printf("2 - NÃO\n");

    scanf("%d" , &opcao);



    }



    lucroRendaVariavel = somatorioRendaVariavel - somatorioAportes;

    printf("%f - Lucro varialvel\n" , lucroRendaVariavel);
    printf("%f - somatorio dos aportes\n" , somatorioAportes);
    printf("%f - renda varialvel\n" , rendaVariavel);




    return 0;
}
