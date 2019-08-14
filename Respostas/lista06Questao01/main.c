
#include <stdio.h>
#include <stdlib.h>


/*
 
 1. Escreva um trecho de código para fazer a criação dos novos tipos de dados conforme
solicitado abaixo:
• Horário: composto de hora, minutos e segundos.
• Data: composto de dia, mês e ano.
• Compromisso: composto de uma data, horário e texto que descreve o compromisso.

 
 */

struct comprimisso
{
    int horas , minutos , dia , ano , mes;
}comprimisso;
          


int main() 
{
    printf("----- COMPROMISSO\n ------");
    printf("Digite a data do comprimisso: (DD/MM/AAAA)");
    scanf("%d%d%d" , &comprimisso.dia , &comprimisso.mes , &comprimisso.ano );
    
    printf("Digite o horário do comprimisso: (HH:MM)");
    scanf("%d:%d" , &comprimisso.horas , );
    
    
    printf("Compromisso salvo:\n");
    printf("Seu compromisso será de %d/%d/%d às %d:%d" , data.dia data.mes data.ano
                                                         horario.horas horario.minutos);
    
    
    
    
    
    
    return (EXIT_SUCCESS);
}

