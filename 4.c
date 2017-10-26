#include <stdio.h>

int printar( int n[3][3]) {
	for (int i = 0; i < 3; i++) {
		printf("\n");
		for (int j = 0; j < 3; j++) {
			printf("%d", n[i][j]);
		}
	}
}

int transposta( int m[3][3]) {
	int aux;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < i; j++) {
			if (i != j){
				aux = m[i][j];
				m[i][j] = m[j][i];
				m[j][i] = aux;
			}
		}
	}

	printar(m);
}


void main() {
	int matriz[3][3];
	for (int i = 0; i <3; i++) {
		for (int j = 0; j < 3; j++) {
			scanf("%d", &matriz[i][j]);
		}
	}

	transposta(matriz);
}
