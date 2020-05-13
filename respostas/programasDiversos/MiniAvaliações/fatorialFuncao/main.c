


#include <stdio.h>


float funcaoFatorial(float n){

    float i = 1 , resultado = 1;
    while ( n >= i) {
        resultado = resultado * n ; 
        n--;
    }


    
    
    return resultado;


}


int main() {
    
    
    float fatorial , numero;
    
    printf("Digite um valor");
    scanf("%f" , &numero);
    
    fatorial = funcaoFatorial(numero);
    
    printf("O valor do fatorial é: %0.0f" , fatorial);
    


    return 0;
}

