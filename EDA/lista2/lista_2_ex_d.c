#include <stdio.h>

long int seq[81] = {0};

long int fibonacci(int n)
{
    if (n == 1 || n == 2)
    {
        return 1;
    }
    else if (seq[n] != 0)
    {
        return seq[n];
    }
    else
    {
        seq[n] = fibonacci(n - 1) + fibonacci(n - 2);
        return seq[n];
    }
}
/*
int main()
{
    int n;
    long long int saida;

    scanf("%d", &n);

    saida = fibonacci(n);

    printf("%lld", saida);

    return 0;
}
*/