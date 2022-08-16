#include <stdio.h>

void insertionSort(int vet[], int qntNum)
{
    int elem, i, j;
    for (i = 1; i < qntNum; i++)
    {
        elem = vet[i];
        for (j = i - 1; j >= 0 && vet[j] > elem; j--)
        {
            vet[j + 1] = vet[j];
        }
        vet[j + 1] = elem;
    }
}

int main()
{
    int vet[1001], qntNum = 0, retorno;

    retorno = scanf("%d", &vet[qntNum]);
    qntNum++;

    while (retorno != EOF)
    {
        retorno = scanf("%d", &vet[qntNum]);
        qntNum++;
    }
    insertionSort(vet, qntNum - 1);

    for (int i = 0; i < qntNum - 1; i++)
    {
        printf("%d", vet[i]);
        if (i != qntNum - 1)
        {
            printf(" ");
        }
    }

    printf("\n");

    return 0;
}
