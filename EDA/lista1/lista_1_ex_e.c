#include <stdio.h>

int main()
{
    int somaP = 0, somaI = 0, entrada;
    do
    {
        scanf("%d", &entrada);
        if (entrada % 2 == 0)
        {
            somaP = somaP + entrada;
        }
        else
        {
            somaI = somaI + entrada;
        }

    } while (entrada != 0);
    printf("%d %d", somaP, somaI);
    return 0;
}