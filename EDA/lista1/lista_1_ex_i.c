#include <stdio.h>
#include <math.h>
#include <string.h>

int encaixa(int a, int b)
{
    int igual = 1;
    a = abs(a);
    b = abs(b);

    do
    {
        if (a % 10 != b % 10)
        {
            igual = 0;
            break;
        }
        a = a / 10;
        b = b / 10;
    } while (b != 0);

    if (igual == 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{

    int a, b;

    scanf("%d %d", &a, &b);

    printf("%d\n", encaixa(a, b));

    return 0;
}