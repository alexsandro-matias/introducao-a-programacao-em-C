# include <stdio.h>


main(){

 int x = 10, y;

printf("x: %d\n", x);
printf("\n*** x++ incrementa o valor de x na próxima instrução ***\n");
printf("\tx: %d\n", x++);
printf("\tx: %d\n", x);
y = x++;

printf("\ty = x++ => y = %d e x = %d\n", y, x);
printf("\n*** ++x incrementa o valor de x de imediato ***\n");
printf("\tx: %d\n", ++x);
y = ++x;

printf("\ty = ++x => y = %d e x = %d\n", y, x);
printf("Os operadores de decremento funcionam de forma análoga");



    return 0;
    }
