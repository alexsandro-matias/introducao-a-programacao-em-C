# include <stdio.h>
# define tamanho 6

    int primo(int j)
    {
    int i , cont = 0;

        for (i = 1 ; i <= j ; i++)
        {
            if(j % i == 0)
            cont++;

        }

        if(cont == 2)
        return 1;

        else
        return 0;

    }


    int main()
    {

    int numero[tamanho] , i = 1 , j = 1 , mmc = 1 ;

    for (i = 1; i <= tamanho ; i++)
    numero[i] = i;


    for (i = 1; i <= tamanho ; i++)
    {
        j = primo(j);

        if (j != 0)
        {
            numero[i] /= j;
            mmc = mmc * j;
        }


        j = i;
    }


    printf("%d" , mmc);

    }
