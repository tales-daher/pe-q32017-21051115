#include <stdio.h>

	
int pal(int x) {
	
	int r = 0;
	int t = x;
	while (x > 0) {
		r = r*10 + (x%10);
		x = x/10;
	}
		
	if (t == r) {
		printf("sim");
	}
	if (t!= r) {
		printf("nao");
	}
	return 0;
}

void main() {

	int x;
	scanf("%d", &x);
	pal(x);
}
