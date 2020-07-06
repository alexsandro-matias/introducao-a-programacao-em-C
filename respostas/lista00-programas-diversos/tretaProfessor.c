


int soma; //Declaração de variável global
/*
A função soma recebe dois inteiros e não retorna nenhum valor. Armazena o resultado da soma na variável global soma.
*/
void somar(int a, int b) {
soma = a + b; //Observe a utilização da variável global "soma“
return soma;
}
/*
 A função subtrair recebe dois inteiros e não retorna nenhum
 valor. Imprime o resultado da subtração dos dois números recebidos.
*/
void subtrair(int a, int b) {
int subtracao; //Declaração de variável local
subtracao = a - b;
printf("%d - %d = %d\n", a, b, subtracao); //Imprime a subtração
}


int main(){

int n1 , n2 , testesoma , testesubtracao;

printf("digite um número");
scanf("%d" , &n1);


printf("digite outro números");
scanf("%d" , &n2);

testesoma = somar(n1 , n2);

printf("%d" , testesoma);



return 0;
}
