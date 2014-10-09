#include <stdio.h>
#include <stdlib.h>
#include "Lista.h"

void mostra_float(void *);

int main()
{
    Lista l1;
    inicializa_lista(&l1, sizeof(float));
    float x = 7.0, y;
    insereNoInicio(&l1, &x);
    x = 2.0;
    insereNoInicio(&l1, &x);
    x = 3.0;
    insereNoInicio(&l1, &x);
    x = 4.0;
    insereNoFim(&l1, &x);
    x = 5.0;
    insereNoFim(&l1, &x);
    insereNaPosicao(&l1, &x, 1);
    removeDoInicio(&l1, &y);
    removeDoFim(&l1, &y);
    mostra_lista(l1, mostra_float);
    x = 20.0;
    modificaNaPosicao(&l1, &x, 0);
    printf("\n");
    removeNaPosicao(&l1, &x, 4);
    mostra_lista(l1, mostra_float);
    printf("%f\n", x);
    leNaPosicao(&l1, &x, 5);
    printf("%f\n", x);
    return 0;
}

void mostra_float(void *info)
{
    float *p = (float*)info;
    printf("%f\n", *p);
}
