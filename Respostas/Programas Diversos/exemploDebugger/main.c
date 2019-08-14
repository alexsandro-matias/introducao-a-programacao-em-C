#include <stdio.h>
#include <stdlib.h>

/*

*/
// tipo *nome;


main() {
    
    float variavel = 250.7; 
    float *ponteiro;
    float exibe;  // variável vai mostrar o valor de 250
    
    ponteiro = &variavel;
    
    exibe = *ponteiro;  // recebe o endereço que o ponteiro aponta
    
    printf("variavel = %f\n" , variavel);
    printf("endereço de memória = %p\n" , &variavel);
    printf("ponteiro = %p\n" , ponteiro);
    printf("endereço do ponteiro = %f\n" , *ponteiro);
    
    
    
    return (EXIT_SUCCESS);
}

