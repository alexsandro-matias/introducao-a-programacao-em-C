
# include <stdio.h>

int funcaoPrimo(int num){
int  i , primo , cont = 0;


    for (i = 1 ; num >= i ; i++){
        if(num % i == 0){
            cont++;
        }

    }

    if(cont == 2)
    primo = num;
    else
    primo = 0;


    return primo;
}


int main(){
int numero , i , n , numeroPrimo , primo1 , i2;




    do
    {
        printf("digite um valor par:");
        scanf("%d" , &numero);
    } while (numero % 2 != 0);

//varrer de 1 até o número

        for (i2 = 1; numero >= i2 ; i++ ){
             numeroPrimo =  funcaoPrimo(i);

             if(numeroPrimo != 0){
                primo1 = numeroPrimo;
             }

            printf("%d\t" , primo1);
        }



   numeroPrimo =  funcaoPrimo(numero);

    if(numeroPrimo == 0)
        printf("O numero nao eh primo.");
  if(numeroPrimo == 1)
        printf("O numero eh primo");




return 0;
}
