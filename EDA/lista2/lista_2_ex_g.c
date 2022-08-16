#include <stdio.h>
#include <stdlib.h>

long long int buscaBinaria(long long int *n, long long int x, long long int qntN)
{

    long long int e = -1, d = qntN, meio;
    while (e < d - 1)
    {

        meio = (e + d) / 2;
        if (n[meio] < x)
        {
            e = meio;
        }
        else
        {
            d = meio;
        }
    }

    return -1;
}
void ordena(int *v, int n)
{
    int i;

    if (n <= 1)
    {
        return;
    }

    ordena(v, n - 1);

    int elemento = v[n - 1];
    for (i = n - 2; i >= 0 && v[i] > elemento; i--)
    {
        v[i + 1] = v[i];
    }
    v[i + 1] = elemento;
}

int main()
{

    long long int qntN, qntM, j;
    long long int *n, *m;

    scanf("%lld %lld", &qntN, &qntM);

    n = malloc(qntN * sizeof(long long int));
    m = malloc(qntM * sizeof(long long int));

    for (long long int i = 0; i < qntN; i++)
    {
        scanf("%lld", n + i);
    }

    for (long long int i = 0; i < qntM; i++)
    {
        scanf("%lld", m + i);
    }

    for (long long int i = 0; i < qntM; i++)
    {
        j = buscaBinaria(n, m[i], qntN);
        printf("%lld\n", j);
    }

    free(n);
    free(m);

    return 0;
}
