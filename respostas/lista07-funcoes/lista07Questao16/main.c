#include <stdio.h>
#include <stdlib.h>

//
//16. Faça uma funç˜ao chamada DesenhaLinha. Ele deve desenhar uma linha na tela usando
//vários símbolos de igual:
//
//(Ex: ========).
//
//A funç˜ao recebe por parâmetro quantos sinais
//de igual ser˜ao mostrados.

void DesenhaLinha(int quantidadeSinais)
{
    for (int i = 0; i < quantidadeSinais ; i++ )
    {
        printf(" * ");
    }

}

int main()
{
    int numeroSimbolos = 0;
    printf("Digite a quantidade Simbolos que deseja mostrar: ");
    scanf("%d", &numeroSimbolos);
    DesenhaLinha(numeroSimbolos);

    return 0;
}
