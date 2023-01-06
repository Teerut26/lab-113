#include <stdio.h>
#include <math.h>

int main()
{

    int n = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    int i = 0;
    int i2 = 1;
    double sum = 4;
    while (i < n)
    {
        if (i >= 1)
        {
            if (i % 2 == 0)
            {

                sum += 4.0 / i2;
            }
            else
            {
                sum -= 4.0 / i2;
            }
        }
        i2 += 2;
        i += 1;
    }

    printf("%.10f", sum);

}