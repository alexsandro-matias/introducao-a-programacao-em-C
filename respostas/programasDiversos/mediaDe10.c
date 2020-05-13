
# include <stdio.h>
# include <stdlib.h>
# include <math.h>

int main() {


    int media , nota = 1 , i = 1  , soma = 0;

    while(i <= 10){
    printf("digite a nota %d:" , i);
    scanf("%d" , &nota);
    soma = soma + nota;
    i++;
    }

    media = soma / i;


    printf("media = %d" , media);

	return 0;

}
