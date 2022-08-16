#include <stdio.h>

int contaSete(long long int a, int b)
{
    if (a == 0)
    {
        return b;
    }

    if ((a % 10) == 7)
    {
        a = a / 10;

        return contaSete(a, b + 1);
    }
    a = a / 10;
    return contaSete(a, b);
}

int main()
{
    long long int a;
    int b = 0;

    scanf("%lld", &a);

    b = contaSete(a, b);

    printf("%d", b);

    return 0;
}
