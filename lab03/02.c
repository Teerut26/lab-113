#include <stdio.h>
#include <stdlib.h>

int main()
{
    char n1_str[30], n2_str[30];
    long long m, n;

    fgets(n1_str, 30, stdin);
    fgets(n2_str, 30, stdin);

    m = atoll(n1_str);
    n = atoll(n2_str);

    while (n != 0)
    {
        long long r = m % n;
        m = n;
        n = r;
    }

    long long lcm = (atoll(n1_str) * atoll(n2_str)) / m;

    printf("GCD: %lld\n", m);
    printf("LCM: %lld\n", lcm);
}