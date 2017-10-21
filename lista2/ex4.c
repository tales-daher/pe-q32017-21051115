#include <stdio.h>
#include <math.h>


float soma(float x,float y) { 

	float som = x+y;
	if ( fmod(som,1) == 0) {
		printf("%d", (int)som);
	}
	else {
		printf("%.2f", som);
	}
}

float sub(float x,float y) {

	float sub = x-y;
	if ( fmod(sub,1) == 0) {
		printf("%d", (int)sub);
	}
	else {
		printf("%.2f", sub);
	}
}

float mult(float x,float y) {

	float mul = x*y;
	if ( fmod(mul,1) == 0) {
		printf("%d", (int)mul);
	}
	else {
		printf("%.2f", mul);
	}
}

float div(float x,float y) {

	float d = x/y;
	if ( fmod(d,1) == 0) {
		printf("%d", (int)d);
	}
	else {
		printf("%.2f", d);
	}
}

float pot(float x,float y) {

	float p = pow(x,y);
	if ( fmod(p,1) == 0) {
		printf("%d", (int)p);
	}
	else {
		printf("%.2f", p);
	}
}


void main() {

	int o;
	float x, y;

	scanf("%d %f %f", &o, &x, &y);
	
	switch(o) {

		case 1:
			soma(x,y);
			break;

		case 2:
			sub(x,y);
			break;

		case 3:
			mult(x,y);
			break;

		case 4:
			div(x,y);
			break;

		case 5:
			pot(x,y);
			break;
	}
}
