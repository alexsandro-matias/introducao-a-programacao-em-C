
/*
2) Crie uma função que verifica se um número é primo e retorne 1, caso o número
seja primo e 2, caso não.

*/

int verificaPrimo(int numero){   // Calcula primeiramente a média
    int i , cont = 0 ;

      for (i = 1; numero >= i ; i++)
          if(numero % i == 0)
            cont++;

        if (cont == 2)
            return 1;
        else
            return 2;


    }


int main(){

    int numero , resultado;


    printf("digite o valor para verificação se eh primo:");
    scanf("%d" , &numero);

    resultado = verificaPrimo(numero);

    if( resultado == 1)
        printf("O numero eh primo");

    else
        printf("O numero nao eh primo");





    return 0;
    }
