#include <stdio.h>
#include <stdlib.h>

int main()
{
    char n_str[10];
    fgets(n_str,10,stdin);
    int n = atoi(n_str);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (int i = n -1; i >= 0; i--)
    {
        for (int j = i; j > 0; j--)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}