#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct ponto3d {
float x;
float y;
float z;
} ponto3d;

ponto3d Deltaf(ponto3d p1, ponto3d p2)
{
    ponto3d delta;
    delta.x=(p1.x-p2.x);
    delta.y=(p1.y-p2.y);
    delta.z=(p1.z-p2.z);
    return delta;
}

float somaquadrados(ponto3d delta)
{
    return (pow(delta.x,2.0)+pow(delta.y,2.0)+pow(delta.z,2.0));
}

float distancia( ponto3d p1, ponto3d p2)
{
    float distp1p2;

    return sqrt(somaquadrados(Deltaf(p1,p2)));
}

int main ()
{
    ponto3d p1,p2;

    scanf ("%f , %f , %f" ,&(p1.x) , &(p1.y), &(p1.z) );
    scanf ("%f , %f , %f" ,&(p2.x) , &(p2.y), &(p2.z) );

    printf("%.2f", distancia(p1,p2));

    return 0;
}


