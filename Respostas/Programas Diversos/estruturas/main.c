
#include <stdio.h>
#include <stdlib.h>



struct pessoas
{
 char nome[50]; 
 char cidadeOndeMora[50];
 char sexo;
}; 
          


int main() 
{
    
    struct pessoas aluno;
    
    
    printf("Nome:");
    scanf("%50s" , &aluno.nome);
   

    
    
    printf("Nome: %s\n" , aluno.nome);
    
    
      
    return (EXIT_SUCCESS);
}

