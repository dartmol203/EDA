#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long long int buscaBinaria(long long int *n, double x, long long int qntN)
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

    return d;
}

int main()
{

    long long int qntCirculos, qntTiros, pontos = 0;
    double distCentro;
    long long int *raios, *posX, *posY;

    scanf("%lld %lld", &qntCirculos, &qntTiros);

    raios = malloc(qntCirculos * sizeof(long long int));
    posX = malloc(qntTiros * sizeof(long long int));
    posY = malloc(qntTiros * sizeof(long long int));

    for (long long int i = 0; i < qntCirculos; i++)
    {
        scanf("%lld", &raios[i]);
    }

    for (long long int i = 0; i < qntTiros; i++)
    {
        scanf("%lld %lld", posX + i, posY + i);
    }

    for (long long int i = 0; i < qntTiros; i++)
    {
        distCentro = sqrt((posX[i] * posX[i]) + (posY[i] * posY[i]));
        pontos += qntCirculos - buscaBinaria(raios, distCentro, qntCirculos);
    }

    printf("%lld", pontos);

    free(raios);
    free(posX);
    free(posY);

    return 0;
}