#include <stdio.h>
#include <math.h>

int main()
{
    int n = 0;
    scanf("%d", &n);
    int is_continue = 1;
    for (int c = 1; c < n && is_continue; c++)
    {
        for (int b = 1; b < c && is_continue; b++)
        {
            int a = sqrt(pow(c, 2) - pow(b, 2));
            if ((pow(a, 2) + pow(b, 2) == pow(c, 2)) && (c + b + a == n) && (a < b))
            {
                printf("(%d, %d, %d)\n", a,b,c);
                is_continue = 0;
            }
        }
    }
    if (is_continue)
    {
        printf("No triple found.\n");
    }

    return 0;
}