#include <stdio.h>

int repetidos (int *n, int x) {
	int temp = *n;
	int repetidos = 1;
	for (int i = 1; i < x; i++) {
		if (*(n+i) == temp) {
			repetidos++;
		} else {
			if (repetidos > 1) {
				printf("%d - %d\n", temp, repetidos);
				repetidos = 1;
			}
			temp = *(n+i);
		}
	}
	if (repetidos > 1) {
		printf("%d - %d\n", temp, repetidos);
	}
}


void main () {
	int n, aux;
	scanf("%d", &n);
	int v[n];

	for (int i = 0; i < n; i++) {
		scanf("%d", &v[i]);
	}

	for (int k = 0; k <= n-2; k++) {
		for (int x = 0; x <= n-2; x++) {
			if (v[x]>v[x+1]) {
				aux = v[x];
				v[x] = v[x+1];
				v[x+1] = aux;
			}
		}
	}
	
	repetidos(&v[0], n);

}
