#include <stdio.h>
#include <math.h>

long long countNumber(long long n)
{
    long long i = 0;

    while (n != 0)
    {
        n = n / 10;
        i += 1;
    }
    return i;
}

long long checkIsAutomorphicNumber(long long n)
{
    long long i1 = 0;
    long long pow_result = (long long)pow(n, 2);
    long long result = 0, result2 = 0;
    long long n2 = n;

    while (n2 != 0)
    {
        result2 += n2 % 10;
        n2 = n2 / 10;
    }

    while (pow_result != 0)
    {
        if (i1 <= (countNumber(n) - 1))
        {
            result += pow_result % 10;
        }
        pow_result = pow_result / 10;
        i1 += 1;
    }
    return result == result2;
}

int main()
{
    long long n;

    printf("Input n = ");
    scanf("%lld", &n);
    printf("n^2 = %lld\n",(long long)pow(n, 2));
    if (checkIsAutomorphicNumber(n))
    {
        printf("Yes. %lld is automorphic number.", n);
    }
    else
    {

        printf("No. %lld is not automorphic number.", n);
    }
    return 0;
}