#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long long base2(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return (n % 2) + 10 * base2(n / 2);
    }
}

int main()
{
    char n_str[10];
    fgets(n_str, 10, stdin);
    int n = atoi(n_str);
    printf("%llu", base2(n));
    return 0;
}

