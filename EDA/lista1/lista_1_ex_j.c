#include <stdio.h>

void imprimeResultado(int qntC, int qntE, int qntP, int qntU, int qntCartas);

int main()
{

    int cartas[52], retorno, qntCartas = 0, gabarito[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13}, qntC = 13, qntP = 13, qntE = 13, qntU = 13;
    char naipe[52], casas[] = {'C', 'P', 'E', 'U'};

    do
    {
        retorno = scanf("%d %c", &cartas[qntCartas], &naipe[qntCartas]);
        qntCartas++;
    } while (retorno == 2);

    for (int i = 0; i < qntCartas - 1; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            for (int k = 0; k < 13; k++)
            {

                switch (naipe[i])
                {
                case 'C':
                    if (cartas[i] == gabarito[k] && naipe[i] == casas[j])
                    {
                        qntC--;
                    }
                    break;
                case 'P':
                    if (cartas[i] == gabarito[k] && naipe[i] == casas[j])
                    {
                        qntP--;
                    }
                    break;

                case 'E':
                    if (cartas[i] == gabarito[k] && naipe[i] == casas[j])
                    {
                        qntE--;
                    }
                    break;

                case 'U':
                    if (cartas[i] == gabarito[k] && naipe[i] == casas[j])
                    {
                        qntU--;
                    }
                    break;

                default:
                    break;
                }
            }
        }
    }

    for (int i = 0; i < qntCartas; i++)
    {
        for (int j = i + 1; j < qntCartas; j++)
        {
            if (cartas[i] == cartas[j] && naipe[i] == naipe[j])
            {
                switch (naipe[i])
                {
                case 'C':
                    qntC = -1;
                    break;
                case 'P':
                    qntP = -1;
                    break;

                case 'E':
                    qntE = -1;
                    break;

                case 'U':
                    qntU = -1;
                    break;

                default:
                    break;
                }
            }
        }
    }
    imprimeResultado(qntC, qntE, qntP, qntU, qntCartas);

    return 0;
}

void imprimeResultado(int qntC, int qntE, int qntP, int qntU, int qntCartas)
{
    if (qntC < 0)
    {
        printf("erro \n");
    }
    else
    {
        printf("%d \n", qntC);
    }
    if (qntE < 0)
    {
        printf("erro \n");
    }
    else
    {
        printf("%d \n", qntE);
    }
    if (qntU < 0)
    {
        printf("erro \n");
    }
    else
    {
        printf("%d \n", qntU);
    }
    if (qntP < 0)
    {
        printf("erro \n");
    }
    else
    {
        printf("%d \n", qntP);
    }
}