#include <stdio.h>
#include <stdlib.h>

/*

13. Fazer um programa para ler 5 valores e, em seguida, mostrar a posição onde se encon-
tram o maior e o menor valor.

*/

int main()
{

    int posicao [4] , maior = 0 , menor = 0 ,i , posicaoMaior , posicaoMenor , aux;

    for (i = 0 ; i < 5 ; i++){
    printf("Digite o %dº número:" , i+1);
    scanf("%d" , &posicao[i]);

    aux = posicao[i];



    if(aux > maior){
    maior = aux;
    posicaoMaior = i+1;

    }


    if( (aux < menor) && (maior>menor) ){
    menor = aux;
    posicaoMenor = i;

    }



    }
    printf("O maior número digitado foi %d e sua respectiva posição foi %d.\n\n" , maior , posicaoMaior);

    printf("O menor número digitado foi %d e sua respectiva posição foi %d\n\n" , menor, posicaoMenor);



    printf("\n");
    return 0;
}
