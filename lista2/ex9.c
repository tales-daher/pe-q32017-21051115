#include <stdio.h>

int pot(int x, int y){

	if(y==0) return 1;
	return x*pot(x,y-1);
}

void main(){

	int x, y, p;
	scanf("%d %d", &x, &y);
	p = pot(x,y);
	printf("%d   ", p);
} 
