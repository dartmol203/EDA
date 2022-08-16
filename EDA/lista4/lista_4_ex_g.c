#include <stdlib.h>
#include <stdio.h>

typedef struct celula
{
    int dado;
    struct celula *prox;
} celula;

int desenfileira(celula *f, int *y)
{

    if (f->prox == NULL)
    {
        return 0;
    }
    celula *retira = f->prox;
    *y = retira->dado;
    f->prox = retira->prox;
    free(retira);

    return 1;
}

celula *enfileira(celula *f, int x)
{

    celula *nova = malloc(sizeof(celula));

    if (nova == NULL)
    {
        return NULL;
    }

    nova->prox = f->prox;
    f->prox = nova;
    f->dado = x;

    return nova;
}