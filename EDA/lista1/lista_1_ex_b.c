#include <stdio.h>

int main()
{
    int qntNum = 0, entrada, retorno;
    retorno = scanf("%d", &entrada);

    while (retorno == 1)
    {
        retorno = scanf("%d", &entrada);
        qntNum++;
    }
    printf("%d", qntNum);
    return 0;
}