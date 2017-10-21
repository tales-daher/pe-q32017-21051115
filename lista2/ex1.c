#include <stdio.h>

void main(){

	int x, r;
	printf("Digite um numero para saber se é ímpar ou par\n");
	scanf("%d", &x);
	r = x%2;
	
	if(r==0) printf("É par\n");

	else { printf("É ímpar\n"); }

}
