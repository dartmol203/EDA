#include <stdio.h>

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
/*
int main()
{
    int v[6] = {10, 2, 18, 3, 4, -15};

    ordena(v, 6);

    for (int i = 0; i < 6; i++)
    {
        printf("%d ", v[i]);
    }

    return 0;
}
*/