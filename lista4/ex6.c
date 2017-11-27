#include <stdio.h>
#include <time.h>
#include <limits.h>

#define BIGNUM ULONG_MAX

typedef unsigned long int ulint;


ulint f1 (ulint x, ulint y)
{
  	return (x > y);
}


ulint f2 (ulint x, ulint y)
{
  	return (((y + (~x + 1)) >> 31) & 1);
}


int main (void)
{
  	clock_t tempo_init, tempo_fim;
  	double tempo_gasto;
  	ulint soma = 0;
  
  	tempo_init = clock();
  	for (int i = 0; i<100000; i++)
  	{
    	for (int j = 0; j<100000; j++)
    	{
        	soma += f1(i,j); 
    	}
  	}
  	tempo_fim = clock();
  
  	tempo_gasto = (double) (tempo_fim - tempo_init) / CLOCKS_PER_SEC;
  	printf("Tempo gasto na versão  normal %lf\n", tempo_gasto);
  
  	tempo_init = clock();
  	for (int i = 0; i<100000; i++)
  	{
    	for (int j = 0; j<100000; j++)
    	{
        	soma += f2(i,j); 
    	}
  	}
  	tempo_fim = clock();
  
  	tempo_gasto = (double) (tempo_fim - tempo_init) / CLOCKS_PER_SEC;
  	printf("Tempo gasto na versão  bitwise %lf\n", tempo_gasto);
  
  	return 0;
}
