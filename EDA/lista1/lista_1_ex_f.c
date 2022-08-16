#include <stdio.h>

int main()
{
    int entrada;

    scanf("%d", &entrada);

    for (int i = 1; i < (entrada + 1); i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (i < 10)
            {
                printf("0%d ", i);
            }
            else
            {
                printf("%d ", i);
            }
        }
        printf("\n");
    }
    printf("\n");
    for (int i = 1; i < (entrada + 1); i++)
    {
        for (int j = 1; j < i + 1; j++)
        {
            if (j < 10)
            {
                printf("%.2d ", j);
            }
            else
            {
                printf("%d ", j);
            }
        }
        printf("\n");
    }
    return 0;
}