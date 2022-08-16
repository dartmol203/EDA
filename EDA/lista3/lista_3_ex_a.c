#include <stdio.h>
#include <stdlib.h>

typedef struct celula
{
    int dado;
    struct celula *prox;
} celula;
/*
void insere_inicio(celula *le, int x)
{

    celula *novo = (celula *)malloc(sizeof(celula));

    novo->dado = x;

    novo->prox = le->prox;

    le->prox = novo;
}
void insere_antes(celula *le, int x, int y)
{

    celula *novo;

    for (novo = le; novo->prox != NULL && novo->prox->dado != y; novo = novo->prox)
    {
    }

    insere_inicio(novo, x);
}

int remove_depois(celula *p)
{
    celula *lixo = p->prox;

    if (lixo != NULL)
    {
        int elemRemov;
        elemRemov = lixo->dado;
        p->prox = lixo->prox;
        free(lixo);
        return elemRemov;
    }
}

void remove_elemento(celula *le, int x)
{
    celula *lixo;
    for (lixo = le; lixo->prox != NULL && lixo->prox->dado != x; lixo = lixo->prox)
    {
    }
    remove_depois(lixo);
}

void remove_todos_elementos(celula *le, int x)
{
    celula *lixo;
    do
    {
        for (lixo = le; lixo->prox != NULL && lixo->prox->dado != x; lixo = lixo->prox)
        {
        }
        remove_depois(lixo);
    } while (lixo->prox != NULL);
}

celula *busca(celula *le, int x)
{
    celula *buscada = le->prox;

    for (buscada; buscada != NULL && buscada->dado != x; buscada = buscada->prox)
    {
    }
    return buscada;
}

celula *busca_rec(celula *le, int x)
{
    if (le->prox == NULL)
    {
        return NULL;
    }
    else if (le->prox->dado == x)
    {
        return le->prox;
    }
    else
    {
        return busca_rec(le->prox, x);
    }
}

void imprime(celula *le)
{

    celula *busca = le->prox;

    if (le->prox == NULL)
    {
        printf("NULL\n");
    }
    else
    {
        for (busca; busca != NULL; busca = busca->prox)
        {
            printf("%d -> ", busca->dado);
        }
        printf("NULL\n");
    }
}
void imprime_rec(celula *le)
{
    if (le->prox == NULL)
    {
        printf("NULL\n");
    }
    else
    {
        printf("%d -> ", le->prox->dado);
        imprime_rec(le->prox);
    }
}

void mescla_listas(celula *l1, celula *l2, celula *l3)
{

    l3->prox = l1->prox;
    celula *aux3;
    celula *aux2 = l2->prox;
    for (aux3 = l3; aux3->prox != NULL; aux3 = aux3->prox)
    {
        if (aux2 != NULL && aux2->dado < aux3->prox->dado)
        {
            celula *aux = aux2;
            aux2 = aux2->prox;
            aux->prox = aux3->prox;
            aux3->prox = aux;
        }
    }

    if (aux2 != NULL)
        aux3->prox = aux2;
}
*/
void divide_lista(celula *l, celula *l1, celula *l2)
{
    l = l->prox;

    for (l; l != NULL; l = l->prox)
    {
        if (l->dado % 2 == 0)
        {
            l2->prox = l;
            l2 = l2->prox;
        }
        else
        {
            l1->prox = l;
            l1 = l1->prox;
        }
    }
    l1->prox = NULL;
    l2->prox = NULL;
}
/*
int main()
{
    celula *le = malloc(sizeof(celula));

    le->prox = NULL;

    imprime(le);
    imprime_rec(le);

    insere_inicio(le, 15);

    imprime(le);
    imprime_rec(le);

    return 0;
}
*/