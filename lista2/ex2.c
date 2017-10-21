#include <stdio.h>

void main() {

	double a, c, l, v;
	printf("Digite a altura, comprimento e a largura do objeto: ");
	scanf("%lf %lf %lf", &a, &c, &l);
	v = a*c*l;
	printf("%.2lf", v);
}
