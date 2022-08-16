#include <stdio.h>

int main()
{

    int num[10000], media = 0, numMaior = 0, qntNum;

    scanf("%d", &qntNum);

    for (int i = 0; i < qntNum; i++)
    {
        scanf("%d", &num[i]);
        media = media + num[i];
    }

    media = media / qntNum;

    for (int i = 0; i < qntNum; i++)
    {
        if (num[i] > media)
        {
            printf("%d ", num[i]);
            numMaior++;
        }
    }

    if (numMaior == 0)
    {
        printf("0");
    }

    return 0;
}
