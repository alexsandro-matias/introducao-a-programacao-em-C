#include <stdio.h>
int main(){
    char name[50],ch;
    int i=0;
    printf("Enter name: ");
    while(ch!='\n')    // terminates if user hit enter
    {
        ch=getchar();
        name[i]=ch;
        i++;
    }
    name[i]='\0';       // inserting null character at end
    printf("Name: %s",name);
    
    
    printf("Deseja continuar no programa? Digite '1' para continuar ou qualquer tecla para sair");
    
    if()
    return 0;
}