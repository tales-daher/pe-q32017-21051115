#include <stdio.h>

int e_vogal (char a) {

	char vogais[10] = "AaEeIiOoUu";
	int i;
	for (i = 0; i < 10; i++) {
		if (a == vogais[i])	return 1;
	}
	return 0;
}

int conta_vogal ( const char *s) {

	
	int n=0;
	while (*s) {
		n += e_vogal(*s);
		s++;
	}	
	return n;
}


void main() {
	char entrada[255];
	fgets(entrada, 255, stdin);
	printf("%d", conta_vogal(&entrada[0]));
}
