#include <stdio.h>
#include <math.h>

int decTObin(int n){

	int b[50], i=0, j;

	while(n>0) {
		b[i]=n%2;
		i = i+1;
		n = n/2;
	}

	for (j = i-1; j>=0; j=j-1) {
		printf("%d", b[j]);
	}
}

int binTOdec (int n) {
	int dec = 0, d = 1;
	while (n!=0) {
		dec = dec+(n%10)*d;
		d = d*2;
		n = n/10;
	}
	printf("%d", dec);
}

void main() {

	int n, o, i, j;
	scanf("%d %d", &n, &o);

	switch (o) {

		case 1:
			decTObin(n);
		break;

		case 2:
			binTOdec(n);
		break;
	}
}

