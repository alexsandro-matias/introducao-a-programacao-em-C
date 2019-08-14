/** 11 - Elabore uma func˜ao que receba tres notas de um aluno como parametros e uma letra.
Se a letra for A, a funcao devera calcular a media aritmetica das notas do aluno; se for P,
deverá calcular a média ponderada, com pesos 5, 3 e 2.
 *
 */

#include <stdio.h>
#include <stdlib.h>




float mediadeTres(float a , float b , float c , char tipo){
    if((tipo == 'A') || (tipo == 'a')){
        return ((a + b + c)/3 );

    }

    if ( (tipo == 'P') || (tipo == 'p'))
        return( (a*5 + b*3 + 2*c)/10);


}



int main()
{
    float primeiraNota , segundaNota , terceiraNota , media;
    char tipoMedia;


    printf("=======================================\n");
    printf("Calculo de media ponderada e aritmetica\n");

    printf("Selecione o tipo de media:\n");
    printf("A - Aritmetica\n");
    printf("P - Ponderada com os pesos de 5, 3 e 2 respectivamente\n");
    scanf("%c" , &tipoMedia);

    printf("digite a primeira nota:");
    scanf("%f" , &primeiraNota);
    printf("digite a segunda nota:");
    scanf("%f" , &segundaNota);
    printf("digite a terceira nota:");
    scanf("%f" , &terceiraNota);




    media = mediadeTres(primeiraNota , segundaNota , terceiraNota , tipoMedia);

    if ( (tipoMedia == 'a') || (tipoMedia == 'A'))
    printf("A media aritmetica entre os numero foi %f" , media);

    if ( (tipoMedia == 'p') || (tipoMedia == 'P'))
    printf("A media Ponderada entre os numero foi %f" , media);


    return 0;
}