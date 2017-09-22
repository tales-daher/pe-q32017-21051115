#include <stdio.h>

int main() {
	int valor;
	printf("Entre com um valor\n");
	scanf("%d", &valor);
	
	if ((valor%2) == 0) {
		printf("Numero é par\n");
	} else {
		printf("Número é ímpar\n");
	}

	return 0;
}	
