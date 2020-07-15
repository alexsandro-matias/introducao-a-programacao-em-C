#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i , contador = 0;

    for (i = 1000 ; contador < 5  ; i++ )
    {
        if(i%11 == 5)
        {
            contador++;

        }
        printf("numero = %d\n" , i);

    }



    return 0;
}
