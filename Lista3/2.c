#include <stdio.h>

void inverso (char *s) {
	int count = 0;	
	while (*s) {
		count++;
		s++;
	}
	
	for (int i = 1; i <= count; i++) {
		printf("%c", *(s-i));
	}


	
}

void main () {
	char entrada[255];
	fgets(entrada,255,stdin);
	inverso(&entrada[0]);
}
