#include <stdio.h>

void invertex(char string[], int i)
{
    if (string[i] != '\0')
    {
        if (string[i] != 'x')
        {
            printf("%c", string[i]);
            invertex(string, i + 1);
        }
        else
        {
            invertex(string, i + 1);
            printf("%c", string[i]);
        }
    }
}

int main()
{
    char string[101];

    scanf(" %s", string);

    invertex(string, 0);

    return 0;
}
