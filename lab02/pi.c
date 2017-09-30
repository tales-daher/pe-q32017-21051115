#include <math.h>
#include <stdio.h>

#define C1 (2*sqrt(2)/9801)

int fatorial(int fat){
	int z;	
	for(z=1; fat>1; fat--){
	z = z*fat;
    }
    return z;
}
float den(int k){
    float den;
    den = pow(fatorial(k),4)*pow(396,(4*k));
    return den;
}
float soma(int k){
    float z=0;
    for(float x=0; x<k; x++){
    z += fatorial(4*x)*(1103+(26390*x))/den(x);

    }
    return z;
}
int main(){
    int k;
    float inv;
    float pi;
    printf("Digite valor de k ");
    scanf("%d", &k);
    inv = C1*soma(k);
    pi = 1/inv;
    printf("%f ", pi);
}
