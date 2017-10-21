#include <stdio.h>
#include <math.h>

int fatorial(int x) {

	int fat;
	for(fat=1; x>1; x--) {
		
		fat = fat*x;
	}
	return fat;
}

int binomial(int n, int k) {

	int bin;
	
	bin = fatorial(n)/(fatorial(k)*fatorial(n-k));
	
	return bin;
}

void main() {

	int bin, n, k;

	scanf("%d %d", &n, &k);
	bin = binomial(n,k);
	printf("%d  ", bin);
}
