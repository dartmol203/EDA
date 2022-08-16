#include <stdio.h>

int main()
{
    int b, t;
    float a1, a2;
    scanf("%d", &b);
    scanf("%d", &t);

    a1 = ((b + t) * 70) / 2;
    a2 = (((160 - b) + (160 - t)) * 70) / 2;

    if (a1 > a2)
    {
        printf("1");
    }
    if (a1 < a2)
    {
        printf("2");
    }
    if (a1 == a2)
    {
        printf("0");
    }
    return 0;
}