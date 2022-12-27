#include <stdio.h>
#include <stdlib.h>

int side(int n, char letter, int shift)
{
    for (int i = 0; i < (2 * shift); i++)
    {
        printf("-");
    }

    for (int i = (n - 1) - shift; i > 0; i--)
    {
        printf("%c", letter + i + shift);
        printf("-");
    }

    for (int i = 0; i < (n - shift); i++)
    {
        printf("%c", letter + i + shift);
        if (i < (n - 1) - shift)
        {
            printf("-");
        }
    }
    for (int i = 0; i < (2 * shift); i++)
    {
        printf("-");
    }
    printf("\n");
    return 0;
}

int main()
{
    char letter, n_str[10];
    letter = 97;
    int n = 0;
    fgets(n_str, 10, stdin);
    n = atoi(n_str);
    if (n <= 0 || n > 26)
    {
        printf("-");
        return 0;
    }
    for (int i = n -1; i > 0; i--)
    {
        side(n, letter, i);
    }
    side(n, letter, 0);
    for (int i = 1; i < n; i++)
    {
        side(n, letter, i);
    }
    return 0;
}