#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, valor,verificador = 0, x;
    int vetor[]={-999999,-999999,-999999,-999999,-999999,-999999,-999999,-999999,-999999,-999999};//valores de pouca possibilidade de serem inseridos

    for(i=0;i<10;i++)//For que vai determinar onde o valor vai ser salvo dentro do vetor
    {
        do
        {
            printf("Digite o %do valor: ",i+1);
            scanf("%d", &valor);
            for(x=0;x<10;x++)//for que percorre todo o vetor para buscar o valor
            {
                verificador = 0;/* A variável 'verificador' precisa ter valor ‘0’,
                pois se ficar com valor ‘1‘ não entra no IF que salva no vetor*/

                if (valor == vetor[x])/* Se já existir ele printa a mensagem e altera o valor de ‘verificador ‘
                e com isso volta a printar : “digite o valor”*/
                {
                    printf("\nValor ja existente no vetor, digite outro valor!\n");
                    verificador = 1;
                    break;
                }
            }

            if(verificador == 0)/*Se nao existir no vetor ele não altera o valor de 'verificador'
            e com isso entramos neste IF e salva no vetor*/
            {
                vetor[i] = valor;
                verificador = 0;
            }


        }while(verificador == 1);
    }

    for(i=0;i<10;i++)//Printa todos os valores do vetor
    {
        printf(" %d",vetor[i]);
    }

    system("PAUSE");
    return 0;
}
