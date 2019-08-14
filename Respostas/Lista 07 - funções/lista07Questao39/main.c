#include <stdio.h>
#include <stdlib.h>

/*

39 - Faca uma func˜ao ‘Troque’, que recebe duas variaveis reais A e B e troca o valor delas
(i.e., A recebe o valor de B e B recebe o valor de A).


*/

void mudancaOrdem(int a , int b){
    int aux ;
    aux = a;
    a = b;

    printf("o primeiro numero agora vai ser %d e o segundo vai ser %d" , a , aux );


    return 0;

}



int main()
{
    int numero1 , numero2;

    printf("Digite o primeiro numero:");
    scanf("%d" , &numero1);

    printf("Digite o segundo numero:");
    scanf("%d" , &numero2);

    mudancaOrdem(numero1 , numero2);







    return 0;
}
