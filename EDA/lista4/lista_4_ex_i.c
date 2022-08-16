#include <stdlib.h>
#include <stdio.h>

typedef struct celula
{
    int dado;
    struct celula *prox;
} celula;

celula *cria_fila()
{
    celula *novo = malloc(sizeof(celula));
    novo->prox = NULL;
    return novo;
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

int main()
{

    int qntCartas, descarte, sucesso;

    scanf("%d", &qntCartas);

    celula *pilhaCartas = cria_fila();

    for (int i = 1; i <= qntCartas; i++)
    {
        pilhaCartas = enfileira(pilhaCartas, i);
    }

    printf("Cartas descartadas:");

    for (int i = 0; i < qntCartas - 2; i++)
    {

        sucesso = desenfileira(pilhaCartas, &descarte);
        if (sucesso)
        {
            printf(" %d,", descarte);
        }

        sucesso = desenfileira(pilhaCartas, &descarte);
        if (sucesso)
        {
            pilhaCartas = enfileira(pilhaCartas, descarte);
        }
    }

    sucesso = desenfileira(pilhaCartas, &descarte);
    if (sucesso)
    {
        printf(" %d\n", descarte);
    }

    sucesso = desenfileira(pilhaCartas, &descarte);

    printf("Carta restante: %d", descarte);

    return 0;
}