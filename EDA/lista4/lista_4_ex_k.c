#include <stdio.h>
#include <stdlib.h>

typedef struct celula
{
    char dado;
    struct celula *prox;
} celula;

celula *cria_pilha()
{
    celula *novo = malloc(sizeof(celula));
    novo->prox = NULL;
    return novo;
}

int empilha(celula *p, char x)
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

int desempilha(celula *p, char *y)
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

int main()
{
    int i = 0, sucesso, flag = 0;

    char expressao[501], saida;

    scanf(" %s", expressao);

    celula *pilha = cria_pilha();

    while (expressao[i] != '\0')
    {
        if (expressao[i] == '[' || expressao[i] == '{' || expressao[i] == '(')
        {
            empilha(pilha, expressao[i]);
        }
        if (expressao[i] == ']' || expressao[i] == '}' || expressao[i] == ')')
        {
            sucesso = desempilha(pilha, &saida);
            if (!sucesso)
            {
                flag = 1;
                break;
            }

            switch (expressao[i])
            {
            case ']':
                if (saida != '[')
                {
                    flag = 1;
                }
                break;
            case '}':
                if (saida != '{')
                {
                    flag = 1;
                }
                break;
            case ')':
                if (saida != '(')
                {
                    flag = 1;
                }
                break;
            default:
                break;
            }
        }
        i++;
    }
    sucesso = desempilha(pilha, &saida);
    if (sucesso)
    {
        flag = 1;
    }

    if (flag)
    {
        printf("nao");
    }
    else
    {
        printf("sim");
    }

    return 0;
}