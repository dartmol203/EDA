#include <stdio.h>
#include <math.h>

float potRec(int a, int b)
{
    float resultado;

    if (b == 0)
    {
        return 1;
    }

    return a * potRec(a, b - 1);
}

int main()
{
    int a, b;

    float result;

    scanf("%d %d", &a, &b);

    if (a == 0 && b <= 0)
    {
        printf("indefinido");
    }
    else
    {
        if (b > 0)
        {
            result = potRec(a, b);
        }
        else
        {
            result = potRec(a, -1 * b);
            result = 1 / result;
        }

        printf("%f", result);
    }

    return 0;
}
