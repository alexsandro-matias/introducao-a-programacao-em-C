# include <stdio.h>

int funcaoPrimo(int num){
int  i , primo , cont = 0;


    for (i = 1 ; num >= i ; i++){
        if(num % i == 0)
        cont++;
    }

    if(cont == 2)
    primo = num;
    else
    primo = 0;


    return primo;
}


int main(){
int numero , i , n , testePrimo , numeroPrimo , diferenca , i2 , primo1 , primo2;

printf("digite um valor:");

scanf("%d" , &numero);


   for (i = 1 ; testePrimo >= i ; i++){

    i = funcaoPrimo(i);

    if(i!=0)
    diferenca = numero - i;

    i2 = funcaoPrimo(diferenca);

    if( (diferenca!=0) && (numero==diferenca+i2) ){
       primo1 = i;
       primo2 = diferenca;
       }
   }

}
