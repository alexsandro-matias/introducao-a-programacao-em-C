# include <stdio.h>
# define TAMANHO 3


struct dados
{

char nome[50];
char sexo;
int telefone;

};

struct dados pessoa[TAMANHO];

int main ()
{
    int i = 0 , maior = 0 , indiceMaior;
    
        
    for (i = 0 ; i < TAMANHO ; i++)
    
    {    
		
	printf("Disciplina ......: ");
	fflush(stdin); 
	fgets(aluno.disciplina, 40, stdin);
    
    printf("Digite o nome da pessoa:");
	fflush(stdin);
	fgets(pessoa.nome , 50 , stdin);

	printf("Digite o sexo da pessoa:");
	scanf("%c" , &pessoa[i].sexo);
	
	
	printf("Digite o salário da pessoa:");
	scanf("%f" , &pessoa[i].salario);
	
	
	printf("Digite a idade da pessoa:");
	scanf("%i" , &pessoa[i].idade);

       
    
    }
    
 
    maior = pessoa[0].salario;
    
    
    for (i = 0 ;  i < TAMANHO ; i++)
    {
        if(pessoa[i + 1].salario > pessoa[i].salario)
        {
        maior = pessoa[i+1].salario;
        indiceMaior = i; 
        
        }
    
    
    }
    
    printf("O bom da boca: %s\n" , pessoa[i].nome);
    
    printf("O salário dele: %f\n" , pessoa[i].salario);
    
	
	






}
	
