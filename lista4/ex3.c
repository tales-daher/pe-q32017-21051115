#include <stdio.h>
#include <stdlib.h>

typedef struct ficha {
char nome[100];
int ra;
float p1;
float p2;
float p3;
float media;
} ficha;


int main ()
{

    FILE *arq; // cria um ponteiro pra abrir o arquivo
    FILE *arq2;
    arq = fopen("lista_alunos.txt", "rt");
    arq2 = fopen("media_alunos.txt", "w+");
    float media;

    if (arq == NULL)  // Se houve erro na abertura
    {
        printf("Problemas na abertura do arquivo\n");
    }

    printf("O arquivo foi lido com sucesso\n");

    ficha alunos[50];
    char *resultado;
    int i;
    i = 0;

    while (i!=50)
    {
        fscanf (arq, "\%s \%d \%f \%f %f",&alunos[i].nome, &alunos[i].ra ,&alunos[i].p1, &alunos[i].p2, &alunos[i].p3 );
        media=(alunos[i].p1+alunos[i].p2+alunos[i].p3)/3;
        fprintf (arq2, "\%s \%d %.2f\n",alunos[i].nome, alunos[i].ra , media );
        i++;
    }

    return 0;
}

