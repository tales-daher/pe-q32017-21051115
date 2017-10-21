
#include <stdio.h>
#include <math.h>

void main() {

	double a, b, t, p, a1, Pi;
	a = 1;
	b = (1/sqrt(2));
	t = 0.25;
	p = 1;
	int n;

	for(n=0; n<10; n++) {

		a1 = (a+b)/2;
		b = sqrt(a*b);
		t = t - p*((a-a1)*(a-a1));
		p = 2*p;
		a = a1;

	}

	Pi = ((a+b)*(a+b))/(4*t);
	printf("%.20f \n", Pi);
}

