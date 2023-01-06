#include <stdio.h>

void draw(int n)
{
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            printf("-");
        }
        else
        {
            printf("x");
        }
    }
    if (n > 0)
    {

        printf("\n");
    }
}

int main()
{
    int n = 0;
    printf("Enter n: ");
    scanf("%d", &n);

    for (int i = 0; i <= n - 1; i++)
    {
        draw(i);
    }
    draw(n);
    for (int i = n - 1; i > 0; i--)
    {
        draw(i);
    }
    return 0;
}