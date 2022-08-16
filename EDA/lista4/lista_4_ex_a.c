#include <stdio.h>
#include <stdlib.h>

typedef struct pilha
{
    int *dados;
    int N, topo;
} pilha;

int desempilha(pilha *p, int *y)
{

    if (p->topo == 0)
    {
        return 0;
    }
    else
    {
        p->topo--;
        *y = p->dados[p->topo];
        return 1;
    }
}

int empilha(pilha *p, int x)
{

    if (p->topo == p->N)
    {
        p->dados = realloc(p->dados, 2 * p->N * sizeof(int));
        if (p->dados == NULL)
        {
            return 0;
        }
        p->N = 2 * p->N;
    }
    p->dados[p->topo] = x;
    p->topo++;
    return 1;
}