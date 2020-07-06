
# include <stdio.h>
# include <stdlib.h>
# include <math.h>

int main() {
int a, b, operacao;
printf("Informe dois números inteiros positivos:");
scanf("%d%d", &a, &b);
printf("1.Adição\t 2.Subtração\t 3.Multiplicação\t 4.Divisão\t 5.Resto:");
scanf("%d", &operacao);
switch (operacao)
{
	case 1: printf("%d + %d = %d\n", a, b, a + b);
		break; //Impede que os próximos casos sejam executados
	case 2: printf("%d - %d = %d\n", a, b, a - b);
		break;
	case 3: printf("%d * %d = %d\n", a, b, a * b);
		break;
	case 4: printf("%d / %d = %d\n", a, b, a / b);
		break;
	case 5: printf("%d %% %d = %d\n", a, b, a % b);
		break;
	default: printf("Operação desconhecida\n"); //Outro caso (opcional)
}
	return 0;

}
