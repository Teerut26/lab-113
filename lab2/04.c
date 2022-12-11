#include <stdio.h>
#include <stdlib.h>

int main()
{
    char salary_str[10];
    fgets(salary_str, 10, stdin);
    double salary_f = atof(salary_str);
    float tax = 0;

    if (salary_f >= 0)
    {
        if (salary_f <= 300000)
        {
            tax = salary_f * 0.05;
        }
        else
        {
            if (salary_f >= 300000){
                tax = 300000 * 0.05;
                salary_f -= 300000;
            }

            if (salary_f > 0) {
                tax = tax + (salary_f * 0.100);
            }
        }

        printf("%.2f", tax);
    }
    else
    {
        printf("Error: Salary must be greater or equal to 0");
    }

    return 0;
}