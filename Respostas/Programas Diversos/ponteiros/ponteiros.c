/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ponteiros.c
 * Author: alexsandro
 *
 * Created on 15 de Junho de 2016, 21:03
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main() {
    
    int teste = 500;
    
    int * point1 , *point2;
    
    point1 = &teste;
    
    point2 = point1;
    
    printf("\n No local %p\n" , point2); // endereço Hexadecimal
    
    printf("encotra-se o valor %d \n" , *point2); // valor de teste

    
    return (EXIT_SUCCESS);
}

