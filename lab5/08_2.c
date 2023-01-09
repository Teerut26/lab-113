#include <stdio.h>

void draw(int n, int top, int bottom, int _shift)
{
    int shift = _shift * -1;

    if (shift < 0)
    {
        if ((n - 2 + shift) >= 0 && (n - 1 + shift) >= 1)
        {
            top = n - 2 + shift;
            bottom = n - 1 + shift;
        }
        else
        {
            top = 0;
            bottom = 1;
        }
    }
    else if (shift > 0)
    {
        if ((shift <= (n - 2)) && (shift + 1 <= (n - 1)))
        {
            top = shift;
            bottom = shift + 1;
        }
        else
        {
            top = n - 2;
            bottom = n - 1;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (i == top)
        {
            printf("|-O-|\n");
        }
        else if (i == bottom)
        {
            printf("|-^-|\n");
        }
        else
        {
            printf("|---|\n");
        }
    }
}

int main()
{
    int n = 0;
    printf("Input number of stairs: ");
    scanf("\n%d", &n);

    int round = 1;
    int step = 0;

    while (1)
    {
        printf("---- round %d ----\n", round);
        draw(n, n - 2, n - 1, step);
        int tstep = 0;
        printf("Input step command: ");
        scanf("\n%d", &tstep);
        if (tstep == 0)
        {
            break;
        }
        else
        {
            if ((tstep + step) <= n && step >= 0)
            {
                if ((tstep + step) < n - 1)
                {
                    if (tstep + step < 0)
                    {
                        step = 0;
                    }
                    else
                    {
                        step += tstep;
                    }
                }else if ((tstep + step) >= n) {
                    step = n - 2;
                }else {
                    step = n - 1;
                }
            }
        }
        round += 1;
    }
}