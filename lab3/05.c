#include <stdio.h>
#include <stdlib.h>

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
    

    for (int i = n-1; i > 0; i--)
    {
        printf("%c", letter + i);
        printf("-");
    }

    for (int i = 0; i < n; i++)
    {
        printf("%c", letter + i);
        if (i < n-1)
        {
            printf("-");
        }
    }

    // printf("%c\n",letter + 10);
}