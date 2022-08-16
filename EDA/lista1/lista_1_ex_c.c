#include <stdio.h>

int main()
{
    int qntQuest, qntAcerts = 0, i;
    char gabarito[100], resposta[100];
    scanf("%d", &qntQuest);
    scanf("%s", gabarito);
    scanf("%s", resposta);

    for (i = 0; i < qntQuest; i++)
    {
        if (gabarito[i] == resposta[i])
        {
            qntAcerts++;
        }
    }
    printf("%d", qntAcerts);
    return 0;
}
