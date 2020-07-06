#include <stdio.h>
#include <stdlib.h>
#define tamanho 4

int main()
{
    int numeros[tamanho] , i , j , aux ;

    for (i = 0 ; i < tamanho ; i++ )
    {
        printf("Digite %d valor: " , i+1);
        scanf("%d" , &numeros[i]);
    }

    for (i = 0 ; i < tamanho - 1 ; i++)
    {
        for (j = i + 1 ; j < tamanho; j++ )
        {
            if(numeros[i] > numeros[j])
            {
                aux = numeros[j];
                numeros[j] = numeros[i];
                numeros[i] = aux;
            }
        }

    }


    for (i = 0 ; i < tamanho ; i++)
    printf("%d\t" , numeros[i]);

}
