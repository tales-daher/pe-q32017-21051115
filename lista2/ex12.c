#include <stdio.h>

int fat (int x) {
	int fatorial;
	for  (fatorial = 1; x > 1; x = x-1){
		fatorial = fatorial*x;
	}
	return fatorial;
}

int binomial (int n,int k) {
	int bi;
	bi = fat(n)/(fat(k)*fat(n-k));
	return bi;
}
void main() {
	int n,k, bi;
	scanf("%d %d", &n, &k);
	bi = binomial(n,k);
	printf("%d", bi);
}
