#include <stdio.h>
#include <stdlib.h>

int cmpfunc ( const void * a, const void * b) {

	return ( *(int*)a - *(int*)b );
}

float mediana ( float vetor[], int n ) {

	float med;

	if ( n%2 == 0) {
	
		med = ( vetor[(n/2)] + vetor[(n/2)-1] )/2;
	} else {

		med = (vetor[(n/2)]);
	}
}

int main () 
{

	int n;
	scanf("%d", &n); 

	float vetor[n];
	
	for (int i = 0; i < n; i++) {

		scanf("%f", &vetor[i]);
	}

	qsort (vetor, n, sizeof(int), cmpfunc);

	printf("%.2f", mediana (vetor , n) );

	return 0;
}
