#include <stdio.h>
#include <stdlib.h>


typedef struct tempo {
int min;
int sec;
int csec;
} tempo;

int transforma_tempo_csec(tempo t)
{
    return (t.csec+(100*t.sec)+(6000*t.min));
}

tempo transforma_csec_tempo(int t_csec)
{
    tempo t;

    t.min=t_csec/60000;
    t_csec%=60000;

    t.sec=t_csec/100;
    t_csec%=100;

    t.csec=t_csec;

    return t;
}

int Dif_csec(tempo t2,tempo t1)
{
    return transforma_tempo_csec(t2)-transforma_tempo_csec(t1);
}

int maior (tempo t2,tempo t1)
{
    return Dif_csec(t2,t1)>=0;
}

tempo Delta_t(tempo t2, tempo t1)
{
    int delta_csec;
    tempo delta_tempo;

    delta_csec=Dif_csec(t2,t1);

    delta_tempo=transforma_csec_tempo(delta_csec);

    return delta_tempo;
}

int diferenca(tempo t1, tempo t2)
{
    tempo delta_tempo;

    if (maior(t2,t1)){
        delta_tempo=Delta_t(t2,t1);
        printf("%dm %ds %d\n", delta_tempo.min, delta_tempo.sec, delta_tempo.csec);
    } else {
        delta_tempo=Delta_t(t1,t2);
        printf("-%dm %ds %d\n", delta_tempo.min, delta_tempo.sec, delta_tempo.csec);
    }

    return 0;
}


int main ()
{
    tempo t1,t2,deltat;

    scanf ("%dm %ds %d" ,&(t1.min) , &(t1.sec), &(t1.csec) );
    scanf ("%dm %ds %d" ,&(t2.min) , &(t2.sec), &(t2.csec) );

    diferenca(t1,t2);
    return 0;
}

