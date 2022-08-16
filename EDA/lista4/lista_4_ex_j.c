#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct celula
{
    char dado[101];
    struct celula *prox;
} celula;

celula *cria_pilha()
{
    celula *novo = malloc(sizeof(celula));
    novo->prox = NULL;
    return novo;
}

int empilha(celula *p, char x[])
{
    celula *novo = malloc(sizeof(celula));
    if (novo == NULL)
    {
        return 0;
    }
    strcpy(novo->dado, x);
    novo->prox = p->prox;
    p->prox = novo;
    return 1;
}

int desempilha(celula *p, char y[])
{

    if (p->prox == NULL)
    {
        return 0;
    }
    celula *descarte = p->prox;
    strcpy(y, descarte->dado);
    p->prox = descarte->prox;
    free(descarte);
    return 1;
}
int main()
{

    int sucesso;
    celula *pilha = cria_pilha();

    char comando[101], saida[101];

    while (scanf(" %s", comando) != EOF)
    {
        if (comando[0] == 'd')
        {
            sucesso = desempilha(pilha, saida);
            if (sucesso)
            {
                printf("%s\n", saida);
            }
            else
            {
                printf("NULL\n");
            }
        }
        else if (comando[0] == 'i')
        {
            scanf(" %[^\n]s", comando);
            empilha(pilha, comando);
        }
    }

    return 0;
}