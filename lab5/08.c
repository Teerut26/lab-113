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
    int stairs = 0;
    int step = 0;
    printf("Input number of stairs: ");
    scanf("\n%d", &stairs);
    int target_top = stairs - 2;
    int target_bottom = stairs - 1;

    int round = 1;
    while (1)
    {

        // printf("step = %d\n",step);
        if (round > 1)
        {
            printf("Input step command: ");
            int step_temp = 0;
            scanf("\n%d", &step_temp);
            printf("---- round %d ----\n", round);
            if (step_temp == 0)
            {
                break;
            }

            if (step_temp > 0)
            {
                if (step < stairs - 2)
                {
                    step += step_temp;
                }
            }
            else if (step_temp < 0)
            {
                // int stairs_invert = (stairs - 2) * -1;
                // if (step > stairs_invert + 1)
                // {
                //     step += step_temp;
                // }
                if (step < stairs + 2)
                {
                    step += step_temp;
                }
            }

            printf("step_temp = %d\n", step_temp);
            printf("step = %d\n", step);

            // if (step + step_temp <= stairs - 1)
            // {
            //     step += step_temp;
            // }

            // draw(stairs, target_top, target_bottom, step);
        }
        else
        {
            printf("---- round %d ----\n", round);
            draw(stairs, target_top, target_bottom, step);
        }

        round += 1;
    }

    return 0;
}