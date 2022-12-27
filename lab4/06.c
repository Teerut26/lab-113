#include <stdio.h>
#include <stdlib.h>

int main()
{
    char goal_amount_str[10];
    float goal_amount, amount_current;
    amount_current = 0;
    printf("Enter your goal amount: ");
    fgets(goal_amount_str, 10, stdin);
    goal_amount = atof(goal_amount_str);

    int i = 1;
    while (1)
    {
        char money_collect_str[10];
        printf("Enter money collected today: ");
        fgets(money_collect_str, 10, stdin);
        amount_current += atof(money_collect_str);
        if (amount_current >= goal_amount)
        {
            if (i == 1)
            {
                printf("Congratulations! You take %d day to reach your goal.", i);
                break;
            }

            printf("Congratulations! You take %d days to reach your goal.", i);
            break;
        }
        printf("Total money collected up to day %d is %.2f. You need %.2f more.\n", i, amount_current, (goal_amount - amount_current));

        i += 1;
    }

    return 0;
}