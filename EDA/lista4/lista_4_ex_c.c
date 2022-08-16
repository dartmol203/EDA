#include <stdio.h>
#include <stdlib.h>

typedef struct celula
{
    int dado;
    struct celula *prox;
} celula;

int desempilha(celula *p, int *y)
{

    if (p->prox == NULL)
    {
        return 0;
    }
    celula *descarte = p->prox;
    *y = descarte->dado;
    p->prox = descarte->prox;
    free(descarte);
    return 1;
}

int empilha(celula *p, int x)
{
    celula *novo = malloc(sizeof(celula));
    if (novo == NULL)
    {
        return 0;
    }
    novo->dado = x;
    novo->prox = p->prox;
    p->prox = novo;
    return 1;
}