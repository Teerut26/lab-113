#include <stdio.h>
#include <stdlib.h>

int main()
{
    char sideAc[10], sideBc[10], sideCc[10];

    printf("Enter length of side A: ");
    fgets(sideAc, 8, stdin);
    printf("Enter length of side B: ");
    fgets(sideBc, 8, stdin);
    printf("Enter length of side C: ");
    fgets(sideCc, 8, stdin);

    int sideA = atoi(sideAc);
    int sideB = atoi(sideBc);
    int sideC = atoi(sideCc);

    if (((sideA + sideB) <= sideC) || ((sideA + sideC) <= sideB) || ((sideB + sideC) <= sideA) || sideA == 0 || sideB == 0 || sideC == 0)
    {
        printf("Triangle type is invalid.");
    }
    else
    {
        if ((sideA == sideB) && (sideA == sideC) && (sideB == sideC))
        {
            printf("Triangle type is equilateral.");
        }
        else if ((sideA == sideB) || (sideA == sideC) || (sideB == sideC))
        {
            printf("Triangle type is isosceles.");
        }
        else if ((sideA != sideB) && (sideA != sideC) && (sideB != sideC))
        {
            printf("Triangle type is scalene.");
        }
    }

    return 0;
}