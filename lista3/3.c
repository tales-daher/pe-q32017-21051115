#include <stdio.h>

int somavet (int *v1, int *v2) {

	for (int i = 0; i < 5; i++) {
		printf("%d ", (*v1+*v2));
		v1++;
		v2++;
	}

}


void main () {
	int v1[5],v2[5],i;
	for(i = 0; i < 5; i++) {
		scanf("%d", &v1[i]);
	}
	for(i = 0; i < 5; i++) {
		scanf("%d", &v2[i]);
	}

	somavet(&v1[0],&v2[0]);
}
