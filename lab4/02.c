#include <stdio.h>
#include <stdlib.h>

int is_prime(int n)
{

    if (n == 0 || n == 1)
    {
        return 0;
    }

    for (int i = 2; i <= n / 2; ++i)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }

    return 1;
}
int main()
{
    char n_str[10];
    fgets(n_str, 10, stdin);
    int n = atoi(n_str);
    for (int i = 2; i <= n; ++i)
    {
        if (is_prime(i) || i == 2)
        {
            printf("%d is a prime number.\n", i);
        }
    }
    return 0;
}
