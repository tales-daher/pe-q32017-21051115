#include <stdio.h>
#include <math.h>

double baskaraN (double a, double b, double c) {
    double delta = pow(b,2) - 4*a*c;
    double r1;
    if (delta < 0) {
        printf ("%.2lf - %.2lfi ", (-b/2*a), sqrt(-delta)/2*a);
    } else {
        r1 = (-b - sqrt(delta))/(2*a);
        printf("%.2lf ", r1);
    }

}

double baskaraP (double a, double b, double c) {

    double delta = pow(b,2) - 4*a*c;
	double r2;

    if (delta < 0){

    printf ("%.2lf + %.2lfi",(-b/(2*a)), sqrt(-delta)/2*a);
    }
	
	else{

	    r2 = (-b + sqrt(delta))/(2*a);
	    printf("%.2lf ", r2);
	}

}

void main() {

	double a, b, c, r1, r2;
	scanf("%lf %lf %lf", &a, &b, &c);
	baskaraN(a,b,c);
	baskaraP(a,b,c);
}
