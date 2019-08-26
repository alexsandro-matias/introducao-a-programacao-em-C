#include <stdio.h>
#include <stdlib.h>

int dia(int x);//is it the way we write prototypes?
int mes(int y);//is it the way we write prototypes?
int ano(int z);//is it the way we write prototypes?

int main(void) {
	int d, m, a;
	printf("Digite Dia, mês e ano (separados por ENTERS.)\n");
	scanf("%d %d %d", &d, &m, &a);
	d=dia(d);
	printf("%d of ", d);
	mes(m);
	a=ano(a);
	printf(" of %d.", a);
	return 0;
}

int dia(x){
	int d=x;
	return d;
}

int mes(y){
	int m=y;
	if (m==1)printf("jan");
	else if (m==2)printf("feb ");
	else if (m==3)printf("mar ");
	else if (m==4)printf("april ");
	else if (m==5)printf("may ");
	else if (m==6)printf("jun ");
	else if (m==7)printf("july ");
	else if (m==8)printf("aug ");
	else if (m==9)printf("sep ");
	else if (m==10)printf("oct ");
	else if (m==11)printf("nov ");
	else if (m==12)printf("dec ");
	else printf("da fuck?");
/*I don't have to return anything because I'm already printing here.
p.s. change tht plese. lear how to send strings.*/
}

int ano(z){
	int a=z;
	return a;
}
